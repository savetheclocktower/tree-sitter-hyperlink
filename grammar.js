module.exports = grammar({
  name: 'hyperlink',

  extras: _ => [],

  externals: $ => [
    // $._eof,
  ],

  conflicts: $ => [
    [$._url_segment],
    [$._url_segment, $._delimiter_matching_scenarios]
  ],

  rules: {
    prose: $ => repeat(
      choice(
        $.url,
        $._url_with_trailing_characters,
        $._url_fragment,
        $._non_url_text,
        $._space,
      )
    ),

    _url_with_trailing_characters: $ => seq(
      $.url,
      $._qs_non_accepting
    ),

    url: $ => prec.left(2, seq(
      $._protocol,
      '//',
      $._domain,
      repeat($._url_segment)
    )),

    // A URL fragment isn't a URL; it's one of several sequences that _almost_
    // matches a URL but isn't there yet.
    //
    // At any point in the `url` rule's sequence, if the next item in the chain
    // isn't present, we need another rule that can match to give the parser an
    // option other than erroring.
    _url_fragment: $ => choice(
      seq($._protocol),
      seq($._protocol, '//')
    ),

    _protocol: _ => choice('http:', 'https:'),

    // _hostname_without_tld: _ => token.immediate(/[^\.)\]\s\n\t\/"']+/),
    _hostname_without_tld: _ => token.immediate(/[a-zA-Z0-9_\-]+/),

    _domain: $ => prec(2, seq(
      $._hostname_without_tld,
      // Be permissive here. For feature parity with the TM grammar, stuff like
      // https://x will still be recognized as a URL.
      optional(repeat(seq(
        '.',
        $._url_segment
      )))
    )),

    _url_segment: $ => choice(
      $._qs_accepting,
      seq(
        $._qs_middle,
        $._qs_accepting
      ),
      $._delimiter_matching_scenarios
    ),

    _delimiter_matching_scenarios: $ => choice(
      // In situations where we would normally exclude `)` from the end of a
      // URL, we'll allow it if we encountered its paired `(` somewhere inside
      // the URL.
      //
      // This is a bit brittle, but it fixes the most common case: Wikipedia
      // URLs. It also matches the behavior of the hyperlink TM grammar.
      //
      // In the future, we could add other pairs of delimiters if they make
      // sense, but for now this should be enough.
      seq(
        optional($._qs_middle),
        '(',
        optional($._qs_middle),
        token(prec(3, ')'))
      ),
    ),

    // Valid characters to appear in a domain name before the dot and TLD.
    _domain_accepting: _ => token.immediate(/[a-zA-Z0-9_\-]+/),

    // Valid characters at any position in a URL path or query string.
    _qs_accepting: _ => token.immediate(/[a-zA-Z0-9_&*@\\`^$=\-\d%|+#/~\-]+/), // TODO: Possibly others?

    // Characters that are generally invalid at the _end_ of a URL path or
    // query string, but valid anywhere else.
    //
    // These characters typically mark a boundary between a URL and something
    // else. Consider http://google.com; that semicolon you just read was for
    // the prose and not the URL. The presence of whitespace on the other side
    // of the semicolon just confirms that we're right to end the URL before
    // the semicolon.
    //
    // This applies no matter how many of these characters are encountered in a
    // row. (Consider http://example.com.) We've now got _two_ characters that
    // separate the URL from the next whitespace, and neither one should be
    // considered to be part of the URL.

    // NOTE: We used to have ' and " in this list, and we can add them back if
    // truly necessary; but I haven't seen any evidence that it's necessary.
    // The TM grammar didn’t envision that either character could be valid in
    // a query string or path.
    _qs_non_accepting: _ => token.immediate(/[:,.!?;{}\[\]\(\)]+/),

    // A shorthand for path or query-string content occurring anywhere but the
    // end of the URL.
    _qs_middle: $ => repeat1(choice($._qs_non_accepting, $._qs_accepting)),

    _non_url_text: _ => token(prec(-1, /\S/)),
    _space: _ => token(/[\s\n]+/),
  }
});
