# tree-sitter-hyperlink

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for detecting URLs in prose.

Eventually designed to do all the things [TextMate’s hyperlink helper bundle](https://github.com/textmate/hyperlink-helper.tmbundle/blob/master/Syntaxes/Hyperlink.tmLanguage) can do. That bundle got converted to Atom as [language-hyperlink](https://github.com/pulsar-edit/language-hyperlink/), but a tree-sitter version needs to exist for injecting into tree-sitter grammars in [Pulsar](https://pulsar-edit.dev/).


## Syntax

Support is currently limited to URLs that

* begin with `http` or `https`,
* have sections of ordinary text with dots/slashes in between, and
* do not end with any of `."'])`, all of which are far more likely to be meant
  as a prose delimiter rather than part of the URL.

Validity of the URL, or of any TLDs, is _far_ beyond the ambitions of this parser.

## Examples

URLs that will be correctly identified and highlighted:

```
http://example.com/foo?bar=baz

You might find my web site at https://example.com. The period at the end of the last sentence is not part of the URL.

One example would be [this one](http://example.com/foo?bar=baz), like in Markdown.

Or this one [http://example.com]

This fragment will be ignored http://
As will this one https://bleh

CSS URL without quotes:
@import url(https://www.example.com/style.css);

CSS URL with quotes:
div {
  background-image: url("https://www.example.com/style.gif");
}

also https://example.net.
```

URLs that will not currently be identified correctly:

```
Sorry, Elvis: https://en.wikipedia.org/wiki/Alison_(song) (because the closing parenthesis is mistakenly assumed not to be part of the URL)
```

## Tests

What I need to be able to test this properly is to inspect _the exact boundaries_ of a match, and [neither](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test) [kind](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#unit-testing) of tree-sitter test does exactly what I need it to.

Until I get around to something more rigorous: if you’re contributing a change and want to guard against regressions, compare the output of `tree-sitter parse examples/example.txt` with the contents of `example_tree.txt`.

## TODO

* Fix the issue with parens in URLs — ideally by allowing one `)` for each `(` encountered in a URL, and the same with `[]`
