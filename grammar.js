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
	    $.include,
	    $.undefined,
	    $.display,
	    $.multind,

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
),

	include: $ => seq('include', $._sp, $.filename),
	undefined: $ => seq('undefined', $._sp, $.dots_with_zero),
	display: $ => seq('display', $._sp, $.chars, $._sp, $.dots_with_zero),
	multind: $ => seq(optional($._prefix), 'multind', $._sp, $.dots, $._sp, $.chars),

	space: $ => seq(optional($._prefix), 'space', $._sp, $.chars, $._sp, $.dots_with_zero),
	punctuation: $ => seq(optional($._prefix), 'punctuation', $._sp, $.chars, $._sp, $.dots_with_zero),
	digit: $ => seq('digit', $._sp, $.chars, $._sp, $.dots),
	grouping: $ => seq('grouping', $._sp, $.name, $._sp, $.chars, $._sp, $.dots, ',', $.dots),
	letter: $ => seq('letter', $._sp, $.chars, $._sp, $._dots_with_zero_or_equal),
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

	_dots_with_zero_or_equal: $ => choice(
	    $.equal,
	    $.dots_with_zero
	),
	equal: $ => '=',

	name: $ => /[a-zA-Z]+/,
	dots_with_zero: $ => /[0-9a-f]+(-[0-9a-f]+)*/,
	dots: $ => /[1-9a-f]+(-[1-9a-f]+)*/,

	esc_seq: $ => choice('\\\\', '\\f', '\\n', '\\r', '\\s', '\\t', '\\v', '\\e'),
	chars: $ => choice($.esc_seq, /[^ \t\n]+/),

	filename: $ => /[-a-zA-Z0-9._\/]+/,
	_newline: $ => choice('\n', '\r\n', '\r'),
	_sp: $ => /[ \t]+/,
	_sp_maybe: $ => /[ \t]*/,

	ascii_digit: $ => /[0-9]/
    },
    extras: $ => []
});
