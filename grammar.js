module.exports = grammar({
    name: 'liblouis',

    rules: {
	source_file: $ => repeat($._line),
	_line: $ => seq($._line1, $._newline),
	_line1: $=> choice(
	    $.comment,
	    $._rule_with_comment,
	    $._empty_line
	),
	comment: $ => seq('#', $._not_newline),
	end_comment: $ => seq($._sp, $._not_newline),
	_not_newline: $ => /[^\n]*/,
	_empty_line: $ => $._sp_maybe,

	_rule_with_comment: $ => seq(
	    $._sp_maybe,
	    $._rule,
	    choice($.end_comment, $._sp_maybe)
	),
	_rule: $ => choice(
	    // Miscellaneous Opcodes
	    $.include,
	    $.undefined,
	    $.display,
	    $.multind,

	    // Character-Definition Opcodes
	    $.space,
	    $.punctuation,
	    $.digit,
	    $.grouping,
	    $.letter,
	    $.lowercase,
	    $.uppercase,
	    $.litdigit,
	    $.sign,
	    $.math,

	    // Braille Indicator Opcodes

	    // Emphasis Opcodes

	    // Braille Indicator Opcodes
	    $.capsletter,
	    $.begcapsword,
	    $.endcapsword,
	    $.capsmodechars,
	    $.begcaps,
	    $.endcaps,
	    $.begcapsphrase,
	    $.endcapsphrase,
	    $.lencapsphrase,
	    $.letsign,
	    $.noletsign,
	    $.noletsignbefore,
	    $.noletsignafter,
	    $.nocontractsign,
	    $.numsign,
	    $.numericnocontchars,
	    $.numericmodechars,
	    $.midendnumericmodechars,

	    $.decpoint,
	    $.hyphen, // FIXME: Does hyphen really need a nofor prefix?

	    // Special Processing Opcodes
	    $.capsnocont,

	    // Translation Opcodes
	    $.compbrl,
	    $.comp6,
	    $.nocont,
	    $.replace,
	    $.always,
	    $.repeated,
	    $.repword,
	    $.rependword,
	    $.largesign,
	    $.word,
	    $.syllable,
	    $.joinword,
	    $.lowword,
	    $.contraction,
	    $.sufword,
	    $.prfword,
	    $.begword,
	    $.begmidword,
	    $.midword,
	    $.midendword,
	    $.endword,
	    $.partword,
),

	include: $ => seq('include', $._sp, $.filename),
	undefined: $ => seq('undefined', $._sp, $.dots_with_zero),
	display: $ => seq('display', $._sp, $.chars, $._sp, $.dots_with_zero),
	multind: $ => seq(optional($._prefix), 'multind', $._sp, $.dots, $._sp, $.chars),

	space: $ => seq(optional($._prefix), 'space', $._sp, $.chars, $._sp, $.dots_with_zero),
	punctuation: $ => seq(optional($._prefix), 'punctuation', $._sp, $.chars, $._sp, $.dots_with_zero),
	digit: $ => seq('digit', $._sp, $.chars, $._sp, $.dots),
	grouping: $ => seq('grouping', $._sp, $.name, $._sp, $.chars, $._sp, $.dots, ',', $.dots),
	letter: $ => seq('letter', $._sp, $.chars, $._sp, $.dots_with_zero_or_equal),
	lowercase: $ => seq(optional($._prefix), 'lowercase', $._sp, $.chars, $._sp, $.dots),
	uppercase: $ => seq(optional($._prefix), 'uppercase', $._sp, $.chars, $._sp, $.dots),
	litdigit: $ => seq('litdigit', $._sp, $.chars, $._sp, $.dots),
	sign: $ => seq(optional($._prefix), 'sign', $._sp, $.chars, $._sp, $.dots_with_zero),
	math: $ => seq(optional($._prefix), 'math', $._sp, $.chars, $._sp, $.dots_with_zero),

	capsletter: $ => seq(optional($._prefix), 'capsletter', $._sp, $.dots),
	begcapsword: $ => seq(optional($._prefix), 'begcapsword', $._sp, $.dots),
	endcapsword: $ => seq(optional($._prefix), 'endcapsword', $._sp, $.dots),
	capsmodechars: $ => seq('capsmodechars', $._sp, $.chars),
	begcaps: $ => seq('begcaps', $._sp, $.dots),
	endcaps: $ => seq('endcaps', $._sp, $.dots),
	begcapsphrase: $ => seq('begcapsphrase', $._sp, $.dots),
	endcapsphrase: $ => seq('endcapsphrase', $._sp, choice($.before, $.after), $._sp, $.dots),
	lencapsphrase: $ => seq('lencapsphrase', $._sp, $.chars, $._sp, $.ascii_digit),
	letsign: $ => seq('letsign', $._sp, $.dots),
	noletsign: $ => seq('noletsign', $._sp, $.chars),
	noletsignbefore: $ => seq('noletsignbefore', $._sp, $.chars),
	noletsignafter: $ => seq('noletsignafter', $._sp, $.chars),
	nocontractsign: $ => seq('nocontractsign', $._sp, $.dots),
	numsign: $ => seq('numsign', $._sp, $.dots),
	numericnocontchars: $ => seq('numericnocontchars', $._sp, $.chars),
	numericmodechars: $ => seq('numericmodechars', $._sp, $.chars),
	midendnumericmodechars: $ => seq('midendnumericmodechars', $._sp, $.chars),

	decpoint: $ => seq('decpoint', $._sp, $.chars, $._sp, $.dots),
	hyphen: $ => seq('hyphen', $._sp, $.chars, $._sp, $.dots),
	capsnocont: $ => 'capsnocont',

	compbrl: $ => seq(optional($._prefix), 'compbrl', $._sp, $.chars),
	comp6: $ => seq('comp6', $._sp, $.chars, $._sp, $.dots_or_equal),
	nocont: $ => seq('nocont', $._sp, $.chars),
	replace: $ => choice(
	    seq('replace', $._sp, $.chars),
	    // prefer the longer rule
	    prec(1, seq('replace', $._sp, $.chars, $._sp, $.chars))
	),
	always: $ => seq(optional($._prefix), repeat($.with_class), 'always', $._sp, $.chars, $._sp, $.dots_with_zero),
	repeated: $ => seq(optional($._prefix), 'repeated', $._sp, $.chars, $._sp, $.dots_with_zero),
	repword: $ => seq('repword', $._sp, $.chars, $._sp, $.dots),
	rependword: $ => seq('rependword', $._sp, $.chars, $._sp, $.dots, ',', $.dots),
	largesign: $ => seq('largesign', $._sp, $.chars, $._sp, $.dots),
	word: $ => seq(optional($._prefix), repeat($.with_class), 'word', $._sp, $.chars, $._sp, $.dots),
	syllable: $ => seq('syllable', $._sp, $.chars, $._sp, $.dots_or_equal),
	joinword: $ => seq('joinword', $._sp, $.chars, $._sp, $.dots),
	lowword: $ => seq(optional($._prefix), 'lowword', $._sp, $.chars, $._sp, $.dots),
	contraction: $ => seq('contraction', $._sp, $.chars),
	sufword: $ => seq(optional($._prefix), repeat($.with_class), 'sufword', $._sp, $.chars, $._sp, $.dots),
	prfword: $ => seq('prfword', $._sp, $.chars, $._sp, $.dots),
	begword: $ => seq(optional($._prefix), repeat($.with_class), 'begword', $._sp, $.chars, $._sp, $.dots_with_zero_or_equal),
	begmidword: $ => seq(optional($._prefix), repeat($.with_class), 'begmidword', $._sp, $.chars, $._sp, $.dots),
	midword: $ => seq(optional($._prefix), repeat($.with_class), 'midword', $._sp, $.chars, $._sp, $.dots_with_zero),
	midendword: $ => seq(optional($._prefix), repeat($.with_class), 'midendword', $._sp, $.chars, $._sp, $.dots_or_equal),
	endword: $ => seq(optional($._prefix), repeat($.with_class), 'endword', $._sp, $.chars, $._sp, $.dots_with_zero_or_equal),
	partword: $ => seq(optional($._prefix), repeat($.with_class), 'partword', $._sp, $.chars, $._sp, $.dots),

	before: $ => 'before',
	after: $ => 'after',
	noback: $ => 'noback',
	nofor: $ => 'nofor',
	nocross: $ => 'nocross',
	_prefix: $ => seq(
	    choice(
		seq(
		    choice($.noback, $.nofor),
		    optional(seq($._sp, $.nocross))),
		$.nocross),
	    $._sp
	),
	with_class: $ => seq(choice($.before, $.after), $._sp, $.ascii_chars, $._sp),

	dots_or_equal: $ => choice(
	    $.equal,
	    $.dots
	),
	dots_with_zero_or_equal: $ => choice(
	    $.equal,
	    $.dots_with_zero
	),
	equal: $ => '=',

	name: $ => /[a-zA-Z]+/,
	dots_with_zero: $ => /[0-9a-f]+(-[0-9a-f]+)*/,
	dots: $ => /[1-9a-f]+(-[1-9a-f]+)*/,

	esc_seq: $ => choice('\\\\', '\\f', '\\n', '\\r', '\\s', '\\t', '\\v', '\\e'),
	chars: $ => choice($.esc_seq, /[^ \t\n]+/),
	ascii_chars: $ => /[a-zA-Z][a-zA-Z0-9]*/,

	filename: $ => /[-a-zA-Z0-9._\/]+/,
	_newline: $ => choice('\n', '\r\n', '\r'),
	_sp: $ => /[ \t]+/,
	_sp_maybe: $ => /[ \t]*/,

	ascii_digit: $ => /[0-9]/
    },
    extras: $ => [],
    inline: $ => [$.dots_or_equal, $.dots_with_zero_or_equal]
});
