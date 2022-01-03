# Tree-sitter for liblouis tables

A [Tree-sitter parser][] for liblouis tables.

This can serve as a way to support structural editing, syntax checks
and highlighting for [liblouis][] braille tables in any editor that
supports tree-sitter (currently [Atom][], possibly [neovim][] and
[Emacs][]).

It can also be used as a basis for a parser for the liblouis tables
although personally I would prefer a Rust native solution such as
[nom][] or [pest][].

[Tree-sitter parser]: https://tree-sitter.github.io/tree-sitter/
[liblouis]: https://github.com/liblouis/liblouis
[Atom]: https://atom.io/
[neovim]: https://neovim.io/
[Emacs]: https://www.gnu.org/software/emacs/
[nom]: https://github.com/Geal/nom
[pest]: https://github.com/pest-parser/pest

# Install

``` console
npm install tree-sitter-liblouis
```

# Build

``` console
npm install
export PATH=$PATH:./node_modules/.bin
tree-sitter generate
```

To run the test suite

``` console
tree-sitter test
```

# Usage

## Parsing

``` console
tree-sitter parse '/path/to/liblouis/tables/*' --quiet --stat
```

To get the syntax tree for a particular table

``` console
tree-sitter parse /path/to/liblouis/tables/nl-NL-g0.utb
```

You can even get an XML export of the syntax tree

``` console
tree-sitter parse /path/to/liblouis/tables/nl-NL-g0.utb --xml
```

For more info consult the help with `tree-sitter parse --help`.

## Highlighting

You can use tree-sitter to highlight the source code of a liblouis
table. You need to set up your [per-user configuration][] for this to
work.

``` console
tree-sitter highlight ~/src/liblouis/tables/da-dk-g28.ctb
```

Again, consult the help with `tree-sitter highlight --help`. You can for
example generate a highlighted HTML document

``` console
tree-sitter highlight ~/src/liblouis/tables/da-dk-g28.ctb --html > da-dk-g28.html
```

To get feel how this looks using the [standard theme][] look at the
generated [da-dk-g28.html][].

[per-user configuration]: https://tree-sitter.github.io/tree-sitter/syntax-highlighting#per-user-configuration
[standard theme]: https://tree-sitter.github.io/tree-sitter/syntax-highlighting#theme
[da-dk-g28.html]: examples/da-dk-g28.html

# Status

As of this date the parser handles all liblouis tables except for
`ja-kantenji.utb` and `ko-chars.cti`. There seems be a problem with
some Hangul and Han characters.

I had hoped this would be immediately applicable in a wide range of
editors. But it appears that not that many support tree-sitter yet.
Emacs has a [tree-sitter package][]. But it still needs some manual
tweaking to make it recognize the liblouis tree-sitter.

[tree-sitter package]: https://github.com/emacs-tree-sitter/elisp-tree-sitter

# Acknowledgements

The grammar is pretty much just a port of the [EBNF grammar][] in
[rewrite-louis][], which in turn is a just port of the [Parsing
expression grammar][] from [louis-parser][].

[EBNF grammar]: https://en.wikipedia.org/wiki/Extended_Backus%E2%80%93Naur_form
[rewrite-louis]: https://github.com/liblouis/rewrite-louis
[Parsing expression grammar]: https://en.wikipedia.org/wiki/Parsing_expression_grammar
[louis-parser]: https://github.com/liblouis/louis-parser

# License

Copyright (C) 2021 Swiss Library for the Blind, Visually Impaired and
Print Disabled

Permission to use, copy, modify, and/or distribute this software for any
purpose with or without fee is hereby granted, provided that the above
copyright notice and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED \"AS IS\" AND THE AUTHOR DISCLAIMS ALL
WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE
FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY
DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING
OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
