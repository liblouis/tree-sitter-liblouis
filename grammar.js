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
	    $.letter,
	),

	include: $ => seq('include', $._sp, $.filename),
	undefined: $ => seq('undefined', $._sp, $.dots_with_zero),
	display: $ => seq('display', $._sp, $.chars, $._sp, $.dots_with_zero),
	letter: $ => seq('letter', $._sp, $.chars, $._sp, $._dots_with_zero_or_equal),

	_dots_with_zero_or_equal: $ => choice(
	    $.equal,
	    $.dots_with_zero
	),
	equal: $ => '=',
	dots_with_zero: $ => seq(
	    $.dot_with_zero,
	    repeat(seq('-', $.dot_with_zero))
	),
	dot_with_zero: $ => /[0-9a-f]+/,

	esc_seq: $ => choice('\\\\', '\\f', '\\n', '\\r', '\\s', '\\t', '\\v', '\\e'),
	chars: $ => choice($.esc_seq, /[^ \t\n]+/),

	filename: $ => /[-a-zA-Z0-9._\/]+/,
	_newline: $ => choice('\n', '\r\n', '\r'),
	_sp: $ => /[ \t]+/,
	_sp_maybe: $ => /[ \t]*/,
    },
    extras: $ => []
});
