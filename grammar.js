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
    },
    extras: $ => []
});
