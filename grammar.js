module.exports = grammar({
  name: 'hyperlink',

  extras: $ => [],

  externals: $ => [
    // Turns out I don't need this external for now, but I'll keep it around
    // just in case
    // $._rest_not_eof
  ],

  // Edge cases:
  //
  // URLs with a period at the end should not include the period _unless there
  // is other text on the other side of the period._

  // We want _url_that_does_not_end_in_a_period to beat url when the difference
  // between the two matches is one character, but not when the difference is
  // greater than that.

  rules: {
    prose: $ => repeat(
      choice(
        $.url,
        $._url_fragment,
        $._non_url_text,
        $._space
      )
    ),

    url: $ => seq(
      $._protocol,
      $._double_slash,
      $._rest,
      repeat1($._url_segment)
    ),

    // Allow any number of
    _url_segment: $ => choice(
      $._dot_then_rest,   // dot-then-text pairs,
      $._slash_then_rest, // slash-then-text pairs,
      $._slash            // or slashes.
    ),

    // At any point in the `url` rule's sequence, if the next item in the chain
    // isn't present, we need another rule that can match to give the parser
    // an option other than erroring.
    _url_fragment: $ => choice(
      seq($._protocol),
      seq($._protocol, $._double_slash),
      seq($._protocol, $._double_slash, $._rest),
    ),

    _dot_then_single_rest: $ => token.immediate(/\.[^\.)\]\s\n\t\/]{1}/),

    _dot_then_rest: $ => seq(
      // Only consider dots if they are immediately followed by another
      // URL-like character. This prevents us from matching the trailing dot
      // on…
      //
      //  My site is at https://example.com.
      //
      // …by not matching any rule that could begin this sequence.
      $._dot_then_single_rest,
      optional($._rest)
    ),

    _slash_then_rest: $ => seq($._slash, $._rest),

    _protocol: $ => choice('http:', 'https:'),
    _double_slash: $ => '//',

    _rest: $ => repeat1($._single_rest),
    _single_rest: $ => token.immediate(/[^\.)\]\s\n\t\/"']{1}/),

    // Any number of URL-like characters that are
    //   (a) not slashes or dots, but
    //   (b) also not characters that are highly unlikely to appear in a valid
    //       URL: single and double quotation marks, closing parentheses and
    //       square braces, and so on.
    //
    // This will fail with some Wikipedia URLs — those that end in `)` — so the
    // fix there would probably be to allow one `)` for every `(` we've already
    // encountered. I'll leave that enhancement to a future contributor!
    _dot: $ => token.immediate('.'),
    _slash: $ => token.immediate('/'),
    _non_url_text: $ => /./,
    _space: $ => token(/[\s\n]+/)
  }
});
