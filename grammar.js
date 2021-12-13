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
	    $.base,
	    $.lowercase,
	    $.uppercase,
	    $.litdigit,
	    $.sign,
	    $.math,

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

	    // Standing alone sequences
	    $.seqdelimiter,
	    $.seqbeforechars,
	    $.seqafterchars,
	    $.seqafterpattern,
	    $.seqafterexpression,

	    // Emphasis Opcodes
	    $.class,
	    $.emphclass,
	    $.begemph,
	    $.endemph,
	    $.noemphchars,
	    $.emphletter,
	    $.begemphword,
	    $.endemphword,
	    $.emphmodechars,
	    $.begemphphrase,
	    $.endemphphrase,
	    $.lenemphphrase,

	    // Special Symbol Opcodes
	    $.decpoint,
	    $.hyphen,

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
	    $.exactdots,
	    $.prepunc,
	    $.postpunc,
	    $.begnum,
	    $.midnum,
	    $.endnum,
	    $.joinnum,

	    // Computer braille
	    $.begcomp,
	    $.endcomp,

	    // Character-Class Opcodes
	    $.attribute,

	    // Swap Opcodes
	    $.swapcd,
	    $.swapdd,
	    $.swapcc,

	    // Context and Multipass Opcodes
	    $.context,
	    $.pass2,
	    $.pass3,
	    $.pass4,

	    // correct Opcode
	    $.correct,
	    // match Opcode
	    $.match,
	    $.literal
),

	include: $ => seq('include', $._sp, $.filename),
	undefined: $ => seq('undefined', $._sp, $.dots),
	display: $ => seq('display', $._sp, $.chars, $._sp, $.dots),
	multind: $ => seq(optional($._prefix), 'multind', $._sp, $.dots, $._sp, $.chars),

	space: $ => seq(optional($._prefix), 'space', $._sp, $.char, $._sp, $.dots),
	punctuation: $ => seq(optional($._prefix), 'punctuation', $._sp, $.char, $._sp, $.dots),
	digit: $ => seq('digit', $._sp, $.number, $._sp, $.dots),
	grouping: $ => seq('grouping', $._sp, $.name, $._sp, $.chars, $._sp, $.dots, ',', $.dots),
	base: $ => seq('base', $._sp, $.name, $._sp, $.char, $._sp, $.char),
	letter: $ => seq(optional($._prefix), 'letter', $._sp, $.char, $._sp, $.dots_or_equal),
	lowercase: $ => seq(optional($._prefix), 'lowercase', $._sp, $.char, $._sp, $.dots),
	uppercase: $ => seq(optional($._prefix), 'uppercase', $._sp, $.char, $._sp, $.dots),
	litdigit: $ => seq('litdigit', $._sp, $.chars, $._sp, $.dots),
	sign: $ => seq(optional($._prefix), 'sign', $._sp, $.char, $._sp, $.dots),
	math: $ => seq(optional($._prefix), 'math', $._sp, $.char, $._sp, $.dots),

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

	seqdelimiter: $ => seq('seqdelimiter', $._sp, $.chars),
	seqbeforechars: $ => seq('seqbeforechars', $._sp, $.chars),
	seqafterchars: $ => seq('seqafterchars', $._sp, $.chars),
	seqafterpattern: $ => seq('seqafterpattern', $._sp, $.chars),
	seqafterexpression: $ => seq('seqafterexpression', $._sp, $.chars),

	class: $ => seq('class', $._sp, $.ascii_chars, $._sp, $.chars),
	emphclass: $ => seq('emphclass', $._sp, $.ascii_chars),
	begemph: $ => seq(optional($._prefix), 'begemph', $._sp, $.ascii_chars, $._sp, $.dots),
	endemph: $ => seq(optional($._prefix), 'endemph', $._sp, $.ascii_chars, $._sp, $.dots),
	noemphchars: $ => seq('noemphchars', $._sp, $.ascii_chars, $._sp, $.chars),
	emphletter: $ => seq('emphletter', $._sp, $.ascii_chars, $._sp, $.dots),
	begemphword: $ => seq('begemphword', $._sp, $.ascii_chars, $._sp, $.dots),
	endemphword: $ => seq('endemphword', $._sp, $.ascii_chars, $._sp, $.dots),
	emphmodechars: $ => seq('emphmodechars', $._sp, $.ascii_chars, $._sp, $.chars),
	begemphphrase: $ => seq('begemphphrase', $._sp, $.ascii_chars, $._sp, $.dots),
	endemphphrase: $ => seq('endemphphrase', $._sp, $.ascii_chars, $._sp, choice($.before, $.after), $._sp, $.dots),
	lenemphphrase: $ => seq('lenemphphrase', $._sp, $.ascii_chars, $._sp, $.ascii_digit),

	decpoint: $ => seq('decpoint', $._sp, $.chars, $._sp, $.dots),
	hyphen: $ => seq(optional($._prefix), 'hyphen', $._sp, $.chars, $._sp, $.dots), // FIXME: Does hyphen really need a nofor prefix?
	capsnocont: $ => 'capsnocont',

	compbrl: $ => seq(optional($._prefix), 'compbrl', $._sp, $.chars),
	comp6: $ => seq('comp6', $._sp, $.chars, $._sp, $.dots_or_equal),
	nocont: $ => seq('nocont', $._sp, $.chars),
	replace: $ => choice(
	    seq('replace', $._sp, $.chars),
	    // prefer the longer rule
	    prec(1, seq('replace', $._sp, $.chars, $._sp, $.chars))
	),
	always: $ => seq(optional($._prefix), repeat($.with_class), 'always', $._sp, $.chars, $._sp, $.dots_or_equal),
	repeated: $ => seq(optional($._prefix), 'repeated', $._sp, $.chars, $._sp, $.dots),
	repword: $ => seq('repword', $._sp, $.chars, $._sp, $.dots),
	rependword: $ => seq('rependword', $._sp, $.chars, $._sp, $.dots, ',', $.dots),
	largesign: $ => seq('largesign', $._sp, $.chars, $._sp, $.dots),
	word: $ => seq(optional($._prefix), repeat($.with_class), 'word', $._sp, $.chars, $._sp, $.dots_or_equal),
	syllable: $ => seq('syllable', $._sp, $.chars, $._sp, $.dots_or_equal),
	joinword: $ => seq('joinword', $._sp, $.chars, $._sp, $.dots),
	lowword: $ => seq(optional($._prefix), 'lowword', $._sp, $.chars, $._sp, $.dots),
	contraction: $ => seq('contraction', $._sp, $.chars),
	sufword: $ => seq(optional($._prefix), repeat($.with_class), 'sufword', $._sp, $.chars, $._sp, $.dots_or_equal),
	prfword: $ => seq(optional($._prefix), 'prfword', $._sp, $.chars, $._sp, $.dots_or_equal),
	begword: $ => seq(optional($._prefix), repeat($.with_class), 'begword', $._sp, $.chars, $._sp, $.dots_or_equal),
	begmidword: $ => seq(optional($._prefix), repeat($.with_class), 'begmidword', $._sp, $.chars, $._sp, $.dots),
	midword: $ => seq(optional($._prefix), repeat($.with_class), 'midword', $._sp, $.chars, $._sp, $.dots_or_equal),
	midendword: $ => seq(optional($._prefix), repeat($.with_class), 'midendword', $._sp, $.chars, $._sp, $.dots_or_equal),
	endword: $ => seq(optional($._prefix), repeat($.with_class), 'endword', $._sp, $.chars, $._sp, $.dots_or_equal),
	partword: $ => seq(optional($._prefix), repeat($.with_class), 'partword', $._sp, $.chars, $._sp, $.dots),
	exactdots: $ => seq('exactdots', $._sp, '@', $.dots),
	prepunc: $ => seq(optional($._prefix), 'prepunc', $._sp, $.chars, $._sp, $.dots),
	postpunc: $ => seq(optional($._prefix), 'postpunc', $._sp, $.chars, $._sp, $.dots),
	begnum: $ => seq(optional($._prefix), 'begnum', $._sp, $.chars, $._sp, $.dots),
	midnum: $ => seq(optional($._prefix), 'midnum', $._sp, $.chars, $._sp, $.dots),
	endnum: $ => seq(optional($._prefix), 'endnum', $._sp, $.chars, $._sp, $.dots_or_equal),
	joinnum: $ => seq(optional($._prefix), 'joinnum', $._sp, $.chars, $._sp, $.dots),

	begcomp: $ => seq(optional($._prefix), 'begcomp', $._sp, $.dots),
	endcomp: $ => seq(optional($._prefix), 'endcomp', $._sp, $.dots),

	attribute: $ => seq('attribute', $._sp, choice($.ascii_chars, $.oct_digit), $._sp, $.chars),

	swapcd: $ => seq('swapcd', $._sp, $.ascii_chars, $._sp, $.chars, $._sp, $.dots, repeat(seq(',', $.dots))),
	swapdd: $ => seq('swapdd', $._sp, $.ascii_chars, $._sp, $.dots, repeat(seq(',', $.dots))),
	swapcc: $ => seq('swapcc', $._sp, $.ascii_chars, $._sp, $.chars, $._sp, $.chars),

	context: $ => seq(optional($._prefix), 'context', $._sp, $.multipass_test, $._sp, $.multipass_action),
	pass2: $ => seq(optional($._prefix), 'pass2', $._sp, $.multipass_test, $._sp, $.multipass_action),
	pass3: $ => seq(optional($._prefix), 'pass3', $._sp, $.multipass_test, $._sp, $.multipass_action),
	pass4: $ => seq(optional($._prefix), 'pass4', $._sp, $.multipass_test, $._sp, $.multipass_action),

	correct: $ => seq(optional($._prefix), 'correct', $._sp, $.multipass_test, $._sp, $.multipass_action),

	multipass_test: $ => /[^ \t\n]+/,
	multipass_action: $ => /[^ \t\n]+/,

	// multipass_test: $ => /[a-zA-Z0-9\"@`~$!%{}\/_#*\[\]]+/,
	// multipass_action: $ => /[a-zA-Z0-9\"@`~$!%{}\/_#*\[\]?]+/,

	match: $ => seq(optional($._prefix),
			repeat($.with_class),
			optional($.with_match),
			'match', $._sp, $.pre_pattern, $._sp, $.chars, $._sp, $.post_pattern, $._sp, $.dots),
	with_match: $ => seq(
	    choice(
		'empmatchbefore',
		'empmatchafter',
		seq('empmatchbefore', $._sp, 'empmatchafter'),
		seq('empmatchafter', $._sp, 'empmatchbefore')
	    ),
	    $._sp
	),
	pre_pattern: $ =>  /[^ \t\n]+/,
	post_pattern: $ => /[^ \t\n]+/,

	literal: $ => seq('literal', $._sp, $.chars),

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
	equal: $ => '=',

	name: $ => /[a-zA-Z]+/,
	dots: $ => /[0-9a-f]+(-[0-9a-f]+)*/,

	esc_seq: $ => choice('\\\\', '\\f', '\\n', '\\r', '\\s', '\\t', '\\v', '\\e'),
	hex_char: $ => seq('\\x', /[0-9a-fA-F]{4}/),
	char: $ => choice($.esc_seq, $.hex_char, /(\p{L}|\p{N}|\p{P}|\p{M}|\p{S})/u),
	number: $ => choice($.hex_char, /([0-9]|\p{N})/),
	chars: $ => choice($.esc_seq, /[^ \t\n]+/),
	ascii_chars: $ => /[a-zA-Z][a-zA-Z0-9]*/,

	filename: $ => /[-a-zA-Z0-9._\/]+/,
	_newline: $ => choice('\n', '\r\n', '\r'),
	_sp: $ => /[ \t]+/,
	_sp_maybe: $ => /[ \t]*/,

	ascii_digit: $ => /[0-9]/,
	oct_digit: $ => /[0-7]/
   },
    extras: $ => [],
    inline: $ => [$.dots_or_equal]
});
