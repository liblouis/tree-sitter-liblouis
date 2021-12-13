#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 783
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 258
#define ALIAS_COUNT 0
#define TOKEN_COUNT 136
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  sym__not_newline = 2,
  anon_sym_include = 3,
  anon_sym_undefined = 4,
  anon_sym_display = 5,
  anon_sym_multind = 6,
  anon_sym_space = 7,
  anon_sym_punctuation = 8,
  anon_sym_digit = 9,
  anon_sym_grouping = 10,
  anon_sym_COMMA = 11,
  anon_sym_base = 12,
  anon_sym_letter = 13,
  anon_sym_lowercase = 14,
  anon_sym_uppercase = 15,
  anon_sym_litdigit = 16,
  anon_sym_sign = 17,
  anon_sym_math = 18,
  anon_sym_modeletter = 19,
  anon_sym_capsletter = 20,
  anon_sym_begmodeword = 21,
  anon_sym_begcapsword = 22,
  anon_sym_endcapsword = 23,
  anon_sym_capsmodechars = 24,
  anon_sym_begcaps = 25,
  anon_sym_endcaps = 26,
  anon_sym_begcapsphrase = 27,
  anon_sym_endcapsphrase = 28,
  anon_sym_lencapsphrase = 29,
  anon_sym_letsign = 30,
  anon_sym_noletsign = 31,
  anon_sym_noletsignbefore = 32,
  anon_sym_noletsignafter = 33,
  anon_sym_nocontractsign = 34,
  anon_sym_numsign = 35,
  anon_sym_numericnocontchars = 36,
  anon_sym_numericmodechars = 37,
  anon_sym_midendnumericmodechars = 38,
  anon_sym_begmodephrase = 39,
  anon_sym_endmodephrase = 40,
  anon_sym_lenmodephrase = 41,
  anon_sym_seqdelimiter = 42,
  anon_sym_seqbeforechars = 43,
  anon_sym_seqafterchars = 44,
  anon_sym_seqafterpattern = 45,
  anon_sym_seqafterexpression = 46,
  anon_sym_class = 47,
  anon_sym_emphclass = 48,
  anon_sym_begemph = 49,
  anon_sym_endemph = 50,
  anon_sym_noemphchars = 51,
  anon_sym_emphletter = 52,
  anon_sym_begemphword = 53,
  anon_sym_endemphword = 54,
  anon_sym_emphmodechars = 55,
  anon_sym_begemphphrase = 56,
  anon_sym_endemphphrase = 57,
  anon_sym_lenemphphrase = 58,
  anon_sym_decpoint = 59,
  anon_sym_hyphen = 60,
  sym_capsnocont = 61,
  anon_sym_compbrl = 62,
  anon_sym_comp6 = 63,
  anon_sym_nocont = 64,
  anon_sym_replace = 65,
  anon_sym_always = 66,
  anon_sym_repeated = 67,
  anon_sym_repword = 68,
  anon_sym_rependword = 69,
  anon_sym_largesign = 70,
  anon_sym_word = 71,
  anon_sym_syllable = 72,
  anon_sym_joinword = 73,
  anon_sym_lowword = 74,
  anon_sym_contraction = 75,
  anon_sym_sufword = 76,
  anon_sym_prfword = 77,
  anon_sym_begword = 78,
  anon_sym_begmidword = 79,
  anon_sym_midword = 80,
  anon_sym_midendword = 81,
  anon_sym_endword = 82,
  anon_sym_partword = 83,
  anon_sym_exactdots = 84,
  anon_sym_AT = 85,
  anon_sym_prepunc = 86,
  anon_sym_postpunc = 87,
  anon_sym_begnum = 88,
  anon_sym_midnum = 89,
  anon_sym_endnum = 90,
  anon_sym_joinnum = 91,
  anon_sym_begcomp = 92,
  anon_sym_endcomp = 93,
  anon_sym_attribute = 94,
  anon_sym_swapcd = 95,
  anon_sym_swapdd = 96,
  anon_sym_swapcc = 97,
  anon_sym_context = 98,
  anon_sym_pass2 = 99,
  anon_sym_pass3 = 100,
  anon_sym_pass4 = 101,
  anon_sym_correct = 102,
  aux_sym_multipass_test_token1 = 103,
  anon_sym_match = 104,
  anon_sym_empmatchbefore = 105,
  anon_sym_empmatchafter = 106,
  anon_sym_literal = 107,
  sym_before = 108,
  sym_after = 109,
  sym_noback = 110,
  sym_nofor = 111,
  sym_nocross = 112,
  sym_equal = 113,
  sym_name = 114,
  sym_dots = 115,
  anon_sym_BSLASH_BSLASH = 116,
  anon_sym_BSLASHf = 117,
  anon_sym_BSLASHn = 118,
  anon_sym_BSLASHr = 119,
  anon_sym_BSLASHs = 120,
  anon_sym_BSLASHt = 121,
  anon_sym_BSLASHv = 122,
  anon_sym_BSLASHe = 123,
  anon_sym_BSLASHx = 124,
  aux_sym_hex_char_token1 = 125,
  aux_sym_char_token1 = 126,
  aux_sym_number_token1 = 127,
  sym_ascii_chars = 128,
  sym_filename = 129,
  anon_sym_LF = 130,
  anon_sym_CR_LF = 131,
  anon_sym_CR = 132,
  sym__sp = 133,
  sym_ascii_digit = 134,
  sym_oct_digit = 135,
  sym_source_file = 136,
  sym__line = 137,
  sym__line1 = 138,
  sym_comment = 139,
  sym_end_comment = 140,
  sym__rule_with_comment = 141,
  sym__rule = 142,
  sym_include = 143,
  sym_undefined = 144,
  sym_display = 145,
  sym_multind = 146,
  sym_space = 147,
  sym_punctuation = 148,
  sym_digit = 149,
  sym_grouping = 150,
  sym_base = 151,
  sym_letter = 152,
  sym_lowercase = 153,
  sym_uppercase = 154,
  sym_litdigit = 155,
  sym_sign = 156,
  sym_math = 157,
  sym_modeletter = 158,
  sym_capsletter = 159,
  sym_begmodeword = 160,
  sym_begcapsword = 161,
  sym_endcapsword = 162,
  sym_capsmodechars = 163,
  sym_begcaps = 164,
  sym_endcaps = 165,
  sym_begcapsphrase = 166,
  sym_endcapsphrase = 167,
  sym_lencapsphrase = 168,
  sym_letsign = 169,
  sym_noletsign = 170,
  sym_noletsignbefore = 171,
  sym_noletsignafter = 172,
  sym_nocontractsign = 173,
  sym_numsign = 174,
  sym_numericnocontchars = 175,
  sym_numericmodechars = 176,
  sym_midendnumericmodechars = 177,
  sym_begmodephrase = 178,
  sym_endmodephrase = 179,
  sym_lenmodephrase = 180,
  sym_seqdelimiter = 181,
  sym_seqbeforechars = 182,
  sym_seqafterchars = 183,
  sym_seqafterpattern = 184,
  sym_seqafterexpression = 185,
  sym_class = 186,
  sym_emphclass = 187,
  sym_begemph = 188,
  sym_endemph = 189,
  sym_noemphchars = 190,
  sym_emphletter = 191,
  sym_begemphword = 192,
  sym_endemphword = 193,
  sym_emphmodechars = 194,
  sym_begemphphrase = 195,
  sym_endemphphrase = 196,
  sym_lenemphphrase = 197,
  sym_decpoint = 198,
  sym_hyphen = 199,
  sym_compbrl = 200,
  sym_comp6 = 201,
  sym_nocont = 202,
  sym_replace = 203,
  sym_always = 204,
  sym_repeated = 205,
  sym_repword = 206,
  sym_rependword = 207,
  sym_largesign = 208,
  sym_word = 209,
  sym_syllable = 210,
  sym_joinword = 211,
  sym_lowword = 212,
  sym_contraction = 213,
  sym_sufword = 214,
  sym_prfword = 215,
  sym_begword = 216,
  sym_begmidword = 217,
  sym_midword = 218,
  sym_midendword = 219,
  sym_endword = 220,
  sym_partword = 221,
  sym_exactdots = 222,
  sym_prepunc = 223,
  sym_postpunc = 224,
  sym_begnum = 225,
  sym_midnum = 226,
  sym_endnum = 227,
  sym_joinnum = 228,
  sym_begcomp = 229,
  sym_endcomp = 230,
  sym_attribute = 231,
  sym_swapcd = 232,
  sym_swapdd = 233,
  sym_swapcc = 234,
  sym_context = 235,
  sym_pass2 = 236,
  sym_pass3 = 237,
  sym_pass4 = 238,
  sym_correct = 239,
  sym_multipass_test = 240,
  sym_multipass_action = 241,
  sym_match = 242,
  sym_with_match = 243,
  sym_pre_pattern = 244,
  sym_post_pattern = 245,
  sym_literal = 246,
  sym__prefix = 247,
  sym_with_class = 248,
  sym_esc_seq = 249,
  sym_hex_char = 250,
  sym_char = 251,
  sym_number = 252,
  sym_chars = 253,
  sym__newline = 254,
  aux_sym_source_file_repeat1 = 255,
  aux_sym_always_repeat1 = 256,
  aux_sym_swapcd_repeat1 = 257,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [sym__not_newline] = "_not_newline",
  [anon_sym_include] = "include",
  [anon_sym_undefined] = "undefined",
  [anon_sym_display] = "display",
  [anon_sym_multind] = "multind",
  [anon_sym_space] = "space",
  [anon_sym_punctuation] = "punctuation",
  [anon_sym_digit] = "digit",
  [anon_sym_grouping] = "grouping",
  [anon_sym_COMMA] = ",",
  [anon_sym_base] = "base",
  [anon_sym_letter] = "letter",
  [anon_sym_lowercase] = "lowercase",
  [anon_sym_uppercase] = "uppercase",
  [anon_sym_litdigit] = "litdigit",
  [anon_sym_sign] = "sign",
  [anon_sym_math] = "math",
  [anon_sym_modeletter] = "modeletter",
  [anon_sym_capsletter] = "capsletter",
  [anon_sym_begmodeword] = "begmodeword",
  [anon_sym_begcapsword] = "begcapsword",
  [anon_sym_endcapsword] = "endcapsword",
  [anon_sym_capsmodechars] = "capsmodechars",
  [anon_sym_begcaps] = "begcaps",
  [anon_sym_endcaps] = "endcaps",
  [anon_sym_begcapsphrase] = "begcapsphrase",
  [anon_sym_endcapsphrase] = "endcapsphrase",
  [anon_sym_lencapsphrase] = "lencapsphrase",
  [anon_sym_letsign] = "letsign",
  [anon_sym_noletsign] = "noletsign",
  [anon_sym_noletsignbefore] = "noletsignbefore",
  [anon_sym_noletsignafter] = "noletsignafter",
  [anon_sym_nocontractsign] = "nocontractsign",
  [anon_sym_numsign] = "numsign",
  [anon_sym_numericnocontchars] = "numericnocontchars",
  [anon_sym_numericmodechars] = "numericmodechars",
  [anon_sym_midendnumericmodechars] = "midendnumericmodechars",
  [anon_sym_begmodephrase] = "begmodephrase",
  [anon_sym_endmodephrase] = "endmodephrase",
  [anon_sym_lenmodephrase] = "lenmodephrase",
  [anon_sym_seqdelimiter] = "seqdelimiter",
  [anon_sym_seqbeforechars] = "seqbeforechars",
  [anon_sym_seqafterchars] = "seqafterchars",
  [anon_sym_seqafterpattern] = "seqafterpattern",
  [anon_sym_seqafterexpression] = "seqafterexpression",
  [anon_sym_class] = "class",
  [anon_sym_emphclass] = "emphclass",
  [anon_sym_begemph] = "begemph",
  [anon_sym_endemph] = "endemph",
  [anon_sym_noemphchars] = "noemphchars",
  [anon_sym_emphletter] = "emphletter",
  [anon_sym_begemphword] = "begemphword",
  [anon_sym_endemphword] = "endemphword",
  [anon_sym_emphmodechars] = "emphmodechars",
  [anon_sym_begemphphrase] = "begemphphrase",
  [anon_sym_endemphphrase] = "endemphphrase",
  [anon_sym_lenemphphrase] = "lenemphphrase",
  [anon_sym_decpoint] = "decpoint",
  [anon_sym_hyphen] = "hyphen",
  [sym_capsnocont] = "capsnocont",
  [anon_sym_compbrl] = "compbrl",
  [anon_sym_comp6] = "comp6",
  [anon_sym_nocont] = "nocont",
  [anon_sym_replace] = "replace",
  [anon_sym_always] = "always",
  [anon_sym_repeated] = "repeated",
  [anon_sym_repword] = "repword",
  [anon_sym_rependword] = "rependword",
  [anon_sym_largesign] = "largesign",
  [anon_sym_word] = "word",
  [anon_sym_syllable] = "syllable",
  [anon_sym_joinword] = "joinword",
  [anon_sym_lowword] = "lowword",
  [anon_sym_contraction] = "contraction",
  [anon_sym_sufword] = "sufword",
  [anon_sym_prfword] = "prfword",
  [anon_sym_begword] = "begword",
  [anon_sym_begmidword] = "begmidword",
  [anon_sym_midword] = "midword",
  [anon_sym_midendword] = "midendword",
  [anon_sym_endword] = "endword",
  [anon_sym_partword] = "partword",
  [anon_sym_exactdots] = "exactdots",
  [anon_sym_AT] = "@",
  [anon_sym_prepunc] = "prepunc",
  [anon_sym_postpunc] = "postpunc",
  [anon_sym_begnum] = "begnum",
  [anon_sym_midnum] = "midnum",
  [anon_sym_endnum] = "endnum",
  [anon_sym_joinnum] = "joinnum",
  [anon_sym_begcomp] = "begcomp",
  [anon_sym_endcomp] = "endcomp",
  [anon_sym_attribute] = "attribute",
  [anon_sym_swapcd] = "swapcd",
  [anon_sym_swapdd] = "swapdd",
  [anon_sym_swapcc] = "swapcc",
  [anon_sym_context] = "context",
  [anon_sym_pass2] = "pass2",
  [anon_sym_pass3] = "pass3",
  [anon_sym_pass4] = "pass4",
  [anon_sym_correct] = "correct",
  [aux_sym_multipass_test_token1] = "multipass_test_token1",
  [anon_sym_match] = "match",
  [anon_sym_empmatchbefore] = "empmatchbefore",
  [anon_sym_empmatchafter] = "empmatchafter",
  [anon_sym_literal] = "literal",
  [sym_before] = "before",
  [sym_after] = "after",
  [sym_noback] = "noback",
  [sym_nofor] = "nofor",
  [sym_nocross] = "nocross",
  [sym_equal] = "equal",
  [sym_name] = "name",
  [sym_dots] = "dots",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASHf] = "\\f",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHs] = "\\s",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHv] = "\\v",
  [anon_sym_BSLASHe] = "\\e",
  [anon_sym_BSLASHx] = "\\x",
  [aux_sym_hex_char_token1] = "hex_char_token1",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_number_token1] = "number_token1",
  [sym_ascii_chars] = "ascii_chars",
  [sym_filename] = "filename",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [sym__sp] = "_sp",
  [sym_ascii_digit] = "ascii_digit",
  [sym_oct_digit] = "oct_digit",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__line1] = "_line1",
  [sym_comment] = "comment",
  [sym_end_comment] = "end_comment",
  [sym__rule_with_comment] = "_rule_with_comment",
  [sym__rule] = "_rule",
  [sym_include] = "include",
  [sym_undefined] = "undefined",
  [sym_display] = "display",
  [sym_multind] = "multind",
  [sym_space] = "space",
  [sym_punctuation] = "punctuation",
  [sym_digit] = "digit",
  [sym_grouping] = "grouping",
  [sym_base] = "base",
  [sym_letter] = "letter",
  [sym_lowercase] = "lowercase",
  [sym_uppercase] = "uppercase",
  [sym_litdigit] = "litdigit",
  [sym_sign] = "sign",
  [sym_math] = "math",
  [sym_modeletter] = "modeletter",
  [sym_capsletter] = "capsletter",
  [sym_begmodeword] = "begmodeword",
  [sym_begcapsword] = "begcapsword",
  [sym_endcapsword] = "endcapsword",
  [sym_capsmodechars] = "capsmodechars",
  [sym_begcaps] = "begcaps",
  [sym_endcaps] = "endcaps",
  [sym_begcapsphrase] = "begcapsphrase",
  [sym_endcapsphrase] = "endcapsphrase",
  [sym_lencapsphrase] = "lencapsphrase",
  [sym_letsign] = "letsign",
  [sym_noletsign] = "noletsign",
  [sym_noletsignbefore] = "noletsignbefore",
  [sym_noletsignafter] = "noletsignafter",
  [sym_nocontractsign] = "nocontractsign",
  [sym_numsign] = "numsign",
  [sym_numericnocontchars] = "numericnocontchars",
  [sym_numericmodechars] = "numericmodechars",
  [sym_midendnumericmodechars] = "midendnumericmodechars",
  [sym_begmodephrase] = "begmodephrase",
  [sym_endmodephrase] = "endmodephrase",
  [sym_lenmodephrase] = "lenmodephrase",
  [sym_seqdelimiter] = "seqdelimiter",
  [sym_seqbeforechars] = "seqbeforechars",
  [sym_seqafterchars] = "seqafterchars",
  [sym_seqafterpattern] = "seqafterpattern",
  [sym_seqafterexpression] = "seqafterexpression",
  [sym_class] = "class",
  [sym_emphclass] = "emphclass",
  [sym_begemph] = "begemph",
  [sym_endemph] = "endemph",
  [sym_noemphchars] = "noemphchars",
  [sym_emphletter] = "emphletter",
  [sym_begemphword] = "begemphword",
  [sym_endemphword] = "endemphword",
  [sym_emphmodechars] = "emphmodechars",
  [sym_begemphphrase] = "begemphphrase",
  [sym_endemphphrase] = "endemphphrase",
  [sym_lenemphphrase] = "lenemphphrase",
  [sym_decpoint] = "decpoint",
  [sym_hyphen] = "hyphen",
  [sym_compbrl] = "compbrl",
  [sym_comp6] = "comp6",
  [sym_nocont] = "nocont",
  [sym_replace] = "replace",
  [sym_always] = "always",
  [sym_repeated] = "repeated",
  [sym_repword] = "repword",
  [sym_rependword] = "rependword",
  [sym_largesign] = "largesign",
  [sym_word] = "word",
  [sym_syllable] = "syllable",
  [sym_joinword] = "joinword",
  [sym_lowword] = "lowword",
  [sym_contraction] = "contraction",
  [sym_sufword] = "sufword",
  [sym_prfword] = "prfword",
  [sym_begword] = "begword",
  [sym_begmidword] = "begmidword",
  [sym_midword] = "midword",
  [sym_midendword] = "midendword",
  [sym_endword] = "endword",
  [sym_partword] = "partword",
  [sym_exactdots] = "exactdots",
  [sym_prepunc] = "prepunc",
  [sym_postpunc] = "postpunc",
  [sym_begnum] = "begnum",
  [sym_midnum] = "midnum",
  [sym_endnum] = "endnum",
  [sym_joinnum] = "joinnum",
  [sym_begcomp] = "begcomp",
  [sym_endcomp] = "endcomp",
  [sym_attribute] = "attribute",
  [sym_swapcd] = "swapcd",
  [sym_swapdd] = "swapdd",
  [sym_swapcc] = "swapcc",
  [sym_context] = "context",
  [sym_pass2] = "pass2",
  [sym_pass3] = "pass3",
  [sym_pass4] = "pass4",
  [sym_correct] = "correct",
  [sym_multipass_test] = "multipass_test",
  [sym_multipass_action] = "multipass_action",
  [sym_match] = "match",
  [sym_with_match] = "with_match",
  [sym_pre_pattern] = "pre_pattern",
  [sym_post_pattern] = "post_pattern",
  [sym_literal] = "literal",
  [sym__prefix] = "_prefix",
  [sym_with_class] = "with_class",
  [sym_esc_seq] = "esc_seq",
  [sym_hex_char] = "hex_char",
  [sym_char] = "char",
  [sym_number] = "number",
  [sym_chars] = "chars",
  [sym__newline] = "_newline",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_always_repeat1] = "always_repeat1",
  [aux_sym_swapcd_repeat1] = "swapcd_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__not_newline] = sym__not_newline,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_undefined] = anon_sym_undefined,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_multind] = anon_sym_multind,
  [anon_sym_space] = anon_sym_space,
  [anon_sym_punctuation] = anon_sym_punctuation,
  [anon_sym_digit] = anon_sym_digit,
  [anon_sym_grouping] = anon_sym_grouping,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_base] = anon_sym_base,
  [anon_sym_letter] = anon_sym_letter,
  [anon_sym_lowercase] = anon_sym_lowercase,
  [anon_sym_uppercase] = anon_sym_uppercase,
  [anon_sym_litdigit] = anon_sym_litdigit,
  [anon_sym_sign] = anon_sym_sign,
  [anon_sym_math] = anon_sym_math,
  [anon_sym_modeletter] = anon_sym_modeletter,
  [anon_sym_capsletter] = anon_sym_capsletter,
  [anon_sym_begmodeword] = anon_sym_begmodeword,
  [anon_sym_begcapsword] = anon_sym_begcapsword,
  [anon_sym_endcapsword] = anon_sym_endcapsword,
  [anon_sym_capsmodechars] = anon_sym_capsmodechars,
  [anon_sym_begcaps] = anon_sym_begcaps,
  [anon_sym_endcaps] = anon_sym_endcaps,
  [anon_sym_begcapsphrase] = anon_sym_begcapsphrase,
  [anon_sym_endcapsphrase] = anon_sym_endcapsphrase,
  [anon_sym_lencapsphrase] = anon_sym_lencapsphrase,
  [anon_sym_letsign] = anon_sym_letsign,
  [anon_sym_noletsign] = anon_sym_noletsign,
  [anon_sym_noletsignbefore] = anon_sym_noletsignbefore,
  [anon_sym_noletsignafter] = anon_sym_noletsignafter,
  [anon_sym_nocontractsign] = anon_sym_nocontractsign,
  [anon_sym_numsign] = anon_sym_numsign,
  [anon_sym_numericnocontchars] = anon_sym_numericnocontchars,
  [anon_sym_numericmodechars] = anon_sym_numericmodechars,
  [anon_sym_midendnumericmodechars] = anon_sym_midendnumericmodechars,
  [anon_sym_begmodephrase] = anon_sym_begmodephrase,
  [anon_sym_endmodephrase] = anon_sym_endmodephrase,
  [anon_sym_lenmodephrase] = anon_sym_lenmodephrase,
  [anon_sym_seqdelimiter] = anon_sym_seqdelimiter,
  [anon_sym_seqbeforechars] = anon_sym_seqbeforechars,
  [anon_sym_seqafterchars] = anon_sym_seqafterchars,
  [anon_sym_seqafterpattern] = anon_sym_seqafterpattern,
  [anon_sym_seqafterexpression] = anon_sym_seqafterexpression,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_emphclass] = anon_sym_emphclass,
  [anon_sym_begemph] = anon_sym_begemph,
  [anon_sym_endemph] = anon_sym_endemph,
  [anon_sym_noemphchars] = anon_sym_noemphchars,
  [anon_sym_emphletter] = anon_sym_emphletter,
  [anon_sym_begemphword] = anon_sym_begemphword,
  [anon_sym_endemphword] = anon_sym_endemphword,
  [anon_sym_emphmodechars] = anon_sym_emphmodechars,
  [anon_sym_begemphphrase] = anon_sym_begemphphrase,
  [anon_sym_endemphphrase] = anon_sym_endemphphrase,
  [anon_sym_lenemphphrase] = anon_sym_lenemphphrase,
  [anon_sym_decpoint] = anon_sym_decpoint,
  [anon_sym_hyphen] = anon_sym_hyphen,
  [sym_capsnocont] = sym_capsnocont,
  [anon_sym_compbrl] = anon_sym_compbrl,
  [anon_sym_comp6] = anon_sym_comp6,
  [anon_sym_nocont] = anon_sym_nocont,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_always] = anon_sym_always,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_repword] = anon_sym_repword,
  [anon_sym_rependword] = anon_sym_rependword,
  [anon_sym_largesign] = anon_sym_largesign,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_syllable] = anon_sym_syllable,
  [anon_sym_joinword] = anon_sym_joinword,
  [anon_sym_lowword] = anon_sym_lowword,
  [anon_sym_contraction] = anon_sym_contraction,
  [anon_sym_sufword] = anon_sym_sufword,
  [anon_sym_prfword] = anon_sym_prfword,
  [anon_sym_begword] = anon_sym_begword,
  [anon_sym_begmidword] = anon_sym_begmidword,
  [anon_sym_midword] = anon_sym_midword,
  [anon_sym_midendword] = anon_sym_midendword,
  [anon_sym_endword] = anon_sym_endword,
  [anon_sym_partword] = anon_sym_partword,
  [anon_sym_exactdots] = anon_sym_exactdots,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_prepunc] = anon_sym_prepunc,
  [anon_sym_postpunc] = anon_sym_postpunc,
  [anon_sym_begnum] = anon_sym_begnum,
  [anon_sym_midnum] = anon_sym_midnum,
  [anon_sym_endnum] = anon_sym_endnum,
  [anon_sym_joinnum] = anon_sym_joinnum,
  [anon_sym_begcomp] = anon_sym_begcomp,
  [anon_sym_endcomp] = anon_sym_endcomp,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_swapcd] = anon_sym_swapcd,
  [anon_sym_swapdd] = anon_sym_swapdd,
  [anon_sym_swapcc] = anon_sym_swapcc,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_pass2] = anon_sym_pass2,
  [anon_sym_pass3] = anon_sym_pass3,
  [anon_sym_pass4] = anon_sym_pass4,
  [anon_sym_correct] = anon_sym_correct,
  [aux_sym_multipass_test_token1] = aux_sym_multipass_test_token1,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_empmatchbefore] = anon_sym_empmatchbefore,
  [anon_sym_empmatchafter] = anon_sym_empmatchafter,
  [anon_sym_literal] = anon_sym_literal,
  [sym_before] = sym_before,
  [sym_after] = sym_after,
  [sym_noback] = sym_noback,
  [sym_nofor] = sym_nofor,
  [sym_nocross] = sym_nocross,
  [sym_equal] = sym_equal,
  [sym_name] = sym_name,
  [sym_dots] = sym_dots,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASHf] = anon_sym_BSLASHf,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHs] = anon_sym_BSLASHs,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHv] = anon_sym_BSLASHv,
  [anon_sym_BSLASHe] = anon_sym_BSLASHe,
  [anon_sym_BSLASHx] = anon_sym_BSLASHx,
  [aux_sym_hex_char_token1] = aux_sym_hex_char_token1,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [sym_ascii_chars] = sym_ascii_chars,
  [sym_filename] = sym_filename,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__sp] = sym__sp,
  [sym_ascii_digit] = sym_ascii_digit,
  [sym_oct_digit] = sym_oct_digit,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__line1] = sym__line1,
  [sym_comment] = sym_comment,
  [sym_end_comment] = sym_end_comment,
  [sym__rule_with_comment] = sym__rule_with_comment,
  [sym__rule] = sym__rule,
  [sym_include] = sym_include,
  [sym_undefined] = sym_undefined,
  [sym_display] = sym_display,
  [sym_multind] = sym_multind,
  [sym_space] = sym_space,
  [sym_punctuation] = sym_punctuation,
  [sym_digit] = sym_digit,
  [sym_grouping] = sym_grouping,
  [sym_base] = sym_base,
  [sym_letter] = sym_letter,
  [sym_lowercase] = sym_lowercase,
  [sym_uppercase] = sym_uppercase,
  [sym_litdigit] = sym_litdigit,
  [sym_sign] = sym_sign,
  [sym_math] = sym_math,
  [sym_modeletter] = sym_modeletter,
  [sym_capsletter] = sym_capsletter,
  [sym_begmodeword] = sym_begmodeword,
  [sym_begcapsword] = sym_begcapsword,
  [sym_endcapsword] = sym_endcapsword,
  [sym_capsmodechars] = sym_capsmodechars,
  [sym_begcaps] = sym_begcaps,
  [sym_endcaps] = sym_endcaps,
  [sym_begcapsphrase] = sym_begcapsphrase,
  [sym_endcapsphrase] = sym_endcapsphrase,
  [sym_lencapsphrase] = sym_lencapsphrase,
  [sym_letsign] = sym_letsign,
  [sym_noletsign] = sym_noletsign,
  [sym_noletsignbefore] = sym_noletsignbefore,
  [sym_noletsignafter] = sym_noletsignafter,
  [sym_nocontractsign] = sym_nocontractsign,
  [sym_numsign] = sym_numsign,
  [sym_numericnocontchars] = sym_numericnocontchars,
  [sym_numericmodechars] = sym_numericmodechars,
  [sym_midendnumericmodechars] = sym_midendnumericmodechars,
  [sym_begmodephrase] = sym_begmodephrase,
  [sym_endmodephrase] = sym_endmodephrase,
  [sym_lenmodephrase] = sym_lenmodephrase,
  [sym_seqdelimiter] = sym_seqdelimiter,
  [sym_seqbeforechars] = sym_seqbeforechars,
  [sym_seqafterchars] = sym_seqafterchars,
  [sym_seqafterpattern] = sym_seqafterpattern,
  [sym_seqafterexpression] = sym_seqafterexpression,
  [sym_class] = sym_class,
  [sym_emphclass] = sym_emphclass,
  [sym_begemph] = sym_begemph,
  [sym_endemph] = sym_endemph,
  [sym_noemphchars] = sym_noemphchars,
  [sym_emphletter] = sym_emphletter,
  [sym_begemphword] = sym_begemphword,
  [sym_endemphword] = sym_endemphword,
  [sym_emphmodechars] = sym_emphmodechars,
  [sym_begemphphrase] = sym_begemphphrase,
  [sym_endemphphrase] = sym_endemphphrase,
  [sym_lenemphphrase] = sym_lenemphphrase,
  [sym_decpoint] = sym_decpoint,
  [sym_hyphen] = sym_hyphen,
  [sym_compbrl] = sym_compbrl,
  [sym_comp6] = sym_comp6,
  [sym_nocont] = sym_nocont,
  [sym_replace] = sym_replace,
  [sym_always] = sym_always,
  [sym_repeated] = sym_repeated,
  [sym_repword] = sym_repword,
  [sym_rependword] = sym_rependword,
  [sym_largesign] = sym_largesign,
  [sym_word] = sym_word,
  [sym_syllable] = sym_syllable,
  [sym_joinword] = sym_joinword,
  [sym_lowword] = sym_lowword,
  [sym_contraction] = sym_contraction,
  [sym_sufword] = sym_sufword,
  [sym_prfword] = sym_prfword,
  [sym_begword] = sym_begword,
  [sym_begmidword] = sym_begmidword,
  [sym_midword] = sym_midword,
  [sym_midendword] = sym_midendword,
  [sym_endword] = sym_endword,
  [sym_partword] = sym_partword,
  [sym_exactdots] = sym_exactdots,
  [sym_prepunc] = sym_prepunc,
  [sym_postpunc] = sym_postpunc,
  [sym_begnum] = sym_begnum,
  [sym_midnum] = sym_midnum,
  [sym_endnum] = sym_endnum,
  [sym_joinnum] = sym_joinnum,
  [sym_begcomp] = sym_begcomp,
  [sym_endcomp] = sym_endcomp,
  [sym_attribute] = sym_attribute,
  [sym_swapcd] = sym_swapcd,
  [sym_swapdd] = sym_swapdd,
  [sym_swapcc] = sym_swapcc,
  [sym_context] = sym_context,
  [sym_pass2] = sym_pass2,
  [sym_pass3] = sym_pass3,
  [sym_pass4] = sym_pass4,
  [sym_correct] = sym_correct,
  [sym_multipass_test] = sym_multipass_test,
  [sym_multipass_action] = sym_multipass_action,
  [sym_match] = sym_match,
  [sym_with_match] = sym_with_match,
  [sym_pre_pattern] = sym_pre_pattern,
  [sym_post_pattern] = sym_post_pattern,
  [sym_literal] = sym_literal,
  [sym__prefix] = sym__prefix,
  [sym_with_class] = sym_with_class,
  [sym_esc_seq] = sym_esc_seq,
  [sym_hex_char] = sym_hex_char,
  [sym_char] = sym_char,
  [sym_number] = sym_number,
  [sym_chars] = sym_chars,
  [sym__newline] = sym__newline,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_always_repeat1] = aux_sym_always_repeat1,
  [aux_sym_swapcd_repeat1] = aux_sym_swapcd_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__not_newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undefined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punctuation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_digit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grouping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_letter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowercase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uppercase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_litdigit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_math] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modeletter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capsletter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begmodeword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begcapsword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcapsword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capsmodechars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begcaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begcapsphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcapsphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lencapsphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_letsign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noletsign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noletsignbefore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noletsignafter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nocontractsign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numsign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numericnocontchars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numericmodechars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_midendnumericmodechars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begmodephrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmodephrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lenmodephrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqdelimiter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqbeforechars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqafterchars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqafterpattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqafterexpression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emphclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begemph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endemph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noemphchars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emphletter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begemphword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endemphword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emphmodechars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begemphphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endemphphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lenemphphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyphen] = {
    .visible = true,
    .named = false,
  },
  [sym_capsnocont] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_compbrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comp6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nocont] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rependword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_largesign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syllable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_joinword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contraction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sufword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prfword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begmidword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_midword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_midendword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactdots] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postpunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begnum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_midnum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endnum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_joinnum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begcomp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcomp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapcd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapdd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_correct] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multipass_test_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empmatchbefore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empmatchafter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_literal] = {
    .visible = true,
    .named = false,
  },
  [sym_before] = {
    .visible = true,
    .named = true,
  },
  [sym_after] = {
    .visible = true,
    .named = true,
  },
  [sym_noback] = {
    .visible = true,
    .named = true,
  },
  [sym_nofor] = {
    .visible = true,
    .named = true,
  },
  [sym_nocross] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dots] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ascii_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__sp] = {
    .visible = false,
    .named = true,
  },
  [sym_ascii_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_oct_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__line1] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_end_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__rule_with_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined] = {
    .visible = true,
    .named = true,
  },
  [sym_display] = {
    .visible = true,
    .named = true,
  },
  [sym_multind] = {
    .visible = true,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_base] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_lowercase] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase] = {
    .visible = true,
    .named = true,
  },
  [sym_litdigit] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_math] = {
    .visible = true,
    .named = true,
  },
  [sym_modeletter] = {
    .visible = true,
    .named = true,
  },
  [sym_capsletter] = {
    .visible = true,
    .named = true,
  },
  [sym_begmodeword] = {
    .visible = true,
    .named = true,
  },
  [sym_begcapsword] = {
    .visible = true,
    .named = true,
  },
  [sym_endcapsword] = {
    .visible = true,
    .named = true,
  },
  [sym_capsmodechars] = {
    .visible = true,
    .named = true,
  },
  [sym_begcaps] = {
    .visible = true,
    .named = true,
  },
  [sym_endcaps] = {
    .visible = true,
    .named = true,
  },
  [sym_begcapsphrase] = {
    .visible = true,
    .named = true,
  },
  [sym_endcapsphrase] = {
    .visible = true,
    .named = true,
  },
  [sym_lencapsphrase] = {
    .visible = true,
    .named = true,
  },
  [sym_letsign] = {
    .visible = true,
    .named = true,
  },
  [sym_noletsign] = {
    .visible = true,
    .named = true,
  },
  [sym_noletsignbefore] = {
    .visible = true,
    .named = true,
  },
  [sym_noletsignafter] = {
    .visible = true,
    .named = true,
  },
  [sym_nocontractsign] = {
    .visible = true,
    .named = true,
  },
  [sym_numsign] = {
    .visible = true,
    .named = true,
  },
  [sym_numericnocontchars] = {
    .visible = true,
    .named = true,
  },
  [sym_numericmodechars] = {
    .visible = true,
    .named = true,
  },
  [sym_midendnumericmodechars] = {
    .visible = true,
    .named = true,
  },
  [sym_begmodephrase] = {
    .visible = true,
    .named = true,
  },
  [sym_endmodephrase] = {
    .visible = true,
    .named = true,
  },
  [sym_lenmodephrase] = {
    .visible = true,
    .named = true,
  },
  [sym_seqdelimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_seqbeforechars] = {
    .visible = true,
    .named = true,
  },
  [sym_seqafterchars] = {
    .visible = true,
    .named = true,
  },
  [sym_seqafterpattern] = {
    .visible = true,
    .named = true,
  },
  [sym_seqafterexpression] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_emphclass] = {
    .visible = true,
    .named = true,
  },
  [sym_begemph] = {
    .visible = true,
    .named = true,
  },
  [sym_endemph] = {
    .visible = true,
    .named = true,
  },
  [sym_noemphchars] = {
    .visible = true,
    .named = true,
  },
  [sym_emphletter] = {
    .visible = true,
    .named = true,
  },
  [sym_begemphword] = {
    .visible = true,
    .named = true,
  },
  [sym_endemphword] = {
    .visible = true,
    .named = true,
  },
  [sym_emphmodechars] = {
    .visible = true,
    .named = true,
  },
  [sym_begemphphrase] = {
    .visible = true,
    .named = true,
  },
  [sym_endemphphrase] = {
    .visible = true,
    .named = true,
  },
  [sym_lenemphphrase] = {
    .visible = true,
    .named = true,
  },
  [sym_decpoint] = {
    .visible = true,
    .named = true,
  },
  [sym_hyphen] = {
    .visible = true,
    .named = true,
  },
  [sym_compbrl] = {
    .visible = true,
    .named = true,
  },
  [sym_comp6] = {
    .visible = true,
    .named = true,
  },
  [sym_nocont] = {
    .visible = true,
    .named = true,
  },
  [sym_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_always] = {
    .visible = true,
    .named = true,
  },
  [sym_repeated] = {
    .visible = true,
    .named = true,
  },
  [sym_repword] = {
    .visible = true,
    .named = true,
  },
  [sym_rependword] = {
    .visible = true,
    .named = true,
  },
  [sym_largesign] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_syllable] = {
    .visible = true,
    .named = true,
  },
  [sym_joinword] = {
    .visible = true,
    .named = true,
  },
  [sym_lowword] = {
    .visible = true,
    .named = true,
  },
  [sym_contraction] = {
    .visible = true,
    .named = true,
  },
  [sym_sufword] = {
    .visible = true,
    .named = true,
  },
  [sym_prfword] = {
    .visible = true,
    .named = true,
  },
  [sym_begword] = {
    .visible = true,
    .named = true,
  },
  [sym_begmidword] = {
    .visible = true,
    .named = true,
  },
  [sym_midword] = {
    .visible = true,
    .named = true,
  },
  [sym_midendword] = {
    .visible = true,
    .named = true,
  },
  [sym_endword] = {
    .visible = true,
    .named = true,
  },
  [sym_partword] = {
    .visible = true,
    .named = true,
  },
  [sym_exactdots] = {
    .visible = true,
    .named = true,
  },
  [sym_prepunc] = {
    .visible = true,
    .named = true,
  },
  [sym_postpunc] = {
    .visible = true,
    .named = true,
  },
  [sym_begnum] = {
    .visible = true,
    .named = true,
  },
  [sym_midnum] = {
    .visible = true,
    .named = true,
  },
  [sym_endnum] = {
    .visible = true,
    .named = true,
  },
  [sym_joinnum] = {
    .visible = true,
    .named = true,
  },
  [sym_begcomp] = {
    .visible = true,
    .named = true,
  },
  [sym_endcomp] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_swapcd] = {
    .visible = true,
    .named = true,
  },
  [sym_swapdd] = {
    .visible = true,
    .named = true,
  },
  [sym_swapcc] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_pass2] = {
    .visible = true,
    .named = true,
  },
  [sym_pass3] = {
    .visible = true,
    .named = true,
  },
  [sym_pass4] = {
    .visible = true,
    .named = true,
  },
  [sym_correct] = {
    .visible = true,
    .named = true,
  },
  [sym_multipass_test] = {
    .visible = true,
    .named = true,
  },
  [sym_multipass_action] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_with_match] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_post_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_with_class] = {
    .visible = true,
    .named = true,
  },
  [sym_esc_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_char] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_chars] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_always_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swapcd_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_char_token1_character_set_1(int32_t c) {
  return (c < 6432
    ? (c < 3024
      ? (c < 2579
        ? (c < 1994
          ? (c < 931
            ? (c < 180
              ? (c < '`'
                ? (c < ':'
                  ? (c >= '!' && c <= '+')
                  : (c <= '?' || (c >= '[' && c <= '^')))
                : (c <= '`' || (c < 161
                  ? (c >= '{' && c <= '~')
                  : c <= 177)))
              : (c <= 184 || (c < 900
                ? (c < 191
                  ? (c >= 186 && c <= 187)
                  : (c <= 887 || (c >= 890 && c <= 895)))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))))
            : (c <= 1327 || (c < 1542
              ? (c < 1425
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1524)))
              : (c <= 1563 || (c < 1786
                ? (c < 1642
                  ? (c >= 1565 && c <= 1631)
                  : (c <= 1756 || (c >= 1758 && c <= 1775)))
                : (c <= 1805 || (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : c <= 1969)))))))
          : (c <= 2042 || (c < 2482
            ? (c < 2200
              ? (c < 2142
                ? (c < 2096
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2110 || (c >= 2112 && c <= 2139)))
                : (c <= 2142 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2190)))
              : (c <= 2273 || (c < 2447
                ? (c < 2416
                  ? (c >= 2275 && c <= 2405)
                  : (c <= 2435 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))
            : (c <= 2482 || (c < 2527
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : c <= 2525)))
              : (c <= 2531 || (c < 2561
                ? (c < 2554
                  ? (c >= 2544 && c <= 2547)
                  : c <= 2558)
                : (c <= 2563 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))))))))
        : (c <= 2600 || (c < 2817
          ? (c < 2693
            ? (c < 2631
              ? (c < 2616
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2622
                  ? c == 2620
                  : c <= 2626)))
              : (c <= 2632 || (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2672 && c <= 2678)
                  : c <= 2691)))))
            : (c <= 2701 || (c < 2759
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2757)))
              : (c <= 2761 || (c < 2784
                ? (c < 2768
                  ? (c >= 2763 && c <= 2765)
                  : c <= 2768)
                : (c <= 2787 || (c < 2809
                  ? (c >= 2800 && c <= 2801)
                  : c <= 2815)))))))
          : (c <= 2819 || (c < 2946
            ? (c < 2876
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2884 || (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2928
                  ? (c >= 2911 && c <= 2915)
                  : c <= 2929)))))
            : (c <= 2947 || (c < 2979
              ? (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))
              : (c <= 2980 || (c < 3006
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)
                : (c <= 3010 || (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : c <= 3021)))))))))))
      : (c <= 3024 || (c < 3751
        ? (c < 3328
          ? (c < 3191
            ? (c < 3132
              ? (c < 3086
                ? (c < 3059
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3140 || (c < 3160
                ? (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3171)))))
            : (c <= 3191 || (c < 3270
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3199 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3268)))
              : (c <= 3272 || (c < 3293
                ? (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : c <= 3286)
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3299)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3530
            ? (c < 3449
              ? (c < 3402
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))
                : (c <= 3407 || (c < 3423
                  ? (c >= 3412 && c <= 3415)
                  : c <= 3427)))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))))
            : (c <= 3530 || (c < 3674
              ? (c < 3570
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3572 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : c <= 3663)))
              : (c <= 3675 || (c < 3718
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))))))
        : (c <= 3773 || (c < 4800
          ? (c < 4250
            ? (c < 3913
              ? (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3807 || (c < 3892
                  ? (c >= 3840 && c <= 3871)
                  : c <= 3911)))
              : (c <= 3948 || (c < 4046
                ? (c < 3993
                  ? (c >= 3953 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4058 || (c < 4170
                  ? (c >= 4096 && c <= 4159)
                  : c <= 4239)))))
            : (c <= 4293 || (c < 4698
              ? (c < 4682
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4752
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))))))
          : (c <= 4800 || (c < 5888
            ? (c < 4992
              ? (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4957
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4968)))
              : (c <= 5017 || (c < 5761
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5120 && c <= 5759)))
                : (c <= 5788 || (c < 5873
                  ? (c >= 5792 && c <= 5869)
                  : c <= 5880)))))
            : (c <= 5909 || (c < 6144
              ? (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5942)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : c <= 6109)))
              : (c <= 6157 || (c < 6272
                ? (c < 6176
                  ? c == 6159
                  : c <= 6264)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43136
      ? (c < 9472
        ? (c < 8008
          ? (c < 6912
            ? (c < 6576
              ? (c < 6480
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6468 && c <= 6469)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))
              : (c <= 6601 || (c < 6783
                ? (c < 6686
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6783 || (c < 6832
                  ? (c >= 6816 && c <= 6829)
                  : c <= 6862)))))
            : (c <= 6988 || (c < 7258
              ? (c < 7164
                ? (c < 7040
                  ? (c >= 7002 && c <= 7038)
                  : (c <= 7087 || (c >= 7098 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7227 && c <= 7231)
                  : c <= 7247)))
              : (c <= 7304 || (c < 7424
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7367 || (c >= 7376 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))))))
          : (c <= 8013 || (c < 8240
            ? (c < 8118
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))
              : (c <= 8132 || (c < 8178
                ? (c < 8150
                  ? (c >= 8134 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))
                : (c <= 8180 || (c < 8208
                  ? (c >= 8182 && c <= 8190)
                  : c <= 8231)))))
            : (c <= 8286 || (c < 8448
              ? (c < 8336
                ? (c < 8314
                  ? c == 8305
                  : (c <= 8319 || (c >= 8330 && c <= 8334)))
                : (c <= 8348 || (c < 8400
                  ? (c >= 8352 && c <= 8384)
                  : c <= 8432)))
              : (c <= 8527 || (c < 8592
                ? (c < 8586
                  ? (c >= 8579 && c <= 8580)
                  : c <= 8587)
                : (c <= 9254 || (c < 9372
                  ? (c >= 9280 && c <= 9290)
                  : c <= 9449)))))))))
        : (c <= 10101 || (c < 12347
          ? (c < 11704
            ? (c < 11565
              ? (c < 11513
                ? (c < 11126
                  ? (c >= 10132 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11516 || (c < 11559
                  ? (c >= 11518 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11632 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 11931
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 11904
                  ? (c >= 11744 && c <= 11869)
                  : c <= 11929)))
              : (c <= 12019 || (c < 12289
                ? (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : c <= 12283)
                : (c <= 12294 || (c < 12330
                  ? (c >= 12296 && c <= 12320)
                  : c <= 12343)))))))
          : (c <= 12351 || (c < 40959
            ? (c < 12784
              ? (c < 12593
                ? (c < 12441
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12694
                  ? (c >= 12688 && c <= 12689)
                  : c <= 12771)))
              : (c <= 12830 || (c < 12938
                ? (c < 12880
                  ? (c >= 12842 && c <= 12871)
                  : (c <= 12880 || (c >= 12896 && c <= 12927)))
                : (c <= 12976 || (c < 19903
                  ? (c >= 12992 && c <= 13312)
                  : c <= 19968)))))
            : (c <= 42124 || (c < 42960
              ? (c < 42560
                ? (c < 42192
                  ? (c >= 42128 && c <= 42182)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42725 || (c < 42752
                  ? (c >= 42736 && c <= 42743)
                  : c <= 42954)))
              : (c <= 42961 || (c < 42994
                ? (c < 42965
                  ? c == 42963
                  : c <= 42969)
                : (c <= 43052 || (c < 43072
                  ? (c >= 43062 && c <= 43065)
                  : c <= 43127)))))))))))
      : (c <= 43205 || (c < 65576
        ? (c < 64275
          ? (c < 43785
            ? (c < 43486
              ? (c < 43359
                ? (c < 43232
                  ? (c >= 43214 && c <= 43215)
                  : (c <= 43263 || (c >= 43274 && c <= 43347)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43392 && c <= 43469)
                  : c <= 43471)))
              : (c <= 43503 || (c < 43612
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43574 || (c >= 43584 && c <= 43597)))
                : (c <= 43714 || (c < 43777
                  ? (c >= 43739 && c <= 43766)
                  : c <= 43782)))))
            : (c <= 43790 || (c < 55203
              ? (c < 43824
                ? (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))
                : (c <= 43883 || (c < 44032
                  ? (c >= 43888 && c <= 44013)
                  : c <= 44032)))
              : (c <= 55203 || (c < 63744
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)))))))
          : (c <= 64279 || (c < 65136
            ? (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64285 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64450)))
              : (c <= 64911 || (c < 65056
                ? (c < 64975
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 64975 || (c >= 65008 && c <= 65049)))
                : (c <= 65106 || (c < 65128
                  ? (c >= 65108 && c <= 65126)
                  : c <= 65131)))))
            : (c <= 65140 || (c < 65498
              ? (c < 65474
                ? (c < 65281
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65295 || (c >= 65306 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65532
                ? (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : c <= 65518)
                : (c <= 65533 || (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : c <= 65574)))))))))
        : (c <= 65594 || (c < 66927
          ? (c < 66272
            ? (c < 65913
              ? (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65847
                  ? (c >= 65792 && c <= 65794)
                  : c <= 65855)))
              : (c <= 65929 || (c < 66000
                ? (c < 65936
                  ? (c >= 65932 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : c <= 66256)))))
            : (c <= 66272 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66426 || (c < 66463
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66512 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67584
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67456
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67461 || (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : c <= 67514)))))
            : (c <= 67589 || (c < 67680
              ? (c < 67644
                ? (c < 67594
                  ? c == 67592
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67671
                  ? (c >= 67647 && c <= 67669)
                  : c <= 67671)))
              : (c <= 67704 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67871
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_char_token1_character_set_2(int32_t c) {
  return (c < 7088
    ? (c < 3558
      ? (c < 2790
        ? (c < 1984
          ? (c < 1632
            ? (c >= 178 && c <= 190)
            : (c <= 1641 || (c >= 1776 && c <= 1785)))
          : (c <= 1993 || (c < 2534
            ? (c >= 2406 && c <= 2415)
            : (c <= 2553 || (c >= 2662 && c <= 2671)))))
        : (c <= 2799 || (c < 3192
          ? (c < 3046
            ? (c >= 2918 && c <= 2935)
            : (c <= 3058 || (c >= 3174 && c <= 3183)))
          : (c <= 3198 || (c < 3416
            ? (c >= 3302 && c <= 3311)
            : (c <= 3422 || (c >= 3430 && c <= 3448)))))))
      : (c <= 3567 || (c < 6128
        ? (c < 4160
          ? (c < 3792
            ? (c >= 3664 && c <= 3673)
            : (c <= 3801 || (c >= 3872 && c <= 3891)))
          : (c <= 4249 || (c < 5870
            ? (c >= 4969 && c <= 4988)
            : (c <= 5872 || (c >= 6112 && c <= 6121)))))
        : (c <= 6137 || (c < 6784
          ? (c < 6470
            ? (c >= 6160 && c <= 6169)
            : (c <= 6479 || (c >= 6608 && c <= 6618)))
          : (c <= 6793 || (c < 6992
            ? (c >= 6800 && c <= 6809)
            : c <= 7001)))))))
    : (c <= 7097 || (c < 43472
      ? (c < 12295
        ? (c < 8308
          ? (c < 7248
            ? (c >= 7232 && c <= 7241)
            : (c <= 7257 || c == 8304))
          : (c <= 8329 || (c < 9312
            ? (c >= 8528 && c <= 8585)
            : (c <= 10131 || c == 11517))))
        : (c <= 12346 || (c < 42726
          ? (c < 12832
            ? (c >= 12690 && c <= 12693)
            : (c <= 12991 || (c >= 42528 && c <= 42537)))
          : (c <= 42735 || (c < 43216
            ? (c >= 43056 && c <= 43061)
            : (c <= 43225 || (c >= 43264 && c <= 43273)))))))
      : (c <= 43481 || (c < 66336
        ? (c < 65296
          ? (c < 43600
            ? (c >= 43504 && c <= 43513)
            : (c <= 43609 || (c >= 44016 && c <= 44025)))
          : (c <= 65305 || (c < 65856
            ? (c >= 65799 && c <= 65843)
            : (c <= 65931 || (c >= 66273 && c <= 66299)))))
        : (c <= 66339 || (c < 67672
          ? (c < 66513
            ? (c >= 66369 && c <= 66378)
            : (c <= 66517 || (c >= 66720 && c <= 66729)))
          : (c <= 67711 || (c < 67835
            ? (c >= 67751 && c <= 67759)
            : c <= 67867)))))))));
}

static inline bool aux_sym_char_token1_character_set_3(int32_t c) {
  return (c < 6176
    ? (c < 3072
      ? (c < 2631
        ? (c < 2200
          ? (c < 1519
            ? (c < 931
              ? (c < 900
                ? (c < 161
                  ? (c >= '!' && c <= '~')
                  : (c <= 887 || (c >= 890 && c <= 895)))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1327 || (c < 1421
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1418)
                : (c <= 1423 || (c < 1488
                  ? (c >= 1425 && c <= 1479)
                  : c <= 1514)))))
            : (c <= 1524 || (c < 2045
              ? (c < 1808
                ? (c < 1565
                  ? (c >= 1542 && c <= 1563)
                  : (c <= 1756 || (c >= 1758 && c <= 1805)))
                : (c <= 1866 || (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : c <= 2042)))
              : (c <= 2093 || (c < 2142
                ? (c < 2112
                  ? (c >= 2096 && c <= 2110)
                  : c <= 2139)
                : (c <= 2142 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2190)))))))
          : (c <= 2273 || (c < 2527
            ? (c < 2486
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2275 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))
              : (c <= 2489 || (c < 2507
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : c <= 2504)
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : c <= 2525)))))
            : (c <= 2531 || (c < 2602
              ? (c < 2565
                ? (c < 2561
                  ? (c >= 2534 && c <= 2558)
                  : c <= 2563)
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2622
                  ? c == 2620
                  : c <= 2626)))))))))
        : (c <= 2632 || (c < 2866
          ? (c < 2748
            ? (c < 2693
              ? (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2662 && c <= 2678)
                  : c <= 2691)))
              : (c <= 2701 || (c < 2730
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))))
            : (c <= 2757 || (c < 2809
              ? (c < 2768
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : c <= 2765)
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : c <= 2801)))
              : (c <= 2815 || (c < 2831
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : c <= 2828)
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))))
          : (c <= 2867 || (c < 2969
            ? (c < 2911
              ? (c < 2891
                ? (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))
                : (c <= 2893 || (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : c <= 2909)))
              : (c <= 2915 || (c < 2949
                ? (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : c <= 2947)
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))))
            : (c <= 2970 || (c < 3006
              ? (c < 2979
                ? (c < 2974
                  ? c == 2972
                  : c <= 2975)
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))
              : (c <= 3010 || (c < 3024
                ? (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : c <= 3021)
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : c <= 3066)))))))))))
      : (c <= 3084 || (c < 3749
        ? (c < 3328
          ? (c < 3214
            ? (c < 3157
              ? (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : c <= 3149)))
              : (c <= 3158 || (c < 3168
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)
                : (c <= 3171 || (c < 3191
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3274
              ? (c < 3253
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)
                : (c <= 3257 || (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : c <= 3272)))
              : (c <= 3277 || (c < 3296
                ? (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : c <= 3294)
                : (c <= 3299 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3530
            ? (c < 3457
              ? (c < 3402
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))
                : (c <= 3407 || (c < 3430
                  ? (c >= 3412 && c <= 3427)
                  : c <= 3455)))
              : (c <= 3459 || (c < 3507
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))))
            : (c <= 3530 || (c < 3585
              ? (c < 3544
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : c <= 3542)
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : c <= 3572)))
              : (c <= 3642 || (c < 3716
                ? (c < 3713
                  ? (c >= 3647 && c <= 3675)
                  : c <= 3714)
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))))))
        : (c <= 3749 || (c < 4792
          ? (c < 4096
            ? (c < 3840
              ? (c < 3784
                ? (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3789 || (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : c <= 3807)))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3991)
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : c <= 4058)))))
            : (c <= 4293 || (c < 4696
              ? (c < 4304
                ? (c < 4301
                  ? c == 4295
                  : c <= 4301)
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))
              : (c <= 4696 || (c < 4746
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))))))
          : (c <= 4798 || (c < 5792
            ? (c < 4957
              ? (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))
              : (c <= 4988 || (c < 5112
                ? (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : c <= 5109)
                : (c <= 5117 || (c < 5761
                  ? (c >= 5120 && c <= 5759)
                  : c <= 5788)))))
            : (c <= 5880 || (c < 6002
              ? (c < 5952
                ? (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : c <= 5942)
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))
              : (c <= 6003 || (c < 6128
                ? (c < 6112
                  ? (c >= 6016 && c <= 6109)
                  : c <= 6121)
                : (c <= 6137 || (c < 6159
                  ? (c >= 6144 && c <= 6157)
                  : c <= 6169)))))))))))))
    : (c <= 6264 || (c < 43471
      ? (c < 8448
        ? (c < 7357
          ? (c < 6686
            ? (c < 6468
              ? (c < 6432
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6443 || (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : c <= 6464)))
              : (c <= 6509 || (c < 6576
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)
                : (c <= 6601 || (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : c <= 6683)))))
            : (c <= 6750 || (c < 6992
              ? (c < 6816
                ? (c < 6783
                  ? (c >= 6752 && c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6829 || (c < 6912
                  ? (c >= 6832 && c <= 6862)
                  : c <= 6988)))
              : (c <= 7038 || (c < 7227
                ? (c < 7164
                  ? (c >= 7040 && c <= 7155)
                  : c <= 7223)
                : (c <= 7241 || (c < 7312
                  ? (c >= 7245 && c <= 7304)
                  : c <= 7354)))))))
          : (c <= 7367 || (c < 8134
            ? (c < 8025
              ? (c < 7968
                ? (c < 7424
                  ? (c >= 7376 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))
              : (c <= 8025 || (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8132)))))
            : (c <= 8147 || (c < 8240
              ? (c < 8178
                ? (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8175)
                : (c <= 8180 || (c < 8208
                  ? (c >= 8182 && c <= 8190)
                  : c <= 8231)))
              : (c <= 8286 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : c <= 8334)
                : (c <= 8348 || (c < 8400
                  ? (c >= 8352 && c <= 8384)
                  : c <= 8432)))))))))
        : (c <= 8587 || (c < 12289
          ? (c < 11688
            ? (c < 11559
              ? (c < 11126
                ? (c < 9280
                  ? (c >= 8592 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 11123)))
                : (c <= 11157 || (c < 11513
                  ? (c >= 11159 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11631
                ? (c < 11568
                  ? c == 11565
                  : c <= 11623)
                : (c <= 11632 || (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11736
              ? (c < 11712
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 11931
                ? (c < 11904
                  ? (c >= 11744 && c <= 11869)
                  : c <= 11929)
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : c <= 12283)))))))
          : (c <= 12351 || (c < 42752
            ? (c < 12832
              ? (c < 12593
                ? (c < 12441
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : c <= 12830)))
              : (c <= 13312 || (c < 42128
                ? (c < 40959
                  ? (c >= 19903 && c <= 19968)
                  : c <= 42124)
                : (c <= 42182 || (c < 42560
                  ? (c >= 42192 && c <= 42539)
                  : c <= 42743)))))
            : (c <= 42954 || (c < 43072
              ? (c < 42965
                ? (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)
                : (c <= 42969 || (c < 43056
                  ? (c >= 42994 && c <= 43052)
                  : c <= 43065)))
              : (c <= 43127 || (c < 43232
                ? (c < 43214
                  ? (c >= 43136 && c <= 43205)
                  : c <= 43225)
                : (c <= 43347 || (c < 43392
                  ? (c >= 43359 && c <= 43388)
                  : c <= 43469)))))))))))
      : (c <= 43481 || (c < 65599
        ? (c < 64318
          ? (c < 43888
            ? (c < 43777
              ? (c < 43600
                ? (c < 43520
                  ? (c >= 43486 && c <= 43518)
                  : (c <= 43574 || (c >= 43584 && c <= 43597)))
                : (c <= 43609 || (c < 43739
                  ? (c >= 43612 && c <= 43714)
                  : c <= 43766)))
              : (c <= 43782 || (c < 43808
                ? (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : c <= 43883)))))
            : (c <= 44013 || (c < 63744
              ? (c < 55203
                ? (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)))
              : (c <= 64109 || (c < 64275
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)
                : (c <= 64279 || (c < 64312
                  ? (c >= 64285 && c <= 64310)
                  : c <= 64316)))))))
          : (c <= 64318 || (c < 65281
            ? (c < 65008
              ? (c < 64467
                ? (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64450)))
                : (c <= 64911 || (c < 64975
                  ? (c >= 64914 && c <= 64967)
                  : c <= 64975)))
              : (c <= 65049 || (c < 65128
                ? (c < 65108
                  ? (c >= 65056 && c <= 65106)
                  : c <= 65126)
                : (c <= 65131 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))
            : (c <= 65470 || (c < 65512
              ? (c < 65490
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65510)))
              : (c <= 65518 || (c < 65549
                ? (c < 65536
                  ? (c >= 65532 && c <= 65533)
                  : c <= 65547)
                : (c <= 65574 || (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : c <= 65597)))))))))
        : (c <= 65613 || (c < 66940
          ? (c < 66349
            ? (c < 65952
              ? (c < 65799
                ? (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65792 && c <= 65794)))
                : (c <= 65843 || (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : c <= 65948)))
              : (c <= 65952 || (c < 66208
                ? (c < 66176
                  ? (c >= 66000 && c <= 66045)
                  : c <= 66204)
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : c <= 66339)))))
            : (c <= 66378 || (c < 66720
              ? (c < 66463
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : c <= 66461)
                : (c <= 66499 || (c < 66560
                  ? (c >= 66504 && c <= 66517)
                  : c <= 66717)))
              : (c <= 66729 || (c < 66816
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)
                : (c <= 66855 || (c < 66927
                  ? (c >= 66864 && c <= 66915)
                  : c <= 66938)))))))
          : (c <= 66954 || (c < 67584
            ? (c < 67072
              ? (c < 66979
                ? (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : c <= 67004)))
              : (c <= 67382 || (c < 67456
                ? (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)
                : (c <= 67461 || (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : c <= 67514)))))
            : (c <= 67589 || (c < 67671
              ? (c < 67639
                ? (c < 67594
                  ? c == 67592
                  : c <= 67637)
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67742 || (c < 67828
                ? (c < 67808
                  ? (c >= 67751 && c <= 67759)
                  : c <= 67826)
                : (c <= 67829 || (c < 67871
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_number_token1_character_set_1(int32_t c) {
  return (c < 8308
    ? (c < 3558
      ? (c < 2662
        ? (c < 1776
          ? (c < 185
            ? (c < 178
              ? (c >= '0' && c <= '9')
              : c <= 179)
            : (c <= 185 || (c < 1632
              ? (c >= 188 && c <= 190)
              : c <= 1641)))
          : (c <= 1785 || (c < 2534
            ? (c < 2406
              ? (c >= 1984 && c <= 1993)
              : c <= 2415)
            : (c <= 2543 || (c >= 2548 && c <= 2553)))))
        : (c <= 2671 || (c < 3174
          ? (c < 2930
            ? (c < 2918
              ? (c >= 2790 && c <= 2799)
              : c <= 2927)
            : (c <= 2935 || (c >= 3046 && c <= 3058)))
          : (c <= 3183 || (c < 3416
            ? (c < 3302
              ? (c >= 3192 && c <= 3198)
              : c <= 3311)
            : (c <= 3422 || (c >= 3430 && c <= 3448)))))))
      : (c <= 3567 || (c < 6160
        ? (c < 4240
          ? (c < 3872
            ? (c < 3792
              ? (c >= 3664 && c <= 3673)
              : c <= 3801)
            : (c <= 3891 || (c >= 4160 && c <= 4169)))
          : (c <= 4249 || (c < 6112
            ? (c < 5870
              ? (c >= 4969 && c <= 4988)
              : c <= 5872)
            : (c <= 6121 || (c >= 6128 && c <= 6137)))))
        : (c <= 6169 || (c < 6992
          ? (c < 6784
            ? (c < 6608
              ? (c >= 6470 && c <= 6479)
              : c <= 6618)
            : (c <= 6793 || (c >= 6800 && c <= 6809)))
          : (c <= 7001 || (c < 7248
            ? (c < 7232
              ? (c >= 7088 && c <= 7097)
              : c <= 7241)
            : (c <= 7257 || c == 8304))))))))
    : (c <= 8313 || (c < 43264
      ? (c < 12690
        ? (c < 10102
          ? (c < 8581
            ? (c < 8528
              ? (c >= 8320 && c <= 8329)
              : c <= 8578)
            : (c <= 8585 || (c < 9450
              ? (c >= 9312 && c <= 9371)
              : c <= 9471)))
          : (c <= 10131 || (c < 12321
            ? (c < 12295
              ? c == 11517
              : c <= 12295)
            : (c <= 12329 || (c >= 12344 && c <= 12346)))))
        : (c <= 12693 || (c < 12977
          ? (c < 12881
            ? (c < 12872
              ? (c >= 12832 && c <= 12841)
              : c <= 12879)
            : (c <= 12895 || (c >= 12928 && c <= 12937)))
          : (c <= 12991 || (c < 43056
            ? (c < 42726
              ? (c >= 42528 && c <= 42537)
              : c <= 42735)
            : (c <= 43061 || (c >= 43216 && c <= 43225)))))))
      : (c <= 43273 || (c < 66336
        ? (c < 65296
          ? (c < 43600
            ? (c < 43504
              ? (c >= 43472 && c <= 43481)
              : c <= 43513)
            : (c <= 43609 || (c >= 44016 && c <= 44025)))
          : (c <= 65305 || (c < 65930
            ? (c < 65856
              ? (c >= 65799 && c <= 65843)
              : c <= 65912)
            : (c <= 65931 || (c >= 66273 && c <= 66299)))))
        : (c <= 66339 || (c < 67672
          ? (c < 66513
            ? (c < 66378
              ? c == 66369
              : c <= 66378)
            : (c <= 66517 || (c >= 66720 && c <= 66729)))
          : (c <= 67679 || (c < 67835
            ? (c < 67751
              ? (c >= 67705 && c <= 67711)
              : c <= 67759)
            : (c <= 67839 || (c >= 67862 && c <= 67867)))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(566);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '=') ADVANCE(790);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(1377);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == 'b') ADVANCE(791);
      if (lookahead == 'c') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(794);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead == 'f') ADVANCE(805);
      if (lookahead == 'g') ADVANCE(1193);
      if (lookahead == 'h') ADVANCE(1341);
      if (lookahead == 'i') ADVANCE(1086);
      if (lookahead == 'j') ADVANCE(1114);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'm') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(1115);
      if (lookahead == 'p') ADVANCE(809);
      if (lookahead == 'r') ADVANCE(952);
      if (lookahead == 's') ADVANCE(928);
      if (lookahead == 'u') ADVANCE(1109);
      if (lookahead == 'w') ADVANCE(1117);
      if (aux_sym_char_token1_character_set_1(lookahead)) ADVANCE(1376);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1378);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1351);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      if (aux_sym_char_token1_character_set_2(lookahead)) ADVANCE(1376);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1388);
      if (lookahead == '\r') ADVANCE(1390);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1392);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1389);
      if (lookahead == '\r') ADVANCE(1391);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(771);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(769);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(771);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(760);
      if (lookahead == '3') ADVANCE(762);
      if (lookahead == '4') ADVANCE(764);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(689);
      if (lookahead == 'b') ADVANCE(410);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1355);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(1377);
      if (aux_sym_char_token1_character_set_3(lookahead)) ADVANCE(1376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(540);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(333);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(736);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'h') ADVANCE(599);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 'w') ADVANCE(337);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(705);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(754);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(719);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(727);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(717);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(572);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(721);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(725);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(701);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(605);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(609);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(549);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(267);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(347);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 'w') ADVANCE(342);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'w') ADVANCE(340);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'f') ADVANCE(545);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 198:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 199:
      if (lookahead == 'f') ADVANCE(514);
      END_STATE();
    case 200:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 201:
      if (lookahead == 'f') ADVANCE(344);
      END_STATE();
    case 202:
      if (lookahead == 'f') ADVANCE(346);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(519);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(520);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(546);
      END_STATE();
    case 206:
      if (lookahead == 'g') ADVANCE(584);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(247);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(298);
      END_STATE();
    case 211:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 213:
      if (lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 217:
      if (lookahead == 'h') ADVANCE(772);
      END_STATE();
    case 218:
      if (lookahead == 'h') ADVANCE(662);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(664);
      END_STATE();
    case 220:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 221:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 232:
      if (lookahead == 'h') ADVANCE(444);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(445);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(446);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(447);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(448);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(449);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(450);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 263:
      if (lookahead == 'k') ADVANCE(784);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(778);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(738);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(742);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(740);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(744);
      END_STATE();
    case 281:
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 282:
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(370);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(623);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead == 'w') ADVANCE(349);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(536);
      if (lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(746);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(748);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 372:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 373:
      if (lookahead == 'p') ADVANCE(539);
      END_STATE();
    case 374:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 376:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 377:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 379:
      if (lookahead == 'p') ADVANCE(493);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(541);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == 'w') ADVANCE(356);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 388:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 389:
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 390:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 391:
      if (lookahead == 'q') ADVANCE(14);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(788);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(639);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 472:
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 474:
      if (lookahead == 's') ADVANCE(523);
      END_STATE();
    case 475:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 537:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 538:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 539:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 540:
      if (lookahead == 'u') ADVANCE(512);
      END_STATE();
    case 541:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 543:
      if (lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 544:
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 545:
      if (lookahead == 'w') ADVANCE(345);
      END_STATE();
    case 546:
      if (lookahead == 'w') ADVANCE(348);
      END_STATE();
    case 547:
      if (lookahead == 'w') ADVANCE(350);
      END_STATE();
    case 548:
      if (lookahead == 'w') ADVANCE(351);
      END_STATE();
    case 549:
      if (lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 550:
      if (lookahead == 'x') ADVANCE(1372);
      END_STATE();
    case 551:
      if (lookahead == 'x') ADVANCE(499);
      END_STATE();
    case 552:
      if (lookahead == 'x') ADVANCE(383);
      END_STATE();
    case 553:
      if (lookahead == 'y') ADVANCE(574);
      END_STATE();
    case 554:
      if (lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 555:
      if (lookahead == 'y') ADVANCE(457);
      END_STATE();
    case 556:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1393);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(556)
      END_STATE();
    case 557:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(557)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 558:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(558)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1347);
      END_STATE();
    case 559:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(559)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(564);
      END_STATE();
    case 560:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(560)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 561:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1355);
      END_STATE();
    case 562:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1373);
      END_STATE();
    case 563:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 564:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(563);
      END_STATE();
    case 565:
      if (eof) ADVANCE(566);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '@') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'g') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'j') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(565)
      if (aux_sym_number_token1_character_set_1(lookahead)) ADVANCE(1379);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__not_newline);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__not_newline);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_include);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_undefined);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_undefined);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_display);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_multind);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_multind);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_space);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_punctuation);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_punctuation);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_digit);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_grouping);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_grouping);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_base);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_letter);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_lowercase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_uppercase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_litdigit);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_litdigit);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_sign);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sign);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_math);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_modeletter);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_modeletter);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_capsletter);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_capsletter);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_begmodeword);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_begmodeword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_begcapsword);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_begcapsword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_endcapsword);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_endcapsword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_capsmodechars);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_capsmodechars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_begcaps);
      if (lookahead == 'p') ADVANCE(1017);
      if (lookahead == 'w') ADVANCE(1146);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_begcaps);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(354);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_endcaps);
      if (lookahead == 'p') ADVANCE(1028);
      if (lookahead == 'w') ADVANCE(1149);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_endcaps);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(357);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_begcapsphrase);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_begcapsphrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_endcapsphrase);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_endcapsphrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_lencapsphrase);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_lencapsphrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_letsign);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_letsign);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_noletsign);
      if (lookahead == 'a') ADVANCE(998);
      if (lookahead == 'b') ADVANCE(988);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_noletsign);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_noletsignbefore);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_noletsignbefore);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_noletsignafter);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_noletsignafter);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_nocontractsign);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_nocontractsign);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_numsign);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_numsign);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_numericnocontchars);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_numericnocontchars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_numericmodechars);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_numericmodechars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_midendnumericmodechars);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_midendnumericmodechars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_begmodephrase);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_begmodephrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_endmodephrase);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_endmodephrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_lenmodephrase);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_lenmodephrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_seqdelimiter);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_seqdelimiter);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_seqbeforechars);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_seqbeforechars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_seqafterchars);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_seqafterchars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_seqafterpattern);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_seqafterpattern);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_seqafterexpression);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_seqafterexpression);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_class);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_emphclass);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_emphclass);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_begemph);
      if (lookahead == 'p') ADVANCE(1026);
      if (lookahead == 'w') ADVANCE(1147);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_begemph);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(355);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_endemph);
      if (lookahead == 'p') ADVANCE(1029);
      if (lookahead == 'w') ADVANCE(1150);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_endemph);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'w') ADVANCE(358);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_noemphchars);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_noemphchars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_emphletter);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_emphletter);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_begemphword);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_begemphword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_endemphword);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_endemphword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_emphmodechars);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_emphmodechars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_begemphphrase);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_begemphphrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_endemphphrase);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_endemphphrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_lenemphphrase);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_lenemphphrase);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_decpoint);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_decpoint);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_hyphen);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_hyphen);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_capsnocont);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_capsnocont);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_compbrl);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_compbrl);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_comp6);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_comp6);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_nocont);
      if (lookahead == 'r') ADVANCE(842);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_nocont);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_replace);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_always);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_repword);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_repword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_rependword);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_rependword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_largesign);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_largesign);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_word);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_syllable);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_syllable);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_joinword);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_joinword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_lowword);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_lowword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_contraction);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_contraction);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_sufword);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_sufword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_prfword);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_prfword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_begword);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_begword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_begmidword);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_begmidword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_midword);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_midword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_midendword);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_midendword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_endword);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_endword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_partword);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_partword);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_exactdots);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_exactdots);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_prepunc);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_prepunc);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_postpunc);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_postpunc);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_begnum);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_begnum);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_midnum);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_midnum);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_endnum);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_endnum);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_joinnum);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_joinnum);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_begcomp);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_begcomp);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_endcomp);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_endcomp);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_swapcd);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_swapcd);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_swapdd);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_swapdd);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_swapcc);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_swapcc);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_context);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_pass2);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_pass2);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_pass3);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_pass3);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_pass4);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_pass4);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_correct);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_correct);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_multipass_test_token1);
      if (lookahead == '\r') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_multipass_test_token1);
      if (lookahead == '\r') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_multipass_test_token1);
      if (lookahead == '\\') ADVANCE(1357);
      if (lookahead == 'e') ADVANCE(1371);
      if (lookahead == 'f') ADVANCE(1359);
      if (lookahead == 'n') ADVANCE(1361);
      if (lookahead == 'r') ADVANCE(1363);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead == 't') ADVANCE(1367);
      if (lookahead == 'v') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_multipass_test_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_match);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_empmatchbefore);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_empmatchbefore);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_empmatchafter);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_empmatchafter);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_literal);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_before);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_before);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_after);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_after);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_noback);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_noback);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_nofor);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_nofor);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_nocross);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_nocross);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'l') ADVANCE(818);
      if (lookahead == 'o') ADVANCE(1075);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'c') ADVANCE(800);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead == 'i') ADVANCE(1001);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'f') ADVANCE(802);
      if (lookahead == 'l') ADVANCE(1332);
      if (lookahead == 't') ADVANCE(1293);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'f') ADVANCE(798);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'm') ADVANCE(1156);
      if (lookahead == 'n') ADVANCE(912);
      if (lookahead == 'x') ADVANCE(812);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1346);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'o') ADVANCE(1204);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1343);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'p') ADVANCE(1244);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1345);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 'p') ADVANCE(1128);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1343);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 's') ADVANCE(929);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1345);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == 't') ADVANCE(957);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1345);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1343);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1345);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1346);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '2') ADVANCE(761);
      if (lookahead == '3') ADVANCE(763);
      if (lookahead == '4') ADVANCE(765);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '6') ADVANCE(690);
      if (lookahead == 'b') ADVANCE(1201);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1197);
      if (lookahead == 'o') ADVANCE(1263);
      if (lookahead == 'r') ADVANCE(959);
      if (lookahead == 'u') ADVANCE(1108);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1192);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == 'i') ADVANCE(1283);
      if (lookahead == 'o') ADVANCE(1331);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1342);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(869);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'd') ADVANCE(960);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(854);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1340);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(913);
      if (lookahead == 'u') ADVANCE(1062);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(871);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1262);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1059);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1168);
      if (lookahead == 'o') ADVANCE(1080);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1296);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1266);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1299);
      if (lookahead == 'n') ADVANCE(925);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1170);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1208);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1211);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1213);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1215);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1217);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1218);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1220);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1222);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(873);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1268);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1265);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1269);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(875);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1270);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1271);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1272);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1273);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1274);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1275);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1276);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1277);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1311);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(997);
      if (lookahead == 'b') ADVANCE(985);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(1315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(1327);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(1066);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(819);
      if (lookahead == 'c') ADVANCE(1118);
      if (lookahead == 'e') ADVANCE(1076);
      if (lookahead == 'f') ADVANCE(1121);
      if (lookahead == 'l') ADVANCE(964);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == 'm') ADVANCE(1038);
      if (lookahead == 'n') ADVANCE(1320);
      if (lookahead == 'w') ADVANCE(1126);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead == 'd') ADVANCE(753);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1084);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(737);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1011);
      if (lookahead == 'h') ADVANCE(600);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(858);
      if (lookahead == 'd') ADVANCE(891);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1060);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1068);
      if (lookahead == 'l') ADVANCE(986);
      if (lookahead == 'm') ADVANCE(1152);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1014);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1016);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1131);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1295);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1085);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(932);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1294);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(936);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1297);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(824);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(825);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'm') ADVANCE(1119);
      if (lookahead == 'n') ADVANCE(1321);
      if (lookahead == 'w') ADVANCE(1129);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(827);
      if (lookahead == 'e') ADVANCE(1079);
      if (lookahead == 'm') ADVANCE(1155);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(837);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1019);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1133);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1020);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1021);
      if (lookahead == 'e') ADVANCE(1339);
      if (lookahead == 'p') ADVANCE(852);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1022);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1023);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1024);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1025);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(1318);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(954);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(755);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(720);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(728);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(712);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(724);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(577);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(718);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(700);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(716);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(710);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(730);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(698);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(573);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(722);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(726);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(702);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(670);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(606);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(610);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(672);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(877);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(956);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(1037);
      if (lookahead == 'e') ADVANCE(1200);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(953);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(1125);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(934);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(935);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(982);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(971);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(1113);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(983);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(1336);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(987);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(1337);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(990);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(991);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1181);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == 'p') ADVANCE(817);
      if (lookahead == 'u') ADVANCE(999);
      if (lookahead == 'w') ADVANCE(820);
      if (lookahead == 'y') ADVANCE(1061);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(588);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead == 'w') ADVANCE(1139);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1338);
      if (lookahead == 'r') ADVANCE(840);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(579);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(781);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1176);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(571);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(694);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(708);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(751);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(592);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(594);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(618);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(676);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(642);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(620);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(678);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(644);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(622);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(680);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(646);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(775);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(628);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1158);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(994);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1101);
      if (lookahead == 'n') ADVANCE(1322);
      if (lookahead == 'w') ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(993);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1069);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1182);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1164);
      if (lookahead == 'f') ADVANCE(1333);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1278);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1196);
      if (lookahead == 'w') ADVANCE(1132);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1198);
      if (lookahead == 's') ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1316);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1184);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1185);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1186);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1187);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1312);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1188);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1177);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(902);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(903);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1189);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1190);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1191);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1209);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1232);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(874);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1267);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1242);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(880);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(882);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(884);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(995);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1313);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(885);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(996);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1314);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(887);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(1180);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1302);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1130);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1136);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1138);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1307);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1308);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(1334);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(585);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1041);
      if (lookahead == 's') ADVANCE(1172);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1089);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1091);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1092);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(961);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1093);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1094);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1097);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(1046);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(865);
      if (lookahead == 'm') ADVANCE(823);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(773);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(661);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(663);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(958);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(828);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1233);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(829);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(830);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(831);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(832);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(833);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(834);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(835);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1234);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1235);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1236);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1237);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1238);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1239);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1240);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1241);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(1179);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(853);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1088);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1009);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(923);
      if (lookahead == 'o') ADVANCE(917);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1100);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1082);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1286);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(859);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1111);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1122);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(870);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1291);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1003);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1105);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1106);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1123);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1004);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1124);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1006);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1008);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(1306);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(785);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(688);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(779);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1330);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1063);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1301);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(814);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(815);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(1040);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(937);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(969);
      if (lookahead == 'm') ADVANCE(1135);
      if (lookahead == 'n') ADVANCE(1120);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(838);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(989);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(963);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(739);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(743);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(741);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(745);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1159);
      if (lookahead == 'n') ADVANCE(1285);
      if (lookahead == 'r') ADVANCE(1199);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1163);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1165);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1166);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1167);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1161);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1162);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1056);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(978);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1153);
      if (lookahead == 'n') ADVANCE(1151);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(1154);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(864);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(878);
      if (lookahead == 't') ADVANCE(1261);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1112);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(598);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(684);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(624);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(634);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(704);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(625);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(714);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(581);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(632);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(654);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(656);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1000);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(921);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(860);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(861);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1287);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(896);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1292);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(872);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(915);
      if (lookahead == 'p') ADVANCE(1171);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1319);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(973);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1323);
      if (lookahead == 'w') ADVANCE(1141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(1324);
      if (lookahead == 'w') ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1036);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(855);
      if (lookahead == 'u') ADVANCE(1070);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1325);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1195);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1104);
      if (lookahead == 'r') ADVANCE(1127);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(920);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(868);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1183);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1095);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1096);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1099);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1298);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1202);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1264);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1049);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1203);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1243);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1107);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1205);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1110);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1206);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(919);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1230);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1207);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1231);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1210);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1212);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1214);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1219);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1221);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1223);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1224);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1225);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1226);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1227);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(1228);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(881);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(922);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(924);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(926);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(927);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1010);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1015);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(930);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(808);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(863);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(747);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(749);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1018);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1328);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1012);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1013);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1034);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1248);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1249);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1282);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(981);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1039);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1229);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1329);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1027);
      if (lookahead == 'w') ADVANCE(1148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1030);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1031);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1032);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(1033);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(813);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(783);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(787);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(590);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(883);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(604);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(668);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(602);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(648);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(777);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(630);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1005);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1116);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1035);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(890);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(876);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1317);
      if (lookahead == 's') ADVANCE(1245);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1042);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(979);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(821);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1058);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(892);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(893);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(933);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(894);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(895);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1253);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1098);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(898);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1254);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(899);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1255);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(900);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1256);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(901);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1257);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1258);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(904);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1259);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(905);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1260);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(906);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(907);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(908);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(909);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(910);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(911);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(980);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(950);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(951);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(1045);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(839);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(841);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(843);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(844);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(846);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(847);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(849);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(879);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(984);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1067);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(807);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(658);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(696);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(613);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(615);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(789);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(660);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(732);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(666);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(612);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(674);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(652);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(650);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(638);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(636);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(640);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1047);
      if (lookahead == 't') ADVANCE(965);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1246);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1310);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1250);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1251);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(939);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1279);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(940);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(941);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(942);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(943);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(944);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(945);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(946);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(947);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(948);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(949);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1053);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1052);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1054);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1055);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(1178);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(914);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(862);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(931);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(583);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(691);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(759);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(767);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(682);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(596);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(686);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1194);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1326);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(916);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(866);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1252);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(972);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(938);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1048);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(966);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(967);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(968);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(970);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(974);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(975);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(976);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(977);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1303);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1304);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1305);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1309);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1280);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1335);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(1281);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(886);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1071);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1072);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1073);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1074);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1083);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1173);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(850);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1300);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1102);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(1103);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(918);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(962);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(811);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(1137);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(1140);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(1142);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(1143);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(1145);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(1288);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(1174);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(575);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(1157);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(1247);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_name);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_name);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1381);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1346);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_name);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1374);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1343);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_name);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1380);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1345);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1347);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1350);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1348);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(1384);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1353);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(1384);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1354);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(1384);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1352);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1354);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_dots);
      if (lookahead == '-') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1355);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_BSLASHs);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_BSLASHs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(771);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_hex_char_token1);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_hex_char_token1);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_hex_char_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(1356);
      if (lookahead == 'e') ADVANCE(1370);
      if (lookahead == 'f') ADVANCE(1358);
      if (lookahead == 'n') ADVANCE(1360);
      if (lookahead == 'r') ADVANCE(1362);
      if (lookahead == 's') ADVANCE(1364);
      if (lookahead == 't') ADVANCE(1366);
      if (lookahead == 'v') ADVANCE(1368);
      if (lookahead == 'x') ADVANCE(1372);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_ascii_chars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1374);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_ascii_chars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1380);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_ascii_chars);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == '_') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1382);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_ascii_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1383);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_filename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1354);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_filename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1375);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_filename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1385);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_filename);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1388);
      if (lookahead == '\r') ADVANCE(1390);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1392);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1389);
      if (lookahead == '\r') ADVANCE(1391);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(1388);
      if (lookahead == '\r') ADVANCE(1390);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1392);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(1389);
      if (lookahead == '\r') ADVANCE(1391);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == '\n') ADVANCE(1388);
      if (lookahead == '\r') ADVANCE(1390);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1392);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1393);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_ascii_digit);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_oct_digit);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 565},
  [2] = {.lex_state = 565},
  [3] = {.lex_state = 565},
  [4] = {.lex_state = 565},
  [5] = {.lex_state = 565},
  [6] = {.lex_state = 565},
  [7] = {.lex_state = 565},
  [8] = {.lex_state = 565},
  [9] = {.lex_state = 565},
  [10] = {.lex_state = 565},
  [11] = {.lex_state = 565},
  [12] = {.lex_state = 565},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 565},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 565},
  [309] = {.lex_state = 565},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 557},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 7},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 565},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 7},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 565},
  [352] = {.lex_state = 565},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 7},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 556},
  [363] = {.lex_state = 556},
  [364] = {.lex_state = 556},
  [365] = {.lex_state = 556},
  [366] = {.lex_state = 556},
  [367] = {.lex_state = 556},
  [368] = {.lex_state = 556},
  [369] = {.lex_state = 556},
  [370] = {.lex_state = 556},
  [371] = {.lex_state = 556},
  [372] = {.lex_state = 556},
  [373] = {.lex_state = 556},
  [374] = {.lex_state = 556},
  [375] = {.lex_state = 556},
  [376] = {.lex_state = 556},
  [377] = {.lex_state = 556},
  [378] = {.lex_state = 556},
  [379] = {.lex_state = 556},
  [380] = {.lex_state = 556},
  [381] = {.lex_state = 556},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 556},
  [384] = {.lex_state = 556},
  [385] = {.lex_state = 556},
  [386] = {.lex_state = 556},
  [387] = {.lex_state = 556},
  [388] = {.lex_state = 556},
  [389] = {.lex_state = 556},
  [390] = {.lex_state = 557},
  [391] = {.lex_state = 7},
  [392] = {.lex_state = 557},
  [393] = {.lex_state = 7},
  [394] = {.lex_state = 7},
  [395] = {.lex_state = 557},
  [396] = {.lex_state = 557},
  [397] = {.lex_state = 556},
  [398] = {.lex_state = 556},
  [399] = {.lex_state = 556},
  [400] = {.lex_state = 556},
  [401] = {.lex_state = 556},
  [402] = {.lex_state = 556},
  [403] = {.lex_state = 556},
  [404] = {.lex_state = 556},
  [405] = {.lex_state = 556},
  [406] = {.lex_state = 556},
  [407] = {.lex_state = 556},
  [408] = {.lex_state = 556},
  [409] = {.lex_state = 556},
  [410] = {.lex_state = 556},
  [411] = {.lex_state = 556},
  [412] = {.lex_state = 556},
  [413] = {.lex_state = 556},
  [414] = {.lex_state = 556},
  [415] = {.lex_state = 556},
  [416] = {.lex_state = 556},
  [417] = {.lex_state = 7},
  [418] = {.lex_state = 7},
  [419] = {.lex_state = 556},
  [420] = {.lex_state = 556},
  [421] = {.lex_state = 556},
  [422] = {.lex_state = 556},
  [423] = {.lex_state = 7},
  [424] = {.lex_state = 556},
  [425] = {.lex_state = 556},
  [426] = {.lex_state = 556},
  [427] = {.lex_state = 556},
  [428] = {.lex_state = 556},
  [429] = {.lex_state = 556},
  [430] = {.lex_state = 556},
  [431] = {.lex_state = 556},
  [432] = {.lex_state = 556},
  [433] = {.lex_state = 556},
  [434] = {.lex_state = 565},
  [435] = {.lex_state = 7},
  [436] = {.lex_state = 556},
  [437] = {.lex_state = 556},
  [438] = {.lex_state = 7},
  [439] = {.lex_state = 7},
  [440] = {.lex_state = 7},
  [441] = {.lex_state = 556},
  [442] = {.lex_state = 556},
  [443] = {.lex_state = 556},
  [444] = {.lex_state = 7},
  [445] = {.lex_state = 7},
  [446] = {.lex_state = 7},
  [447] = {.lex_state = 7},
  [448] = {.lex_state = 7},
  [449] = {.lex_state = 7},
  [450] = {.lex_state = 7},
  [451] = {.lex_state = 7},
  [452] = {.lex_state = 7},
  [453] = {.lex_state = 556},
  [454] = {.lex_state = 558},
  [455] = {.lex_state = 556},
  [456] = {.lex_state = 7},
  [457] = {.lex_state = 7},
  [458] = {.lex_state = 556},
  [459] = {.lex_state = 7},
  [460] = {.lex_state = 7},
  [461] = {.lex_state = 7},
  [462] = {.lex_state = 556},
  [463] = {.lex_state = 7},
  [464] = {.lex_state = 556},
  [465] = {.lex_state = 558},
  [466] = {.lex_state = 7},
  [467] = {.lex_state = 7},
  [468] = {.lex_state = 556},
  [469] = {.lex_state = 556},
  [470] = {.lex_state = 556},
  [471] = {.lex_state = 7},
  [472] = {.lex_state = 7},
  [473] = {.lex_state = 7},
  [474] = {.lex_state = 7},
  [475] = {.lex_state = 556},
  [476] = {.lex_state = 556},
  [477] = {.lex_state = 7},
  [478] = {.lex_state = 7},
  [479] = {.lex_state = 556},
  [480] = {.lex_state = 556},
  [481] = {.lex_state = 556},
  [482] = {.lex_state = 556},
  [483] = {.lex_state = 556},
  [484] = {.lex_state = 556},
  [485] = {.lex_state = 556},
  [486] = {.lex_state = 556},
  [487] = {.lex_state = 556},
  [488] = {.lex_state = 7},
  [489] = {.lex_state = 7},
  [490] = {.lex_state = 7},
  [491] = {.lex_state = 7},
  [492] = {.lex_state = 556},
  [493] = {.lex_state = 7},
  [494] = {.lex_state = 556},
  [495] = {.lex_state = 556},
  [496] = {.lex_state = 7},
  [497] = {.lex_state = 556},
  [498] = {.lex_state = 556},
  [499] = {.lex_state = 556},
  [500] = {.lex_state = 556},
  [501] = {.lex_state = 556},
  [502] = {.lex_state = 556},
  [503] = {.lex_state = 556},
  [504] = {.lex_state = 565},
  [505] = {.lex_state = 556},
  [506] = {.lex_state = 556},
  [507] = {.lex_state = 556},
  [508] = {.lex_state = 556},
  [509] = {.lex_state = 556},
  [510] = {.lex_state = 556},
  [511] = {.lex_state = 556},
  [512] = {.lex_state = 556},
  [513] = {.lex_state = 556},
  [514] = {.lex_state = 556},
  [515] = {.lex_state = 556},
  [516] = {.lex_state = 556},
  [517] = {.lex_state = 556},
  [518] = {.lex_state = 556},
  [519] = {.lex_state = 556},
  [520] = {.lex_state = 556},
  [521] = {.lex_state = 556},
  [522] = {.lex_state = 556},
  [523] = {.lex_state = 556},
  [524] = {.lex_state = 556},
  [525] = {.lex_state = 556},
  [526] = {.lex_state = 556},
  [527] = {.lex_state = 556},
  [528] = {.lex_state = 556},
  [529] = {.lex_state = 556},
  [530] = {.lex_state = 556},
  [531] = {.lex_state = 556},
  [532] = {.lex_state = 556},
  [533] = {.lex_state = 556},
  [534] = {.lex_state = 556},
  [535] = {.lex_state = 556},
  [536] = {.lex_state = 556},
  [537] = {.lex_state = 556},
  [538] = {.lex_state = 556},
  [539] = {.lex_state = 556},
  [540] = {.lex_state = 556},
  [541] = {.lex_state = 556},
  [542] = {.lex_state = 556},
  [543] = {.lex_state = 556},
  [544] = {.lex_state = 556},
  [545] = {.lex_state = 556},
  [546] = {.lex_state = 556},
  [547] = {.lex_state = 556},
  [548] = {.lex_state = 556},
  [549] = {.lex_state = 556},
  [550] = {.lex_state = 556},
  [551] = {.lex_state = 556},
  [552] = {.lex_state = 556},
  [553] = {.lex_state = 556},
  [554] = {.lex_state = 556},
  [555] = {.lex_state = 556},
  [556] = {.lex_state = 556},
  [557] = {.lex_state = 556},
  [558] = {.lex_state = 556},
  [559] = {.lex_state = 556},
  [560] = {.lex_state = 556},
  [561] = {.lex_state = 556},
  [562] = {.lex_state = 556},
  [563] = {.lex_state = 556},
  [564] = {.lex_state = 556},
  [565] = {.lex_state = 556},
  [566] = {.lex_state = 556},
  [567] = {.lex_state = 556},
  [568] = {.lex_state = 556},
  [569] = {.lex_state = 556},
  [570] = {.lex_state = 556},
  [571] = {.lex_state = 556},
  [572] = {.lex_state = 556},
  [573] = {.lex_state = 556},
  [574] = {.lex_state = 556},
  [575] = {.lex_state = 556},
  [576] = {.lex_state = 556},
  [577] = {.lex_state = 556},
  [578] = {.lex_state = 556},
  [579] = {.lex_state = 556},
  [580] = {.lex_state = 556},
  [581] = {.lex_state = 556},
  [582] = {.lex_state = 556},
  [583] = {.lex_state = 556},
  [584] = {.lex_state = 556},
  [585] = {.lex_state = 556},
  [586] = {.lex_state = 559},
  [587] = {.lex_state = 556},
  [588] = {.lex_state = 556},
  [589] = {.lex_state = 556},
  [590] = {.lex_state = 556},
  [591] = {.lex_state = 556},
  [592] = {.lex_state = 556},
  [593] = {.lex_state = 556},
  [594] = {.lex_state = 556},
  [595] = {.lex_state = 565},
  [596] = {.lex_state = 556},
  [597] = {.lex_state = 556},
  [598] = {.lex_state = 556},
  [599] = {.lex_state = 565},
  [600] = {.lex_state = 556},
  [601] = {.lex_state = 556},
  [602] = {.lex_state = 556},
  [603] = {.lex_state = 556},
  [604] = {.lex_state = 556},
  [605] = {.lex_state = 556},
  [606] = {.lex_state = 556},
  [607] = {.lex_state = 556},
  [608] = {.lex_state = 556},
  [609] = {.lex_state = 556},
  [610] = {.lex_state = 556},
  [611] = {.lex_state = 556},
  [612] = {.lex_state = 556},
  [613] = {.lex_state = 556},
  [614] = {.lex_state = 556},
  [615] = {.lex_state = 556},
  [616] = {.lex_state = 556},
  [617] = {.lex_state = 556},
  [618] = {.lex_state = 556},
  [619] = {.lex_state = 556},
  [620] = {.lex_state = 556},
  [621] = {.lex_state = 556},
  [622] = {.lex_state = 556},
  [623] = {.lex_state = 556},
  [624] = {.lex_state = 556},
  [625] = {.lex_state = 556},
  [626] = {.lex_state = 556},
  [627] = {.lex_state = 556},
  [628] = {.lex_state = 556},
  [629] = {.lex_state = 556},
  [630] = {.lex_state = 556},
  [631] = {.lex_state = 7},
  [632] = {.lex_state = 556},
  [633] = {.lex_state = 7},
  [634] = {.lex_state = 7},
  [635] = {.lex_state = 556},
  [636] = {.lex_state = 7},
  [637] = {.lex_state = 7},
  [638] = {.lex_state = 7},
  [639] = {.lex_state = 7},
  [640] = {.lex_state = 7},
  [641] = {.lex_state = 7},
  [642] = {.lex_state = 7},
  [643] = {.lex_state = 7},
  [644] = {.lex_state = 7},
  [645] = {.lex_state = 556},
  [646] = {.lex_state = 7},
  [647] = {.lex_state = 556},
  [648] = {.lex_state = 7},
  [649] = {.lex_state = 556},
  [650] = {.lex_state = 556},
  [651] = {.lex_state = 556},
  [652] = {.lex_state = 556},
  [653] = {.lex_state = 556},
  [654] = {.lex_state = 558},
  [655] = {.lex_state = 556},
  [656] = {.lex_state = 556},
  [657] = {.lex_state = 7},
  [658] = {.lex_state = 7},
  [659] = {.lex_state = 7},
  [660] = {.lex_state = 7},
  [661] = {.lex_state = 556},
  [662] = {.lex_state = 7},
  [663] = {.lex_state = 556},
  [664] = {.lex_state = 556},
  [665] = {.lex_state = 556},
  [666] = {.lex_state = 568},
  [667] = {.lex_state = 556},
  [668] = {.lex_state = 556},
  [669] = {.lex_state = 556},
  [670] = {.lex_state = 556},
  [671] = {.lex_state = 556},
  [672] = {.lex_state = 556},
  [673] = {.lex_state = 556},
  [674] = {.lex_state = 556},
  [675] = {.lex_state = 556},
  [676] = {.lex_state = 556},
  [677] = {.lex_state = 556},
  [678] = {.lex_state = 556},
  [679] = {.lex_state = 7},
  [680] = {.lex_state = 568},
  [681] = {.lex_state = 7},
  [682] = {.lex_state = 7},
  [683] = {.lex_state = 7},
  [684] = {.lex_state = 7},
  [685] = {.lex_state = 7},
  [686] = {.lex_state = 556},
  [687] = {.lex_state = 556},
  [688] = {.lex_state = 556},
  [689] = {.lex_state = 556},
  [690] = {.lex_state = 557},
  [691] = {.lex_state = 556},
  [692] = {.lex_state = 557},
  [693] = {.lex_state = 557},
  [694] = {.lex_state = 557},
  [695] = {.lex_state = 7},
  [696] = {.lex_state = 7},
  [697] = {.lex_state = 556},
  [698] = {.lex_state = 556},
  [699] = {.lex_state = 556},
  [700] = {.lex_state = 556},
  [701] = {.lex_state = 556},
  [702] = {.lex_state = 556},
  [703] = {.lex_state = 565},
  [704] = {.lex_state = 556},
  [705] = {.lex_state = 556},
  [706] = {.lex_state = 556},
  [707] = {.lex_state = 556},
  [708] = {.lex_state = 556},
  [709] = {.lex_state = 556},
  [710] = {.lex_state = 556},
  [711] = {.lex_state = 556},
  [712] = {.lex_state = 556},
  [713] = {.lex_state = 556},
  [714] = {.lex_state = 556},
  [715] = {.lex_state = 556},
  [716] = {.lex_state = 556},
  [717] = {.lex_state = 556},
  [718] = {.lex_state = 556},
  [719] = {.lex_state = 556},
  [720] = {.lex_state = 556},
  [721] = {.lex_state = 556},
  [722] = {.lex_state = 556},
  [723] = {.lex_state = 556},
  [724] = {.lex_state = 556},
  [725] = {.lex_state = 556},
  [726] = {.lex_state = 556},
  [727] = {.lex_state = 556},
  [728] = {.lex_state = 556},
  [729] = {.lex_state = 557},
  [730] = {.lex_state = 557},
  [731] = {.lex_state = 557},
  [732] = {.lex_state = 557},
  [733] = {.lex_state = 557},
  [734] = {.lex_state = 557},
  [735] = {.lex_state = 557},
  [736] = {.lex_state = 557},
  [737] = {.lex_state = 556},
  [738] = {.lex_state = 565},
  [739] = {.lex_state = 557},
  [740] = {.lex_state = 557},
  [741] = {.lex_state = 557},
  [742] = {.lex_state = 557},
  [743] = {.lex_state = 556},
  [744] = {.lex_state = 556},
  [745] = {.lex_state = 556},
  [746] = {.lex_state = 556},
  [747] = {.lex_state = 556},
  [748] = {.lex_state = 556},
  [749] = {.lex_state = 556},
  [750] = {.lex_state = 556},
  [751] = {.lex_state = 556},
  [752] = {.lex_state = 556},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 557},
  [755] = {.lex_state = 557},
  [756] = {.lex_state = 557},
  [757] = {.lex_state = 565},
  [758] = {.lex_state = 7},
  [759] = {.lex_state = 7},
  [760] = {.lex_state = 556},
  [761] = {.lex_state = 7},
  [762] = {.lex_state = 556},
  [763] = {.lex_state = 560},
  [764] = {.lex_state = 556},
  [765] = {.lex_state = 7},
  [766] = {.lex_state = 556},
  [767] = {.lex_state = 7},
  [768] = {.lex_state = 7},
  [769] = {.lex_state = 558},
  [770] = {.lex_state = 556},
  [771] = {.lex_state = 7},
  [772] = {.lex_state = 7},
  [773] = {.lex_state = 7},
  [774] = {.lex_state = 556},
  [775] = {.lex_state = 556},
  [776] = {.lex_state = 7},
  [777] = {.lex_state = 7},
  [778] = {.lex_state = 557},
  [779] = {.lex_state = 7},
  [780] = {.lex_state = 557},
  [781] = {.lex_state = 558},
  [782] = {.lex_state = 559},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_undefined] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_multind] = ACTIONS(1),
    [anon_sym_space] = ACTIONS(1),
    [anon_sym_punctuation] = ACTIONS(1),
    [anon_sym_digit] = ACTIONS(1),
    [anon_sym_grouping] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_letter] = ACTIONS(1),
    [anon_sym_lowercase] = ACTIONS(1),
    [anon_sym_uppercase] = ACTIONS(1),
    [anon_sym_litdigit] = ACTIONS(1),
    [anon_sym_sign] = ACTIONS(1),
    [anon_sym_math] = ACTIONS(1),
    [anon_sym_modeletter] = ACTIONS(1),
    [anon_sym_capsletter] = ACTIONS(1),
    [anon_sym_begmodeword] = ACTIONS(1),
    [anon_sym_begcapsword] = ACTIONS(1),
    [anon_sym_endcapsword] = ACTIONS(1),
    [anon_sym_capsmodechars] = ACTIONS(1),
    [anon_sym_begcaps] = ACTIONS(1),
    [anon_sym_endcaps] = ACTIONS(1),
    [anon_sym_begcapsphrase] = ACTIONS(1),
    [anon_sym_endcapsphrase] = ACTIONS(1),
    [anon_sym_lencapsphrase] = ACTIONS(1),
    [anon_sym_letsign] = ACTIONS(1),
    [anon_sym_noletsign] = ACTIONS(1),
    [anon_sym_noletsignbefore] = ACTIONS(1),
    [anon_sym_noletsignafter] = ACTIONS(1),
    [anon_sym_nocontractsign] = ACTIONS(1),
    [anon_sym_numsign] = ACTIONS(1),
    [anon_sym_numericnocontchars] = ACTIONS(1),
    [anon_sym_numericmodechars] = ACTIONS(1),
    [anon_sym_midendnumericmodechars] = ACTIONS(1),
    [anon_sym_begmodephrase] = ACTIONS(1),
    [anon_sym_endmodephrase] = ACTIONS(1),
    [anon_sym_lenmodephrase] = ACTIONS(1),
    [anon_sym_seqdelimiter] = ACTIONS(1),
    [anon_sym_seqbeforechars] = ACTIONS(1),
    [anon_sym_seqafterchars] = ACTIONS(1),
    [anon_sym_seqafterpattern] = ACTIONS(1),
    [anon_sym_seqafterexpression] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_emphclass] = ACTIONS(1),
    [anon_sym_begemph] = ACTIONS(1),
    [anon_sym_endemph] = ACTIONS(1),
    [anon_sym_noemphchars] = ACTIONS(1),
    [anon_sym_emphletter] = ACTIONS(1),
    [anon_sym_begemphword] = ACTIONS(1),
    [anon_sym_endemphword] = ACTIONS(1),
    [anon_sym_emphmodechars] = ACTIONS(1),
    [anon_sym_begemphphrase] = ACTIONS(1),
    [anon_sym_endemphphrase] = ACTIONS(1),
    [anon_sym_lenemphphrase] = ACTIONS(1),
    [anon_sym_decpoint] = ACTIONS(1),
    [anon_sym_hyphen] = ACTIONS(1),
    [sym_capsnocont] = ACTIONS(1),
    [anon_sym_compbrl] = ACTIONS(1),
    [anon_sym_comp6] = ACTIONS(1),
    [anon_sym_nocont] = ACTIONS(1),
    [anon_sym_replace] = ACTIONS(1),
    [anon_sym_always] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_repword] = ACTIONS(1),
    [anon_sym_rependword] = ACTIONS(1),
    [anon_sym_largesign] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_syllable] = ACTIONS(1),
    [anon_sym_joinword] = ACTIONS(1),
    [anon_sym_lowword] = ACTIONS(1),
    [anon_sym_contraction] = ACTIONS(1),
    [anon_sym_sufword] = ACTIONS(1),
    [anon_sym_prfword] = ACTIONS(1),
    [anon_sym_begword] = ACTIONS(1),
    [anon_sym_begmidword] = ACTIONS(1),
    [anon_sym_midword] = ACTIONS(1),
    [anon_sym_midendword] = ACTIONS(1),
    [anon_sym_endword] = ACTIONS(1),
    [anon_sym_partword] = ACTIONS(1),
    [anon_sym_exactdots] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_prepunc] = ACTIONS(1),
    [anon_sym_postpunc] = ACTIONS(1),
    [anon_sym_begnum] = ACTIONS(1),
    [anon_sym_midnum] = ACTIONS(1),
    [anon_sym_endnum] = ACTIONS(1),
    [anon_sym_joinnum] = ACTIONS(1),
    [anon_sym_begcomp] = ACTIONS(1),
    [anon_sym_endcomp] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_swapcd] = ACTIONS(1),
    [anon_sym_swapdd] = ACTIONS(1),
    [anon_sym_swapcc] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_pass2] = ACTIONS(1),
    [anon_sym_pass3] = ACTIONS(1),
    [anon_sym_pass4] = ACTIONS(1),
    [anon_sym_correct] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_empmatchbefore] = ACTIONS(1),
    [anon_sym_empmatchafter] = ACTIONS(1),
    [anon_sym_literal] = ACTIONS(1),
    [sym_before] = ACTIONS(1),
    [sym_after] = ACTIONS(1),
    [sym_noback] = ACTIONS(1),
    [sym_nofor] = ACTIONS(1),
    [sym_nocross] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_dots] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHs] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_BSLASHe] = ACTIONS(1),
    [anon_sym_BSLASHx] = ACTIONS(1),
    [aux_sym_hex_char_token1] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [sym_ascii_chars] = ACTIONS(1),
    [sym_filename] = ACTIONS(1),
    [sym_ascii_digit] = ACTIONS(1),
    [sym_oct_digit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(753),
    [sym__line] = STATE(3),
    [sym__line1] = STATE(148),
    [sym_comment] = STATE(148),
    [sym__rule_with_comment] = STATE(148),
    [sym__rule] = STATE(124),
    [sym_include] = STATE(124),
    [sym_undefined] = STATE(124),
    [sym_display] = STATE(124),
    [sym_multind] = STATE(124),
    [sym_space] = STATE(124),
    [sym_punctuation] = STATE(124),
    [sym_digit] = STATE(124),
    [sym_grouping] = STATE(124),
    [sym_base] = STATE(124),
    [sym_letter] = STATE(124),
    [sym_lowercase] = STATE(124),
    [sym_uppercase] = STATE(124),
    [sym_litdigit] = STATE(124),
    [sym_sign] = STATE(124),
    [sym_math] = STATE(124),
    [sym_modeletter] = STATE(124),
    [sym_capsletter] = STATE(124),
    [sym_begmodeword] = STATE(124),
    [sym_begcapsword] = STATE(124),
    [sym_endcapsword] = STATE(124),
    [sym_capsmodechars] = STATE(124),
    [sym_begcaps] = STATE(124),
    [sym_endcaps] = STATE(124),
    [sym_begcapsphrase] = STATE(124),
    [sym_endcapsphrase] = STATE(124),
    [sym_lencapsphrase] = STATE(124),
    [sym_letsign] = STATE(124),
    [sym_noletsign] = STATE(124),
    [sym_noletsignbefore] = STATE(124),
    [sym_noletsignafter] = STATE(124),
    [sym_nocontractsign] = STATE(124),
    [sym_numsign] = STATE(124),
    [sym_numericnocontchars] = STATE(124),
    [sym_numericmodechars] = STATE(124),
    [sym_midendnumericmodechars] = STATE(124),
    [sym_begmodephrase] = STATE(124),
    [sym_endmodephrase] = STATE(124),
    [sym_lenmodephrase] = STATE(124),
    [sym_seqdelimiter] = STATE(124),
    [sym_seqbeforechars] = STATE(124),
    [sym_seqafterchars] = STATE(124),
    [sym_seqafterpattern] = STATE(124),
    [sym_seqafterexpression] = STATE(124),
    [sym_class] = STATE(124),
    [sym_emphclass] = STATE(124),
    [sym_begemph] = STATE(124),
    [sym_endemph] = STATE(124),
    [sym_noemphchars] = STATE(124),
    [sym_emphletter] = STATE(124),
    [sym_begemphword] = STATE(124),
    [sym_endemphword] = STATE(124),
    [sym_emphmodechars] = STATE(124),
    [sym_begemphphrase] = STATE(124),
    [sym_endemphphrase] = STATE(124),
    [sym_lenemphphrase] = STATE(124),
    [sym_decpoint] = STATE(124),
    [sym_hyphen] = STATE(124),
    [sym_compbrl] = STATE(124),
    [sym_comp6] = STATE(124),
    [sym_nocont] = STATE(124),
    [sym_replace] = STATE(124),
    [sym_always] = STATE(124),
    [sym_repeated] = STATE(124),
    [sym_repword] = STATE(124),
    [sym_rependword] = STATE(124),
    [sym_largesign] = STATE(124),
    [sym_word] = STATE(124),
    [sym_syllable] = STATE(124),
    [sym_joinword] = STATE(124),
    [sym_lowword] = STATE(124),
    [sym_contraction] = STATE(124),
    [sym_sufword] = STATE(124),
    [sym_prfword] = STATE(124),
    [sym_begword] = STATE(124),
    [sym_begmidword] = STATE(124),
    [sym_midword] = STATE(124),
    [sym_midendword] = STATE(124),
    [sym_endword] = STATE(124),
    [sym_partword] = STATE(124),
    [sym_exactdots] = STATE(124),
    [sym_prepunc] = STATE(124),
    [sym_postpunc] = STATE(124),
    [sym_begnum] = STATE(124),
    [sym_midnum] = STATE(124),
    [sym_endnum] = STATE(124),
    [sym_joinnum] = STATE(124),
    [sym_begcomp] = STATE(124),
    [sym_endcomp] = STATE(124),
    [sym_attribute] = STATE(124),
    [sym_swapcd] = STATE(124),
    [sym_swapdd] = STATE(124),
    [sym_swapcc] = STATE(124),
    [sym_context] = STATE(124),
    [sym_pass2] = STATE(124),
    [sym_pass3] = STATE(124),
    [sym_pass4] = STATE(124),
    [sym_correct] = STATE(124),
    [sym_match] = STATE(124),
    [sym_with_match] = STATE(757),
    [sym_literal] = STATE(124),
    [sym__prefix] = STATE(5),
    [sym_with_class] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_always_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_undefined] = ACTIONS(9),
    [anon_sym_display] = ACTIONS(11),
    [anon_sym_multind] = ACTIONS(13),
    [anon_sym_space] = ACTIONS(15),
    [anon_sym_punctuation] = ACTIONS(17),
    [anon_sym_digit] = ACTIONS(19),
    [anon_sym_grouping] = ACTIONS(21),
    [anon_sym_base] = ACTIONS(23),
    [anon_sym_letter] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(27),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_litdigit] = ACTIONS(31),
    [anon_sym_sign] = ACTIONS(33),
    [anon_sym_math] = ACTIONS(35),
    [anon_sym_modeletter] = ACTIONS(37),
    [anon_sym_capsletter] = ACTIONS(39),
    [anon_sym_begmodeword] = ACTIONS(41),
    [anon_sym_begcapsword] = ACTIONS(43),
    [anon_sym_endcapsword] = ACTIONS(45),
    [anon_sym_capsmodechars] = ACTIONS(47),
    [anon_sym_begcaps] = ACTIONS(49),
    [anon_sym_endcaps] = ACTIONS(51),
    [anon_sym_begcapsphrase] = ACTIONS(53),
    [anon_sym_endcapsphrase] = ACTIONS(55),
    [anon_sym_lencapsphrase] = ACTIONS(57),
    [anon_sym_letsign] = ACTIONS(59),
    [anon_sym_noletsign] = ACTIONS(61),
    [anon_sym_noletsignbefore] = ACTIONS(63),
    [anon_sym_noletsignafter] = ACTIONS(65),
    [anon_sym_nocontractsign] = ACTIONS(67),
    [anon_sym_numsign] = ACTIONS(69),
    [anon_sym_numericnocontchars] = ACTIONS(71),
    [anon_sym_numericmodechars] = ACTIONS(73),
    [anon_sym_midendnumericmodechars] = ACTIONS(75),
    [anon_sym_begmodephrase] = ACTIONS(77),
    [anon_sym_endmodephrase] = ACTIONS(79),
    [anon_sym_lenmodephrase] = ACTIONS(81),
    [anon_sym_seqdelimiter] = ACTIONS(83),
    [anon_sym_seqbeforechars] = ACTIONS(85),
    [anon_sym_seqafterchars] = ACTIONS(87),
    [anon_sym_seqafterpattern] = ACTIONS(89),
    [anon_sym_seqafterexpression] = ACTIONS(91),
    [anon_sym_class] = ACTIONS(93),
    [anon_sym_emphclass] = ACTIONS(95),
    [anon_sym_begemph] = ACTIONS(97),
    [anon_sym_endemph] = ACTIONS(99),
    [anon_sym_noemphchars] = ACTIONS(101),
    [anon_sym_emphletter] = ACTIONS(103),
    [anon_sym_begemphword] = ACTIONS(105),
    [anon_sym_endemphword] = ACTIONS(107),
    [anon_sym_emphmodechars] = ACTIONS(109),
    [anon_sym_begemphphrase] = ACTIONS(111),
    [anon_sym_endemphphrase] = ACTIONS(113),
    [anon_sym_lenemphphrase] = ACTIONS(115),
    [anon_sym_decpoint] = ACTIONS(117),
    [anon_sym_hyphen] = ACTIONS(119),
    [sym_capsnocont] = ACTIONS(121),
    [anon_sym_compbrl] = ACTIONS(123),
    [anon_sym_comp6] = ACTIONS(125),
    [anon_sym_nocont] = ACTIONS(127),
    [anon_sym_replace] = ACTIONS(129),
    [anon_sym_always] = ACTIONS(131),
    [anon_sym_repeated] = ACTIONS(133),
    [anon_sym_repword] = ACTIONS(135),
    [anon_sym_rependword] = ACTIONS(137),
    [anon_sym_largesign] = ACTIONS(139),
    [anon_sym_word] = ACTIONS(141),
    [anon_sym_syllable] = ACTIONS(143),
    [anon_sym_joinword] = ACTIONS(145),
    [anon_sym_lowword] = ACTIONS(147),
    [anon_sym_contraction] = ACTIONS(149),
    [anon_sym_sufword] = ACTIONS(151),
    [anon_sym_prfword] = ACTIONS(153),
    [anon_sym_begword] = ACTIONS(155),
    [anon_sym_begmidword] = ACTIONS(157),
    [anon_sym_midword] = ACTIONS(159),
    [anon_sym_midendword] = ACTIONS(161),
    [anon_sym_endword] = ACTIONS(163),
    [anon_sym_partword] = ACTIONS(165),
    [anon_sym_exactdots] = ACTIONS(167),
    [anon_sym_prepunc] = ACTIONS(169),
    [anon_sym_postpunc] = ACTIONS(171),
    [anon_sym_begnum] = ACTIONS(173),
    [anon_sym_midnum] = ACTIONS(175),
    [anon_sym_endnum] = ACTIONS(177),
    [anon_sym_joinnum] = ACTIONS(179),
    [anon_sym_begcomp] = ACTIONS(181),
    [anon_sym_endcomp] = ACTIONS(183),
    [anon_sym_attribute] = ACTIONS(185),
    [anon_sym_swapcd] = ACTIONS(187),
    [anon_sym_swapdd] = ACTIONS(189),
    [anon_sym_swapcc] = ACTIONS(191),
    [anon_sym_context] = ACTIONS(193),
    [anon_sym_pass2] = ACTIONS(195),
    [anon_sym_pass3] = ACTIONS(197),
    [anon_sym_pass4] = ACTIONS(199),
    [anon_sym_correct] = ACTIONS(201),
    [anon_sym_match] = ACTIONS(203),
    [anon_sym_empmatchbefore] = ACTIONS(205),
    [anon_sym_empmatchafter] = ACTIONS(207),
    [anon_sym_literal] = ACTIONS(209),
    [sym_before] = ACTIONS(211),
    [sym_after] = ACTIONS(211),
    [sym_noback] = ACTIONS(213),
    [sym_nofor] = ACTIONS(213),
    [sym_nocross] = ACTIONS(215),
  },
  [2] = {
    [sym__line] = STATE(2),
    [sym__line1] = STATE(148),
    [sym_comment] = STATE(148),
    [sym__rule_with_comment] = STATE(148),
    [sym__rule] = STATE(124),
    [sym_include] = STATE(124),
    [sym_undefined] = STATE(124),
    [sym_display] = STATE(124),
    [sym_multind] = STATE(124),
    [sym_space] = STATE(124),
    [sym_punctuation] = STATE(124),
    [sym_digit] = STATE(124),
    [sym_grouping] = STATE(124),
    [sym_base] = STATE(124),
    [sym_letter] = STATE(124),
    [sym_lowercase] = STATE(124),
    [sym_uppercase] = STATE(124),
    [sym_litdigit] = STATE(124),
    [sym_sign] = STATE(124),
    [sym_math] = STATE(124),
    [sym_modeletter] = STATE(124),
    [sym_capsletter] = STATE(124),
    [sym_begmodeword] = STATE(124),
    [sym_begcapsword] = STATE(124),
    [sym_endcapsword] = STATE(124),
    [sym_capsmodechars] = STATE(124),
    [sym_begcaps] = STATE(124),
    [sym_endcaps] = STATE(124),
    [sym_begcapsphrase] = STATE(124),
    [sym_endcapsphrase] = STATE(124),
    [sym_lencapsphrase] = STATE(124),
    [sym_letsign] = STATE(124),
    [sym_noletsign] = STATE(124),
    [sym_noletsignbefore] = STATE(124),
    [sym_noletsignafter] = STATE(124),
    [sym_nocontractsign] = STATE(124),
    [sym_numsign] = STATE(124),
    [sym_numericnocontchars] = STATE(124),
    [sym_numericmodechars] = STATE(124),
    [sym_midendnumericmodechars] = STATE(124),
    [sym_begmodephrase] = STATE(124),
    [sym_endmodephrase] = STATE(124),
    [sym_lenmodephrase] = STATE(124),
    [sym_seqdelimiter] = STATE(124),
    [sym_seqbeforechars] = STATE(124),
    [sym_seqafterchars] = STATE(124),
    [sym_seqafterpattern] = STATE(124),
    [sym_seqafterexpression] = STATE(124),
    [sym_class] = STATE(124),
    [sym_emphclass] = STATE(124),
    [sym_begemph] = STATE(124),
    [sym_endemph] = STATE(124),
    [sym_noemphchars] = STATE(124),
    [sym_emphletter] = STATE(124),
    [sym_begemphword] = STATE(124),
    [sym_endemphword] = STATE(124),
    [sym_emphmodechars] = STATE(124),
    [sym_begemphphrase] = STATE(124),
    [sym_endemphphrase] = STATE(124),
    [sym_lenemphphrase] = STATE(124),
    [sym_decpoint] = STATE(124),
    [sym_hyphen] = STATE(124),
    [sym_compbrl] = STATE(124),
    [sym_comp6] = STATE(124),
    [sym_nocont] = STATE(124),
    [sym_replace] = STATE(124),
    [sym_always] = STATE(124),
    [sym_repeated] = STATE(124),
    [sym_repword] = STATE(124),
    [sym_rependword] = STATE(124),
    [sym_largesign] = STATE(124),
    [sym_word] = STATE(124),
    [sym_syllable] = STATE(124),
    [sym_joinword] = STATE(124),
    [sym_lowword] = STATE(124),
    [sym_contraction] = STATE(124),
    [sym_sufword] = STATE(124),
    [sym_prfword] = STATE(124),
    [sym_begword] = STATE(124),
    [sym_begmidword] = STATE(124),
    [sym_midword] = STATE(124),
    [sym_midendword] = STATE(124),
    [sym_endword] = STATE(124),
    [sym_partword] = STATE(124),
    [sym_exactdots] = STATE(124),
    [sym_prepunc] = STATE(124),
    [sym_postpunc] = STATE(124),
    [sym_begnum] = STATE(124),
    [sym_midnum] = STATE(124),
    [sym_endnum] = STATE(124),
    [sym_joinnum] = STATE(124),
    [sym_begcomp] = STATE(124),
    [sym_endcomp] = STATE(124),
    [sym_attribute] = STATE(124),
    [sym_swapcd] = STATE(124),
    [sym_swapdd] = STATE(124),
    [sym_swapcc] = STATE(124),
    [sym_context] = STATE(124),
    [sym_pass2] = STATE(124),
    [sym_pass3] = STATE(124),
    [sym_pass4] = STATE(124),
    [sym_correct] = STATE(124),
    [sym_match] = STATE(124),
    [sym_with_match] = STATE(757),
    [sym_literal] = STATE(124),
    [sym__prefix] = STATE(5),
    [sym_with_class] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_always_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(219),
    [anon_sym_include] = ACTIONS(222),
    [anon_sym_undefined] = ACTIONS(225),
    [anon_sym_display] = ACTIONS(228),
    [anon_sym_multind] = ACTIONS(231),
    [anon_sym_space] = ACTIONS(234),
    [anon_sym_punctuation] = ACTIONS(237),
    [anon_sym_digit] = ACTIONS(240),
    [anon_sym_grouping] = ACTIONS(243),
    [anon_sym_base] = ACTIONS(246),
    [anon_sym_letter] = ACTIONS(249),
    [anon_sym_lowercase] = ACTIONS(252),
    [anon_sym_uppercase] = ACTIONS(255),
    [anon_sym_litdigit] = ACTIONS(258),
    [anon_sym_sign] = ACTIONS(261),
    [anon_sym_math] = ACTIONS(264),
    [anon_sym_modeletter] = ACTIONS(267),
    [anon_sym_capsletter] = ACTIONS(270),
    [anon_sym_begmodeword] = ACTIONS(273),
    [anon_sym_begcapsword] = ACTIONS(276),
    [anon_sym_endcapsword] = ACTIONS(279),
    [anon_sym_capsmodechars] = ACTIONS(282),
    [anon_sym_begcaps] = ACTIONS(285),
    [anon_sym_endcaps] = ACTIONS(288),
    [anon_sym_begcapsphrase] = ACTIONS(291),
    [anon_sym_endcapsphrase] = ACTIONS(294),
    [anon_sym_lencapsphrase] = ACTIONS(297),
    [anon_sym_letsign] = ACTIONS(300),
    [anon_sym_noletsign] = ACTIONS(303),
    [anon_sym_noletsignbefore] = ACTIONS(306),
    [anon_sym_noletsignafter] = ACTIONS(309),
    [anon_sym_nocontractsign] = ACTIONS(312),
    [anon_sym_numsign] = ACTIONS(315),
    [anon_sym_numericnocontchars] = ACTIONS(318),
    [anon_sym_numericmodechars] = ACTIONS(321),
    [anon_sym_midendnumericmodechars] = ACTIONS(324),
    [anon_sym_begmodephrase] = ACTIONS(327),
    [anon_sym_endmodephrase] = ACTIONS(330),
    [anon_sym_lenmodephrase] = ACTIONS(333),
    [anon_sym_seqdelimiter] = ACTIONS(336),
    [anon_sym_seqbeforechars] = ACTIONS(339),
    [anon_sym_seqafterchars] = ACTIONS(342),
    [anon_sym_seqafterpattern] = ACTIONS(345),
    [anon_sym_seqafterexpression] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(351),
    [anon_sym_emphclass] = ACTIONS(354),
    [anon_sym_begemph] = ACTIONS(357),
    [anon_sym_endemph] = ACTIONS(360),
    [anon_sym_noemphchars] = ACTIONS(363),
    [anon_sym_emphletter] = ACTIONS(366),
    [anon_sym_begemphword] = ACTIONS(369),
    [anon_sym_endemphword] = ACTIONS(372),
    [anon_sym_emphmodechars] = ACTIONS(375),
    [anon_sym_begemphphrase] = ACTIONS(378),
    [anon_sym_endemphphrase] = ACTIONS(381),
    [anon_sym_lenemphphrase] = ACTIONS(384),
    [anon_sym_decpoint] = ACTIONS(387),
    [anon_sym_hyphen] = ACTIONS(390),
    [sym_capsnocont] = ACTIONS(393),
    [anon_sym_compbrl] = ACTIONS(396),
    [anon_sym_comp6] = ACTIONS(399),
    [anon_sym_nocont] = ACTIONS(402),
    [anon_sym_replace] = ACTIONS(405),
    [anon_sym_always] = ACTIONS(408),
    [anon_sym_repeated] = ACTIONS(411),
    [anon_sym_repword] = ACTIONS(414),
    [anon_sym_rependword] = ACTIONS(417),
    [anon_sym_largesign] = ACTIONS(420),
    [anon_sym_word] = ACTIONS(423),
    [anon_sym_syllable] = ACTIONS(426),
    [anon_sym_joinword] = ACTIONS(429),
    [anon_sym_lowword] = ACTIONS(432),
    [anon_sym_contraction] = ACTIONS(435),
    [anon_sym_sufword] = ACTIONS(438),
    [anon_sym_prfword] = ACTIONS(441),
    [anon_sym_begword] = ACTIONS(444),
    [anon_sym_begmidword] = ACTIONS(447),
    [anon_sym_midword] = ACTIONS(450),
    [anon_sym_midendword] = ACTIONS(453),
    [anon_sym_endword] = ACTIONS(456),
    [anon_sym_partword] = ACTIONS(459),
    [anon_sym_exactdots] = ACTIONS(462),
    [anon_sym_prepunc] = ACTIONS(465),
    [anon_sym_postpunc] = ACTIONS(468),
    [anon_sym_begnum] = ACTIONS(471),
    [anon_sym_midnum] = ACTIONS(474),
    [anon_sym_endnum] = ACTIONS(477),
    [anon_sym_joinnum] = ACTIONS(480),
    [anon_sym_begcomp] = ACTIONS(483),
    [anon_sym_endcomp] = ACTIONS(486),
    [anon_sym_attribute] = ACTIONS(489),
    [anon_sym_swapcd] = ACTIONS(492),
    [anon_sym_swapdd] = ACTIONS(495),
    [anon_sym_swapcc] = ACTIONS(498),
    [anon_sym_context] = ACTIONS(501),
    [anon_sym_pass2] = ACTIONS(504),
    [anon_sym_pass3] = ACTIONS(507),
    [anon_sym_pass4] = ACTIONS(510),
    [anon_sym_correct] = ACTIONS(513),
    [anon_sym_match] = ACTIONS(516),
    [anon_sym_empmatchbefore] = ACTIONS(519),
    [anon_sym_empmatchafter] = ACTIONS(522),
    [anon_sym_literal] = ACTIONS(525),
    [sym_before] = ACTIONS(528),
    [sym_after] = ACTIONS(528),
    [sym_noback] = ACTIONS(531),
    [sym_nofor] = ACTIONS(531),
    [sym_nocross] = ACTIONS(534),
  },
  [3] = {
    [sym__line] = STATE(2),
    [sym__line1] = STATE(148),
    [sym_comment] = STATE(148),
    [sym__rule_with_comment] = STATE(148),
    [sym__rule] = STATE(124),
    [sym_include] = STATE(124),
    [sym_undefined] = STATE(124),
    [sym_display] = STATE(124),
    [sym_multind] = STATE(124),
    [sym_space] = STATE(124),
    [sym_punctuation] = STATE(124),
    [sym_digit] = STATE(124),
    [sym_grouping] = STATE(124),
    [sym_base] = STATE(124),
    [sym_letter] = STATE(124),
    [sym_lowercase] = STATE(124),
    [sym_uppercase] = STATE(124),
    [sym_litdigit] = STATE(124),
    [sym_sign] = STATE(124),
    [sym_math] = STATE(124),
    [sym_modeletter] = STATE(124),
    [sym_capsletter] = STATE(124),
    [sym_begmodeword] = STATE(124),
    [sym_begcapsword] = STATE(124),
    [sym_endcapsword] = STATE(124),
    [sym_capsmodechars] = STATE(124),
    [sym_begcaps] = STATE(124),
    [sym_endcaps] = STATE(124),
    [sym_begcapsphrase] = STATE(124),
    [sym_endcapsphrase] = STATE(124),
    [sym_lencapsphrase] = STATE(124),
    [sym_letsign] = STATE(124),
    [sym_noletsign] = STATE(124),
    [sym_noletsignbefore] = STATE(124),
    [sym_noletsignafter] = STATE(124),
    [sym_nocontractsign] = STATE(124),
    [sym_numsign] = STATE(124),
    [sym_numericnocontchars] = STATE(124),
    [sym_numericmodechars] = STATE(124),
    [sym_midendnumericmodechars] = STATE(124),
    [sym_begmodephrase] = STATE(124),
    [sym_endmodephrase] = STATE(124),
    [sym_lenmodephrase] = STATE(124),
    [sym_seqdelimiter] = STATE(124),
    [sym_seqbeforechars] = STATE(124),
    [sym_seqafterchars] = STATE(124),
    [sym_seqafterpattern] = STATE(124),
    [sym_seqafterexpression] = STATE(124),
    [sym_class] = STATE(124),
    [sym_emphclass] = STATE(124),
    [sym_begemph] = STATE(124),
    [sym_endemph] = STATE(124),
    [sym_noemphchars] = STATE(124),
    [sym_emphletter] = STATE(124),
    [sym_begemphword] = STATE(124),
    [sym_endemphword] = STATE(124),
    [sym_emphmodechars] = STATE(124),
    [sym_begemphphrase] = STATE(124),
    [sym_endemphphrase] = STATE(124),
    [sym_lenemphphrase] = STATE(124),
    [sym_decpoint] = STATE(124),
    [sym_hyphen] = STATE(124),
    [sym_compbrl] = STATE(124),
    [sym_comp6] = STATE(124),
    [sym_nocont] = STATE(124),
    [sym_replace] = STATE(124),
    [sym_always] = STATE(124),
    [sym_repeated] = STATE(124),
    [sym_repword] = STATE(124),
    [sym_rependword] = STATE(124),
    [sym_largesign] = STATE(124),
    [sym_word] = STATE(124),
    [sym_syllable] = STATE(124),
    [sym_joinword] = STATE(124),
    [sym_lowword] = STATE(124),
    [sym_contraction] = STATE(124),
    [sym_sufword] = STATE(124),
    [sym_prfword] = STATE(124),
    [sym_begword] = STATE(124),
    [sym_begmidword] = STATE(124),
    [sym_midword] = STATE(124),
    [sym_midendword] = STATE(124),
    [sym_endword] = STATE(124),
    [sym_partword] = STATE(124),
    [sym_exactdots] = STATE(124),
    [sym_prepunc] = STATE(124),
    [sym_postpunc] = STATE(124),
    [sym_begnum] = STATE(124),
    [sym_midnum] = STATE(124),
    [sym_endnum] = STATE(124),
    [sym_joinnum] = STATE(124),
    [sym_begcomp] = STATE(124),
    [sym_endcomp] = STATE(124),
    [sym_attribute] = STATE(124),
    [sym_swapcd] = STATE(124),
    [sym_swapdd] = STATE(124),
    [sym_swapcc] = STATE(124),
    [sym_context] = STATE(124),
    [sym_pass2] = STATE(124),
    [sym_pass3] = STATE(124),
    [sym_pass4] = STATE(124),
    [sym_correct] = STATE(124),
    [sym_match] = STATE(124),
    [sym_with_match] = STATE(757),
    [sym_literal] = STATE(124),
    [sym__prefix] = STATE(5),
    [sym_with_class] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_always_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_undefined] = ACTIONS(9),
    [anon_sym_display] = ACTIONS(11),
    [anon_sym_multind] = ACTIONS(13),
    [anon_sym_space] = ACTIONS(15),
    [anon_sym_punctuation] = ACTIONS(17),
    [anon_sym_digit] = ACTIONS(19),
    [anon_sym_grouping] = ACTIONS(21),
    [anon_sym_base] = ACTIONS(23),
    [anon_sym_letter] = ACTIONS(25),
    [anon_sym_lowercase] = ACTIONS(27),
    [anon_sym_uppercase] = ACTIONS(29),
    [anon_sym_litdigit] = ACTIONS(31),
    [anon_sym_sign] = ACTIONS(33),
    [anon_sym_math] = ACTIONS(35),
    [anon_sym_modeletter] = ACTIONS(37),
    [anon_sym_capsletter] = ACTIONS(39),
    [anon_sym_begmodeword] = ACTIONS(41),
    [anon_sym_begcapsword] = ACTIONS(43),
    [anon_sym_endcapsword] = ACTIONS(45),
    [anon_sym_capsmodechars] = ACTIONS(47),
    [anon_sym_begcaps] = ACTIONS(49),
    [anon_sym_endcaps] = ACTIONS(51),
    [anon_sym_begcapsphrase] = ACTIONS(53),
    [anon_sym_endcapsphrase] = ACTIONS(55),
    [anon_sym_lencapsphrase] = ACTIONS(57),
    [anon_sym_letsign] = ACTIONS(59),
    [anon_sym_noletsign] = ACTIONS(61),
    [anon_sym_noletsignbefore] = ACTIONS(63),
    [anon_sym_noletsignafter] = ACTIONS(65),
    [anon_sym_nocontractsign] = ACTIONS(67),
    [anon_sym_numsign] = ACTIONS(69),
    [anon_sym_numericnocontchars] = ACTIONS(71),
    [anon_sym_numericmodechars] = ACTIONS(73),
    [anon_sym_midendnumericmodechars] = ACTIONS(75),
    [anon_sym_begmodephrase] = ACTIONS(77),
    [anon_sym_endmodephrase] = ACTIONS(79),
    [anon_sym_lenmodephrase] = ACTIONS(81),
    [anon_sym_seqdelimiter] = ACTIONS(83),
    [anon_sym_seqbeforechars] = ACTIONS(85),
    [anon_sym_seqafterchars] = ACTIONS(87),
    [anon_sym_seqafterpattern] = ACTIONS(89),
    [anon_sym_seqafterexpression] = ACTIONS(91),
    [anon_sym_class] = ACTIONS(93),
    [anon_sym_emphclass] = ACTIONS(95),
    [anon_sym_begemph] = ACTIONS(97),
    [anon_sym_endemph] = ACTIONS(99),
    [anon_sym_noemphchars] = ACTIONS(101),
    [anon_sym_emphletter] = ACTIONS(103),
    [anon_sym_begemphword] = ACTIONS(105),
    [anon_sym_endemphword] = ACTIONS(107),
    [anon_sym_emphmodechars] = ACTIONS(109),
    [anon_sym_begemphphrase] = ACTIONS(111),
    [anon_sym_endemphphrase] = ACTIONS(113),
    [anon_sym_lenemphphrase] = ACTIONS(115),
    [anon_sym_decpoint] = ACTIONS(117),
    [anon_sym_hyphen] = ACTIONS(119),
    [sym_capsnocont] = ACTIONS(121),
    [anon_sym_compbrl] = ACTIONS(123),
    [anon_sym_comp6] = ACTIONS(125),
    [anon_sym_nocont] = ACTIONS(127),
    [anon_sym_replace] = ACTIONS(129),
    [anon_sym_always] = ACTIONS(131),
    [anon_sym_repeated] = ACTIONS(133),
    [anon_sym_repword] = ACTIONS(135),
    [anon_sym_rependword] = ACTIONS(137),
    [anon_sym_largesign] = ACTIONS(139),
    [anon_sym_word] = ACTIONS(141),
    [anon_sym_syllable] = ACTIONS(143),
    [anon_sym_joinword] = ACTIONS(145),
    [anon_sym_lowword] = ACTIONS(147),
    [anon_sym_contraction] = ACTIONS(149),
    [anon_sym_sufword] = ACTIONS(151),
    [anon_sym_prfword] = ACTIONS(153),
    [anon_sym_begword] = ACTIONS(155),
    [anon_sym_begmidword] = ACTIONS(157),
    [anon_sym_midword] = ACTIONS(159),
    [anon_sym_midendword] = ACTIONS(161),
    [anon_sym_endword] = ACTIONS(163),
    [anon_sym_partword] = ACTIONS(165),
    [anon_sym_exactdots] = ACTIONS(167),
    [anon_sym_prepunc] = ACTIONS(169),
    [anon_sym_postpunc] = ACTIONS(171),
    [anon_sym_begnum] = ACTIONS(173),
    [anon_sym_midnum] = ACTIONS(175),
    [anon_sym_endnum] = ACTIONS(177),
    [anon_sym_joinnum] = ACTIONS(179),
    [anon_sym_begcomp] = ACTIONS(181),
    [anon_sym_endcomp] = ACTIONS(183),
    [anon_sym_attribute] = ACTIONS(185),
    [anon_sym_swapcd] = ACTIONS(187),
    [anon_sym_swapdd] = ACTIONS(189),
    [anon_sym_swapcc] = ACTIONS(191),
    [anon_sym_context] = ACTIONS(193),
    [anon_sym_pass2] = ACTIONS(195),
    [anon_sym_pass3] = ACTIONS(197),
    [anon_sym_pass4] = ACTIONS(199),
    [anon_sym_correct] = ACTIONS(201),
    [anon_sym_match] = ACTIONS(203),
    [anon_sym_empmatchbefore] = ACTIONS(205),
    [anon_sym_empmatchafter] = ACTIONS(207),
    [anon_sym_literal] = ACTIONS(209),
    [sym_before] = ACTIONS(211),
    [sym_after] = ACTIONS(211),
    [sym_noback] = ACTIONS(213),
    [sym_nofor] = ACTIONS(213),
    [sym_nocross] = ACTIONS(215),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_include] = ACTIONS(539),
    [anon_sym_undefined] = ACTIONS(539),
    [anon_sym_display] = ACTIONS(539),
    [anon_sym_multind] = ACTIONS(539),
    [anon_sym_space] = ACTIONS(539),
    [anon_sym_punctuation] = ACTIONS(539),
    [anon_sym_digit] = ACTIONS(539),
    [anon_sym_grouping] = ACTIONS(539),
    [anon_sym_base] = ACTIONS(539),
    [anon_sym_letter] = ACTIONS(539),
    [anon_sym_lowercase] = ACTIONS(539),
    [anon_sym_uppercase] = ACTIONS(539),
    [anon_sym_litdigit] = ACTIONS(539),
    [anon_sym_sign] = ACTIONS(539),
    [anon_sym_math] = ACTIONS(539),
    [anon_sym_modeletter] = ACTIONS(539),
    [anon_sym_capsletter] = ACTIONS(539),
    [anon_sym_begmodeword] = ACTIONS(539),
    [anon_sym_begcapsword] = ACTIONS(539),
    [anon_sym_endcapsword] = ACTIONS(539),
    [anon_sym_capsmodechars] = ACTIONS(539),
    [anon_sym_begcaps] = ACTIONS(541),
    [anon_sym_endcaps] = ACTIONS(541),
    [anon_sym_begcapsphrase] = ACTIONS(539),
    [anon_sym_endcapsphrase] = ACTIONS(539),
    [anon_sym_lencapsphrase] = ACTIONS(539),
    [anon_sym_letsign] = ACTIONS(539),
    [anon_sym_noletsign] = ACTIONS(541),
    [anon_sym_noletsignbefore] = ACTIONS(539),
    [anon_sym_noletsignafter] = ACTIONS(539),
    [anon_sym_nocontractsign] = ACTIONS(539),
    [anon_sym_numsign] = ACTIONS(539),
    [anon_sym_numericnocontchars] = ACTIONS(539),
    [anon_sym_numericmodechars] = ACTIONS(539),
    [anon_sym_midendnumericmodechars] = ACTIONS(539),
    [anon_sym_begmodephrase] = ACTIONS(539),
    [anon_sym_endmodephrase] = ACTIONS(539),
    [anon_sym_lenmodephrase] = ACTIONS(539),
    [anon_sym_seqdelimiter] = ACTIONS(539),
    [anon_sym_seqbeforechars] = ACTIONS(539),
    [anon_sym_seqafterchars] = ACTIONS(539),
    [anon_sym_seqafterpattern] = ACTIONS(539),
    [anon_sym_seqafterexpression] = ACTIONS(539),
    [anon_sym_class] = ACTIONS(539),
    [anon_sym_emphclass] = ACTIONS(539),
    [anon_sym_begemph] = ACTIONS(541),
    [anon_sym_endemph] = ACTIONS(541),
    [anon_sym_noemphchars] = ACTIONS(539),
    [anon_sym_emphletter] = ACTIONS(539),
    [anon_sym_begemphword] = ACTIONS(539),
    [anon_sym_endemphword] = ACTIONS(539),
    [anon_sym_emphmodechars] = ACTIONS(539),
    [anon_sym_begemphphrase] = ACTIONS(539),
    [anon_sym_endemphphrase] = ACTIONS(539),
    [anon_sym_lenemphphrase] = ACTIONS(539),
    [anon_sym_decpoint] = ACTIONS(539),
    [anon_sym_hyphen] = ACTIONS(539),
    [sym_capsnocont] = ACTIONS(539),
    [anon_sym_compbrl] = ACTIONS(539),
    [anon_sym_comp6] = ACTIONS(539),
    [anon_sym_nocont] = ACTIONS(541),
    [anon_sym_replace] = ACTIONS(539),
    [anon_sym_always] = ACTIONS(539),
    [anon_sym_repeated] = ACTIONS(539),
    [anon_sym_repword] = ACTIONS(539),
    [anon_sym_rependword] = ACTIONS(539),
    [anon_sym_largesign] = ACTIONS(539),
    [anon_sym_word] = ACTIONS(539),
    [anon_sym_syllable] = ACTIONS(539),
    [anon_sym_joinword] = ACTIONS(539),
    [anon_sym_lowword] = ACTIONS(539),
    [anon_sym_contraction] = ACTIONS(539),
    [anon_sym_sufword] = ACTIONS(539),
    [anon_sym_prfword] = ACTIONS(539),
    [anon_sym_begword] = ACTIONS(539),
    [anon_sym_begmidword] = ACTIONS(539),
    [anon_sym_midword] = ACTIONS(539),
    [anon_sym_midendword] = ACTIONS(539),
    [anon_sym_endword] = ACTIONS(539),
    [anon_sym_partword] = ACTIONS(539),
    [anon_sym_exactdots] = ACTIONS(539),
    [anon_sym_prepunc] = ACTIONS(539),
    [anon_sym_postpunc] = ACTIONS(539),
    [anon_sym_begnum] = ACTIONS(539),
    [anon_sym_midnum] = ACTIONS(539),
    [anon_sym_endnum] = ACTIONS(539),
    [anon_sym_joinnum] = ACTIONS(539),
    [anon_sym_begcomp] = ACTIONS(539),
    [anon_sym_endcomp] = ACTIONS(539),
    [anon_sym_attribute] = ACTIONS(539),
    [anon_sym_swapcd] = ACTIONS(539),
    [anon_sym_swapdd] = ACTIONS(539),
    [anon_sym_swapcc] = ACTIONS(539),
    [anon_sym_context] = ACTIONS(539),
    [anon_sym_pass2] = ACTIONS(539),
    [anon_sym_pass3] = ACTIONS(539),
    [anon_sym_pass4] = ACTIONS(539),
    [anon_sym_correct] = ACTIONS(539),
    [anon_sym_match] = ACTIONS(539),
    [anon_sym_empmatchbefore] = ACTIONS(539),
    [anon_sym_empmatchafter] = ACTIONS(539),
    [anon_sym_literal] = ACTIONS(539),
    [sym_before] = ACTIONS(539),
    [sym_after] = ACTIONS(539),
    [sym_noback] = ACTIONS(539),
    [sym_nofor] = ACTIONS(539),
    [sym_nocross] = ACTIONS(539),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 49,
    ACTIONS(205), 1,
      anon_sym_empmatchbefore,
    ACTIONS(207), 1,
      anon_sym_empmatchafter,
    ACTIONS(543), 1,
      anon_sym_display,
    ACTIONS(545), 1,
      anon_sym_multind,
    ACTIONS(547), 1,
      anon_sym_space,
    ACTIONS(549), 1,
      anon_sym_punctuation,
    ACTIONS(551), 1,
      anon_sym_letter,
    ACTIONS(553), 1,
      anon_sym_lowercase,
    ACTIONS(555), 1,
      anon_sym_uppercase,
    ACTIONS(557), 1,
      anon_sym_sign,
    ACTIONS(559), 1,
      anon_sym_math,
    ACTIONS(561), 1,
      anon_sym_modeletter,
    ACTIONS(563), 1,
      anon_sym_capsletter,
    ACTIONS(565), 1,
      anon_sym_begmodeword,
    ACTIONS(567), 1,
      anon_sym_begcapsword,
    ACTIONS(569), 1,
      anon_sym_endcapsword,
    ACTIONS(571), 1,
      anon_sym_begemph,
    ACTIONS(573), 1,
      anon_sym_endemph,
    ACTIONS(575), 1,
      anon_sym_hyphen,
    ACTIONS(577), 1,
      anon_sym_compbrl,
    ACTIONS(579), 1,
      anon_sym_always,
    ACTIONS(581), 1,
      anon_sym_repeated,
    ACTIONS(583), 1,
      anon_sym_word,
    ACTIONS(585), 1,
      anon_sym_lowword,
    ACTIONS(587), 1,
      anon_sym_sufword,
    ACTIONS(589), 1,
      anon_sym_prfword,
    ACTIONS(591), 1,
      anon_sym_begword,
    ACTIONS(593), 1,
      anon_sym_begmidword,
    ACTIONS(595), 1,
      anon_sym_midword,
    ACTIONS(597), 1,
      anon_sym_midendword,
    ACTIONS(599), 1,
      anon_sym_endword,
    ACTIONS(601), 1,
      anon_sym_partword,
    ACTIONS(603), 1,
      anon_sym_prepunc,
    ACTIONS(605), 1,
      anon_sym_postpunc,
    ACTIONS(607), 1,
      anon_sym_begnum,
    ACTIONS(609), 1,
      anon_sym_midnum,
    ACTIONS(611), 1,
      anon_sym_endnum,
    ACTIONS(613), 1,
      anon_sym_joinnum,
    ACTIONS(615), 1,
      anon_sym_begcomp,
    ACTIONS(617), 1,
      anon_sym_endcomp,
    ACTIONS(619), 1,
      anon_sym_context,
    ACTIONS(621), 1,
      anon_sym_pass2,
    ACTIONS(623), 1,
      anon_sym_pass3,
    ACTIONS(625), 1,
      anon_sym_pass4,
    ACTIONS(627), 1,
      anon_sym_correct,
    ACTIONS(629), 1,
      anon_sym_match,
    STATE(595), 1,
      sym_with_match,
    ACTIONS(211), 2,
      sym_before,
      sym_after,
    STATE(9), 2,
      sym_with_class,
      aux_sym_always_repeat1,
  [150] = 2,
    ACTIONS(633), 1,
      sym_nocross,
    ACTIONS(631), 48,
      anon_sym_display,
      anon_sym_multind,
      anon_sym_space,
      anon_sym_punctuation,
      anon_sym_letter,
      anon_sym_lowercase,
      anon_sym_uppercase,
      anon_sym_sign,
      anon_sym_math,
      anon_sym_modeletter,
      anon_sym_capsletter,
      anon_sym_begmodeword,
      anon_sym_begcapsword,
      anon_sym_endcapsword,
      anon_sym_begemph,
      anon_sym_endemph,
      anon_sym_hyphen,
      anon_sym_compbrl,
      anon_sym_always,
      anon_sym_repeated,
      anon_sym_word,
      anon_sym_lowword,
      anon_sym_sufword,
      anon_sym_prfword,
      anon_sym_begword,
      anon_sym_begmidword,
      anon_sym_midword,
      anon_sym_midendword,
      anon_sym_endword,
      anon_sym_partword,
      anon_sym_prepunc,
      anon_sym_postpunc,
      anon_sym_begnum,
      anon_sym_midnum,
      anon_sym_endnum,
      anon_sym_joinnum,
      anon_sym_begcomp,
      anon_sym_endcomp,
      anon_sym_context,
      anon_sym_pass2,
      anon_sym_pass3,
      anon_sym_pass4,
      anon_sym_correct,
      anon_sym_match,
      anon_sym_empmatchbefore,
      anon_sym_empmatchafter,
      sym_before,
      sym_after,
  [204] = 1,
    ACTIONS(631), 48,
      anon_sym_display,
      anon_sym_multind,
      anon_sym_space,
      anon_sym_punctuation,
      anon_sym_letter,
      anon_sym_lowercase,
      anon_sym_uppercase,
      anon_sym_sign,
      anon_sym_math,
      anon_sym_modeletter,
      anon_sym_capsletter,
      anon_sym_begmodeword,
      anon_sym_begcapsword,
      anon_sym_endcapsword,
      anon_sym_begemph,
      anon_sym_endemph,
      anon_sym_hyphen,
      anon_sym_compbrl,
      anon_sym_always,
      anon_sym_repeated,
      anon_sym_word,
      anon_sym_lowword,
      anon_sym_sufword,
      anon_sym_prfword,
      anon_sym_begword,
      anon_sym_begmidword,
      anon_sym_midword,
      anon_sym_midendword,
      anon_sym_endword,
      anon_sym_partword,
      anon_sym_prepunc,
      anon_sym_postpunc,
      anon_sym_begnum,
      anon_sym_midnum,
      anon_sym_endnum,
      anon_sym_joinnum,
      anon_sym_begcomp,
      anon_sym_endcomp,
      anon_sym_context,
      anon_sym_pass2,
      anon_sym_pass3,
      anon_sym_pass4,
      anon_sym_correct,
      anon_sym_match,
      anon_sym_empmatchbefore,
      anon_sym_empmatchafter,
      sym_before,
      sym_after,
  [255] = 1,
    ACTIONS(635), 48,
      anon_sym_display,
      anon_sym_multind,
      anon_sym_space,
      anon_sym_punctuation,
      anon_sym_letter,
      anon_sym_lowercase,
      anon_sym_uppercase,
      anon_sym_sign,
      anon_sym_math,
      anon_sym_modeletter,
      anon_sym_capsletter,
      anon_sym_begmodeword,
      anon_sym_begcapsword,
      anon_sym_endcapsword,
      anon_sym_begemph,
      anon_sym_endemph,
      anon_sym_hyphen,
      anon_sym_compbrl,
      anon_sym_always,
      anon_sym_repeated,
      anon_sym_word,
      anon_sym_lowword,
      anon_sym_sufword,
      anon_sym_prfword,
      anon_sym_begword,
      anon_sym_begmidword,
      anon_sym_midword,
      anon_sym_midendword,
      anon_sym_endword,
      anon_sym_partword,
      anon_sym_prepunc,
      anon_sym_postpunc,
      anon_sym_begnum,
      anon_sym_midnum,
      anon_sym_endnum,
      anon_sym_joinnum,
      anon_sym_begcomp,
      anon_sym_endcomp,
      anon_sym_context,
      anon_sym_pass2,
      anon_sym_pass3,
      anon_sym_pass4,
      anon_sym_correct,
      anon_sym_match,
      anon_sym_empmatchbefore,
      anon_sym_empmatchafter,
      sym_before,
      sym_after,
  [306] = 15,
    ACTIONS(205), 1,
      anon_sym_empmatchbefore,
    ACTIONS(207), 1,
      anon_sym_empmatchafter,
    ACTIONS(637), 1,
      anon_sym_always,
    ACTIONS(639), 1,
      anon_sym_word,
    ACTIONS(641), 1,
      anon_sym_sufword,
    ACTIONS(643), 1,
      anon_sym_begword,
    ACTIONS(645), 1,
      anon_sym_begmidword,
    ACTIONS(647), 1,
      anon_sym_midword,
    ACTIONS(649), 1,
      anon_sym_midendword,
    ACTIONS(651), 1,
      anon_sym_endword,
    ACTIONS(653), 1,
      anon_sym_partword,
    ACTIONS(655), 1,
      anon_sym_match,
    STATE(434), 1,
      sym_with_match,
    ACTIONS(211), 2,
      sym_before,
      sym_after,
    STATE(11), 2,
      sym_with_class,
      aux_sym_always_repeat1,
  [354] = 15,
    ACTIONS(205), 1,
      anon_sym_empmatchbefore,
    ACTIONS(207), 1,
      anon_sym_empmatchafter,
    ACTIONS(579), 1,
      anon_sym_always,
    ACTIONS(583), 1,
      anon_sym_word,
    ACTIONS(587), 1,
      anon_sym_sufword,
    ACTIONS(591), 1,
      anon_sym_begword,
    ACTIONS(593), 1,
      anon_sym_begmidword,
    ACTIONS(595), 1,
      anon_sym_midword,
    ACTIONS(597), 1,
      anon_sym_midendword,
    ACTIONS(599), 1,
      anon_sym_endword,
    ACTIONS(601), 1,
      anon_sym_partword,
    ACTIONS(629), 1,
      anon_sym_match,
    STATE(595), 1,
      sym_with_match,
    ACTIONS(211), 2,
      sym_before,
      sym_after,
    STATE(11), 2,
      sym_with_class,
      aux_sym_always_repeat1,
  [402] = 3,
    ACTIONS(659), 2,
      sym_before,
      sym_after,
    STATE(11), 2,
      sym_with_class,
      aux_sym_always_repeat1,
    ACTIONS(657), 12,
      anon_sym_always,
      anon_sym_word,
      anon_sym_sufword,
      anon_sym_begword,
      anon_sym_begmidword,
      anon_sym_midword,
      anon_sym_midendword,
      anon_sym_endword,
      anon_sym_partword,
      anon_sym_match,
      anon_sym_empmatchbefore,
      anon_sym_empmatchafter,
  [425] = 1,
    ACTIONS(662), 14,
      anon_sym_always,
      anon_sym_word,
      anon_sym_sufword,
      anon_sym_begword,
      anon_sym_begmidword,
      anon_sym_midword,
      anon_sym_midendword,
      anon_sym_endword,
      anon_sym_partword,
      anon_sym_match,
      anon_sym_empmatchbefore,
      anon_sym_empmatchafter,
      sym_before,
      sym_after,
  [442] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(583), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [466] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(575), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [490] = 5,
    ACTIONS(672), 1,
      anon_sym_BSLASHx,
    ACTIONS(674), 1,
      aux_sym_char_token1,
    STATE(160), 1,
      sym_char,
    STATE(129), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(670), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [514] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(514), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [538] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(582), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [562] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(572), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [586] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(513), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [610] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(574), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [634] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(512), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [658] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(511), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [682] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(568), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [706] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(571), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [730] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(576), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [754] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(510), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [778] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(516), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [802] = 5,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(668), 1,
      aux_sym_char_token1,
    STATE(515), 1,
      sym_char,
    STATE(584), 2,
      sym_esc_seq,
      sym_hex_char,
    ACTIONS(664), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [826] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(273), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [846] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(443), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [866] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(672), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [886] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(671), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [906] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(670), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [926] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(669), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [946] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(629), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [966] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(622), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [986] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(620), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1006] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(242), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1026] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(265), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1046] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(276), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1066] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(279), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1086] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(567), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1106] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(208), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1126] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(543), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1146] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(542), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1166] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(541), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1186] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(540), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1206] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(539), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1226] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(538), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1246] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(537), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1266] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(536), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1286] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(535), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1306] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(534), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1326] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(533), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1346] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(532), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1366] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(531), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1386] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(530), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1406] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(529), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1426] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(528), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1446] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(527), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1466] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(526), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1486] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(162), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1506] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(524), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1526] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(508), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1546] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(766), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1566] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(674), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1586] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(675), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1606] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(676), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1626] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(677), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1646] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(363), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1666] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(139), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1686] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(365), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1706] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(364), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1726] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(573), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1746] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(420), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1766] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(421), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1786] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(422), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1806] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(673), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1826] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(453), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1846] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(464), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1866] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(468), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1886] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(470), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1906] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(475), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1926] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(476), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1946] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(479), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1966] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(140), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [1986] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(480), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2006] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(481), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2026] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(482), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2046] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(483), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2066] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(484), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2086] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(485), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2106] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(486), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2126] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(487), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2146] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(492), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2166] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(142), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2186] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(143), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2206] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(498), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2226] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(146), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2246] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(499), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2266] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(500), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2286] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(167), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2306] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(168), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2326] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(169), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2346] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(203), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2366] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(207), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2386] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(211), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2406] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(212), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2426] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(750), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2446] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(213), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2466] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(591), 1,
      sym_esc_seq,
    STATE(689), 1,
      sym_chars,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2486] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(206), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2506] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(156), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2526] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(217), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2546] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(218), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2566] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(219), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2586] = 4,
    ACTIONS(680), 1,
      aux_sym_multipass_test_token1,
    STATE(588), 1,
      sym_chars,
    STATE(591), 1,
      sym_esc_seq,
    ACTIONS(682), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2606] = 4,
    ACTIONS(676), 1,
      aux_sym_multipass_test_token1,
    STATE(131), 1,
      sym_esc_seq,
    STATE(226), 1,
      sym_chars,
    ACTIONS(678), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [2626] = 3,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_swapcd_repeat1,
    ACTIONS(686), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2639] = 3,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_swapcd_repeat1,
    ACTIONS(688), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2652] = 3,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_swapcd_repeat1,
    ACTIONS(690), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2665] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_swapcd_repeat1,
    ACTIONS(695), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2678] = 3,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_swapcd_repeat1,
    ACTIONS(697), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2691] = 3,
    ACTIONS(701), 1,
      sym__sp,
    STATE(286), 1,
      sym_end_comment,
    ACTIONS(699), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
  [2703] = 1,
    ACTIONS(695), 5,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2711] = 1,
    ACTIONS(703), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2718] = 1,
    ACTIONS(705), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2725] = 1,
    ACTIONS(707), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2732] = 1,
    ACTIONS(709), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2739] = 1,
    ACTIONS(711), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2746] = 1,
    ACTIONS(713), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2753] = 1,
    ACTIONS(715), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2760] = 1,
    ACTIONS(717), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2767] = 1,
    ACTIONS(719), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2774] = 1,
    ACTIONS(721), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2781] = 1,
    ACTIONS(723), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2788] = 1,
    ACTIONS(725), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2795] = 1,
    ACTIONS(727), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2802] = 1,
    ACTIONS(729), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2809] = 1,
    ACTIONS(731), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2816] = 1,
    ACTIONS(733), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2823] = 2,
    ACTIONS(737), 1,
      sym__sp,
    ACTIONS(735), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
  [2832] = 1,
    ACTIONS(739), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2839] = 1,
    ACTIONS(741), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2846] = 1,
    ACTIONS(743), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2853] = 1,
    ACTIONS(745), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2860] = 1,
    ACTIONS(747), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2867] = 2,
    STATE(4), 1,
      sym__newline,
    ACTIONS(749), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
  [2876] = 1,
    ACTIONS(751), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2883] = 1,
    ACTIONS(753), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2890] = 1,
    ACTIONS(755), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2897] = 1,
    ACTIONS(757), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2904] = 1,
    ACTIONS(759), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2911] = 1,
    ACTIONS(761), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2918] = 1,
    ACTIONS(763), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2925] = 1,
    ACTIONS(765), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2932] = 1,
    ACTIONS(767), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2939] = 1,
    ACTIONS(769), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2946] = 1,
    ACTIONS(771), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2953] = 1,
    ACTIONS(773), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2960] = 1,
    ACTIONS(775), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2967] = 1,
    ACTIONS(777), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2974] = 1,
    ACTIONS(779), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2981] = 1,
    ACTIONS(781), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2988] = 1,
    ACTIONS(783), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [2995] = 1,
    ACTIONS(785), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3002] = 1,
    ACTIONS(787), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3009] = 1,
    ACTIONS(789), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3016] = 1,
    ACTIONS(791), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3023] = 1,
    ACTIONS(793), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3030] = 1,
    ACTIONS(795), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3037] = 1,
    ACTIONS(797), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3044] = 1,
    ACTIONS(799), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3051] = 1,
    ACTIONS(801), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3058] = 1,
    ACTIONS(803), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3065] = 1,
    ACTIONS(805), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3072] = 1,
    ACTIONS(807), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3079] = 1,
    ACTIONS(809), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3086] = 1,
    ACTIONS(811), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3093] = 1,
    ACTIONS(813), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3100] = 1,
    ACTIONS(815), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3107] = 1,
    ACTIONS(817), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3114] = 1,
    ACTIONS(819), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3121] = 1,
    ACTIONS(821), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3128] = 1,
    ACTIONS(823), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3135] = 1,
    ACTIONS(825), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3142] = 1,
    ACTIONS(827), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3149] = 1,
    ACTIONS(829), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3156] = 1,
    ACTIONS(831), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3163] = 1,
    ACTIONS(833), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3170] = 1,
    ACTIONS(835), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3177] = 1,
    ACTIONS(837), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3184] = 1,
    ACTIONS(839), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3191] = 1,
    ACTIONS(841), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3198] = 1,
    ACTIONS(843), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3205] = 1,
    ACTIONS(845), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3212] = 1,
    ACTIONS(847), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3219] = 1,
    ACTIONS(849), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3226] = 1,
    ACTIONS(851), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3233] = 1,
    ACTIONS(853), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3240] = 1,
    ACTIONS(855), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3247] = 1,
    ACTIONS(857), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3254] = 1,
    ACTIONS(859), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3261] = 1,
    ACTIONS(861), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3268] = 1,
    ACTIONS(863), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3275] = 1,
    ACTIONS(865), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3282] = 1,
    ACTIONS(867), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3289] = 1,
    ACTIONS(869), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3296] = 1,
    ACTIONS(871), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3303] = 1,
    ACTIONS(873), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3310] = 1,
    ACTIONS(875), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3317] = 1,
    ACTIONS(877), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3324] = 1,
    ACTIONS(879), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3331] = 1,
    ACTIONS(881), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3338] = 1,
    ACTIONS(883), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3345] = 1,
    ACTIONS(885), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3352] = 1,
    ACTIONS(887), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3359] = 1,
    ACTIONS(889), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3366] = 1,
    ACTIONS(891), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3373] = 1,
    ACTIONS(893), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3380] = 1,
    ACTIONS(895), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3387] = 1,
    ACTIONS(897), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3394] = 1,
    ACTIONS(899), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3401] = 1,
    ACTIONS(901), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3408] = 1,
    ACTIONS(903), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3415] = 1,
    ACTIONS(905), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3422] = 1,
    ACTIONS(907), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3429] = 1,
    ACTIONS(909), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3436] = 1,
    ACTIONS(911), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3443] = 1,
    ACTIONS(913), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3450] = 4,
    ACTIONS(666), 1,
      anon_sym_BSLASHx,
    ACTIONS(915), 1,
      aux_sym_number_token1,
    STATE(580), 1,
      sym_number,
    STATE(581), 1,
      sym_hex_char,
  [3463] = 1,
    ACTIONS(917), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3470] = 1,
    ACTIONS(919), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3477] = 1,
    ACTIONS(921), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3484] = 1,
    ACTIONS(923), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3491] = 1,
    ACTIONS(925), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3498] = 1,
    ACTIONS(927), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3505] = 1,
    ACTIONS(929), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3512] = 1,
    ACTIONS(931), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3519] = 1,
    ACTIONS(933), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3526] = 1,
    ACTIONS(935), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3533] = 1,
    ACTIONS(937), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3540] = 1,
    ACTIONS(939), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3547] = 1,
    ACTIONS(941), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3554] = 1,
    ACTIONS(943), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3561] = 1,
    ACTIONS(945), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3568] = 1,
    ACTIONS(947), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3575] = 1,
    ACTIONS(949), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3582] = 1,
    ACTIONS(951), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3589] = 1,
    ACTIONS(953), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3596] = 1,
    ACTIONS(955), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3603] = 1,
    ACTIONS(957), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3610] = 1,
    ACTIONS(959), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3617] = 1,
    ACTIONS(961), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3624] = 1,
    ACTIONS(963), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3631] = 1,
    ACTIONS(965), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3638] = 1,
    ACTIONS(967), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3645] = 1,
    ACTIONS(969), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3652] = 1,
    ACTIONS(971), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3659] = 1,
    ACTIONS(973), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3666] = 1,
    ACTIONS(975), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3673] = 1,
    ACTIONS(977), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3680] = 1,
    ACTIONS(979), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3687] = 1,
    ACTIONS(981), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3694] = 1,
    ACTIONS(983), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3701] = 1,
    ACTIONS(985), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3708] = 1,
    ACTIONS(987), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3715] = 1,
    ACTIONS(989), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3722] = 1,
    ACTIONS(991), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3729] = 1,
    ACTIONS(993), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3736] = 1,
    ACTIONS(995), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3743] = 1,
    ACTIONS(997), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3750] = 1,
    ACTIONS(999), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3757] = 1,
    ACTIONS(1001), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3764] = 1,
    ACTIONS(1003), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3771] = 1,
    ACTIONS(1005), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3778] = 1,
    ACTIONS(1007), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3785] = 1,
    ACTIONS(1009), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3792] = 1,
    ACTIONS(1011), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3799] = 1,
    ACTIONS(1013), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3806] = 1,
    ACTIONS(1015), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3813] = 1,
    ACTIONS(1017), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3820] = 1,
    ACTIONS(1019), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3827] = 1,
    ACTIONS(1021), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3834] = 1,
    ACTIONS(1023), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__sp,
  [3841] = 1,
    ACTIONS(1025), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
  [3847] = 1,
    ACTIONS(1027), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
  [3853] = 1,
    ACTIONS(1029), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
  [3859] = 1,
    ACTIONS(1031), 2,
      sym_equal,
      sym_dots,
  [3864] = 1,
    ACTIONS(1033), 2,
      sym_equal,
      sym_dots,
  [3869] = 1,
    ACTIONS(1035), 2,
      sym_equal,
      sym_dots,
  [3874] = 1,
    ACTIONS(1037), 2,
      sym_equal,
      sym_dots,
  [3879] = 1,
    ACTIONS(1039), 2,
      sym_equal,
      sym_dots,
  [3884] = 1,
    ACTIONS(1041), 2,
      sym_equal,
      sym_dots,
  [3889] = 1,
    ACTIONS(1043), 2,
      sym_equal,
      sym_dots,
  [3894] = 1,
    ACTIONS(1045), 2,
      sym_equal,
      sym_dots,
  [3899] = 1,
    ACTIONS(1047), 2,
      sym_equal,
      sym_dots,
  [3904] = 1,
    ACTIONS(1049), 2,
      sym_equal,
      sym_dots,
  [3909] = 1,
    ACTIONS(1051), 2,
      sym_equal,
      sym_dots,
  [3914] = 1,
    ACTIONS(1053), 2,
      sym_equal,
      sym_dots,
  [3919] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(174), 1,
      sym_multipass_action,
  [3926] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(173), 1,
      sym_multipass_action,
  [3933] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(172), 1,
      sym_multipass_action,
  [3940] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(171), 1,
      sym_multipass_action,
  [3947] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(170), 1,
      sym_multipass_action,
  [3954] = 2,
    ACTIONS(1057), 1,
      aux_sym_multipass_test_token1,
    STATE(737), 1,
      sym_pre_pattern,
  [3961] = 2,
    ACTIONS(1059), 1,
      aux_sym_multipass_test_token1,
    STATE(748), 1,
      sym_post_pattern,
  [3968] = 2,
    ACTIONS(1061), 1,
      anon_sym_match,
    ACTIONS(1063), 1,
      anon_sym_empmatchbefore,
  [3975] = 2,
    ACTIONS(1061), 1,
      anon_sym_match,
    ACTIONS(1063), 1,
      anon_sym_empmatchafter,
  [3982] = 2,
    ACTIONS(1057), 1,
      aux_sym_multipass_test_token1,
    STATE(377), 1,
      sym_pre_pattern,
  [3989] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(375), 1,
      sym_multipass_test,
  [3996] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(374), 1,
      sym_multipass_test,
  [4003] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(373), 1,
      sym_multipass_test,
  [4010] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(372), 1,
      sym_multipass_test,
  [4017] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(371), 1,
      sym_multipass_test,
  [4024] = 1,
    ACTIONS(1067), 2,
      sym_ascii_chars,
      sym_oct_digit,
  [4029] = 1,
    ACTIONS(1069), 2,
      sym_equal,
      sym_dots,
  [4034] = 1,
    ACTIONS(1071), 2,
      sym_equal,
      sym_dots,
  [4039] = 1,
    ACTIONS(1073), 2,
      sym_equal,
      sym_dots,
  [4044] = 1,
    ACTIONS(1075), 2,
      sym_equal,
      sym_dots,
  [4049] = 1,
    ACTIONS(1077), 2,
      sym_equal,
      sym_dots,
  [4054] = 2,
    ACTIONS(1057), 1,
      aux_sym_multipass_test_token1,
    STATE(668), 1,
      sym_pre_pattern,
  [4061] = 1,
    ACTIONS(1079), 2,
      sym_equal,
      sym_dots,
  [4066] = 1,
    ACTIONS(1081), 2,
      sym_equal,
      sym_dots,
  [4071] = 1,
    ACTIONS(1083), 2,
      sym_equal,
      sym_dots,
  [4076] = 1,
    ACTIONS(1085), 2,
      sym_equal,
      sym_dots,
  [4081] = 2,
    ACTIONS(1059), 1,
      aux_sym_multipass_test_token1,
    STATE(764), 1,
      sym_post_pattern,
  [4088] = 1,
    ACTIONS(1087), 2,
      sym_equal,
      sym_dots,
  [4093] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(236), 1,
      sym_multipass_action,
  [4100] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(237), 1,
      sym_multipass_action,
  [4107] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(238), 1,
      sym_multipass_action,
  [4114] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(239), 1,
      sym_multipass_action,
  [4121] = 2,
    ACTIONS(1055), 1,
      aux_sym_multipass_test_token1,
    STATE(240), 1,
      sym_multipass_action,
  [4128] = 1,
    ACTIONS(1089), 2,
      sym_equal,
      sym_dots,
  [4133] = 2,
    ACTIONS(1059), 1,
      aux_sym_multipass_test_token1,
    STATE(770), 1,
      sym_post_pattern,
  [4140] = 1,
    ACTIONS(1091), 2,
      sym_before,
      sym_after,
  [4145] = 1,
    ACTIONS(1093), 2,
      sym_equal,
      sym_dots,
  [4150] = 1,
    ACTIONS(1095), 2,
      sym_equal,
      sym_dots,
  [4155] = 1,
    ACTIONS(1097), 2,
      sym_equal,
      sym_dots,
  [4160] = 1,
    ACTIONS(1099), 2,
      sym_equal,
      sym_dots,
  [4165] = 1,
    ACTIONS(1101), 2,
      sym_equal,
      sym_dots,
  [4170] = 1,
    ACTIONS(1103), 2,
      sym_equal,
      sym_dots,
  [4175] = 1,
    ACTIONS(1105), 2,
      sym_equal,
      sym_dots,
  [4180] = 1,
    ACTIONS(1107), 2,
      sym_equal,
      sym_dots,
  [4185] = 1,
    ACTIONS(1109), 2,
      sym_equal,
      sym_dots,
  [4190] = 2,
    ACTIONS(1059), 1,
      aux_sym_multipass_test_token1,
    STATE(774), 1,
      sym_post_pattern,
  [4197] = 1,
    ACTIONS(1111), 2,
      sym_equal,
      sym_dots,
  [4202] = 1,
    ACTIONS(1113), 2,
      sym_equal,
      sym_dots,
  [4207] = 1,
    ACTIONS(1115), 2,
      sym_equal,
      sym_dots,
  [4212] = 1,
    ACTIONS(1117), 2,
      sym_equal,
      sym_dots,
  [4217] = 1,
    ACTIONS(1119), 2,
      sym_before,
      sym_after,
  [4222] = 1,
    ACTIONS(1121), 2,
      sym_before,
      sym_after,
  [4227] = 1,
    ACTIONS(1123), 2,
      sym_equal,
      sym_dots,
  [4232] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(550), 1,
      sym_multipass_test,
  [4239] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(549), 1,
      sym_multipass_test,
  [4246] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(548), 1,
      sym_multipass_test,
  [4253] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(547), 1,
      sym_multipass_test,
  [4260] = 2,
    ACTIONS(1065), 1,
      aux_sym_multipass_test_token1,
    STATE(546), 1,
      sym_multipass_test,
  [4267] = 2,
    ACTIONS(1057), 1,
      aux_sym_multipass_test_token1,
    STATE(507), 1,
      sym_pre_pattern,
  [4274] = 1,
    ACTIONS(1125), 2,
      sym_equal,
      sym_dots,
  [4279] = 1,
    ACTIONS(1127), 2,
      sym_equal,
      sym_dots,
  [4284] = 1,
    ACTIONS(1129), 1,
      sym__sp,
  [4288] = 1,
    ACTIONS(1131), 1,
      sym__sp,
  [4292] = 1,
    ACTIONS(1133), 1,
      sym__sp,
  [4296] = 1,
    ACTIONS(1135), 1,
      sym__sp,
  [4300] = 1,
    ACTIONS(1137), 1,
      sym__sp,
  [4304] = 1,
    ACTIONS(1139), 1,
      sym__sp,
  [4308] = 1,
    ACTIONS(1141), 1,
      sym__sp,
  [4312] = 1,
    ACTIONS(1143), 1,
      sym__sp,
  [4316] = 1,
    ACTIONS(1145), 1,
      sym__sp,
  [4320] = 1,
    ACTIONS(1147), 1,
      sym__sp,
  [4324] = 1,
    ACTIONS(1149), 1,
      sym__sp,
  [4328] = 1,
    ACTIONS(1151), 1,
      sym__sp,
  [4332] = 1,
    ACTIONS(1153), 1,
      sym__sp,
  [4336] = 1,
    ACTIONS(1155), 1,
      sym__sp,
  [4340] = 1,
    ACTIONS(1157), 1,
      sym__sp,
  [4344] = 1,
    ACTIONS(1159), 1,
      sym__sp,
  [4348] = 1,
    ACTIONS(1161), 1,
      sym__sp,
  [4352] = 1,
    ACTIONS(1163), 1,
      sym__sp,
  [4356] = 1,
    ACTIONS(1165), 1,
      sym__sp,
  [4360] = 1,
    ACTIONS(1167), 1,
      sym__sp,
  [4364] = 1,
    ACTIONS(1169), 1,
      sym_dots,
  [4368] = 1,
    ACTIONS(1171), 1,
      sym__sp,
  [4372] = 1,
    ACTIONS(1173), 1,
      sym__sp,
  [4376] = 1,
    ACTIONS(1175), 1,
      sym__sp,
  [4380] = 1,
    ACTIONS(1177), 1,
      sym__sp,
  [4384] = 1,
    ACTIONS(1179), 1,
      sym__sp,
  [4388] = 1,
    ACTIONS(1181), 1,
      sym__sp,
  [4392] = 1,
    ACTIONS(1183), 1,
      sym__sp,
  [4396] = 1,
    ACTIONS(1185), 1,
      sym_ascii_chars,
  [4400] = 1,
    ACTIONS(1187), 1,
      sym_dots,
  [4404] = 1,
    ACTIONS(1189), 1,
      sym_ascii_chars,
  [4408] = 1,
    ACTIONS(1191), 1,
      sym_dots,
  [4412] = 1,
    ACTIONS(1193), 1,
      sym_dots,
  [4416] = 1,
    ACTIONS(1195), 1,
      sym_ascii_chars,
  [4420] = 1,
    ACTIONS(1197), 1,
      sym_ascii_chars,
  [4424] = 1,
    ACTIONS(1199), 1,
      sym__sp,
  [4428] = 1,
    ACTIONS(1201), 1,
      sym__sp,
  [4432] = 1,
    ACTIONS(1203), 1,
      sym__sp,
  [4436] = 1,
    ACTIONS(1205), 1,
      sym__sp,
  [4440] = 1,
    ACTIONS(1207), 1,
      sym__sp,
  [4444] = 1,
    ACTIONS(1209), 1,
      sym__sp,
  [4448] = 1,
    ACTIONS(1211), 1,
      sym__sp,
  [4452] = 1,
    ACTIONS(1213), 1,
      sym__sp,
  [4456] = 1,
    ACTIONS(1215), 1,
      sym__sp,
  [4460] = 1,
    ACTIONS(1217), 1,
      sym__sp,
  [4464] = 1,
    ACTIONS(1219), 1,
      sym__sp,
  [4468] = 1,
    ACTIONS(1221), 1,
      sym__sp,
  [4472] = 1,
    ACTIONS(1223), 1,
      sym__sp,
  [4476] = 1,
    ACTIONS(1225), 1,
      sym__sp,
  [4480] = 1,
    ACTIONS(1227), 1,
      sym__sp,
  [4484] = 1,
    ACTIONS(1229), 1,
      sym__sp,
  [4488] = 1,
    ACTIONS(1231), 1,
      sym__sp,
  [4492] = 1,
    ACTIONS(1233), 1,
      sym__sp,
  [4496] = 1,
    ACTIONS(1235), 1,
      sym__sp,
  [4500] = 1,
    ACTIONS(1237), 1,
      sym__sp,
  [4504] = 1,
    ACTIONS(1239), 1,
      sym_dots,
  [4508] = 1,
    ACTIONS(1241), 1,
      sym_dots,
  [4512] = 1,
    ACTIONS(1243), 1,
      sym__sp,
  [4516] = 1,
    ACTIONS(1245), 1,
      sym__sp,
  [4520] = 1,
    ACTIONS(1247), 1,
      sym__sp,
  [4524] = 1,
    ACTIONS(1249), 1,
      sym__sp,
  [4528] = 1,
    ACTIONS(1251), 1,
      sym_dots,
  [4532] = 1,
    ACTIONS(1253), 1,
      sym__sp,
  [4536] = 1,
    ACTIONS(1255), 1,
      sym__sp,
  [4540] = 1,
    ACTIONS(1257), 1,
      sym__sp,
  [4544] = 1,
    ACTIONS(1259), 1,
      sym__sp,
  [4548] = 1,
    ACTIONS(1261), 1,
      sym__sp,
  [4552] = 1,
    ACTIONS(1263), 1,
      sym__sp,
  [4556] = 1,
    ACTIONS(1265), 1,
      sym__sp,
  [4560] = 1,
    ACTIONS(1267), 1,
      sym__sp,
  [4564] = 1,
    ACTIONS(1269), 1,
      sym__sp,
  [4568] = 1,
    ACTIONS(1271), 1,
      sym__sp,
  [4572] = 1,
    ACTIONS(1273), 1,
      anon_sym_match,
  [4576] = 1,
    ACTIONS(1275), 1,
      sym_dots,
  [4580] = 1,
    ACTIONS(1277), 1,
      sym__sp,
  [4584] = 1,
    ACTIONS(1279), 1,
      sym__sp,
  [4588] = 1,
    ACTIONS(1281), 1,
      sym_dots,
  [4592] = 1,
    ACTIONS(1283), 1,
      sym_dots,
  [4596] = 1,
    ACTIONS(1285), 1,
      sym_dots,
  [4600] = 1,
    ACTIONS(1287), 1,
      sym__sp,
  [4604] = 1,
    ACTIONS(1289), 1,
      sym__sp,
  [4608] = 1,
    ACTIONS(1291), 1,
      sym__sp,
  [4612] = 1,
    ACTIONS(1293), 1,
      sym_dots,
  [4616] = 1,
    ACTIONS(1295), 1,
      sym_dots,
  [4620] = 1,
    ACTIONS(1297), 1,
      sym_dots,
  [4624] = 1,
    ACTIONS(1299), 1,
      sym_dots,
  [4628] = 1,
    ACTIONS(1301), 1,
      sym_dots,
  [4632] = 1,
    ACTIONS(1303), 1,
      sym_dots,
  [4636] = 1,
    ACTIONS(1305), 1,
      sym_dots,
  [4640] = 1,
    ACTIONS(1307), 1,
      sym_dots,
  [4644] = 1,
    ACTIONS(1309), 1,
      sym_dots,
  [4648] = 1,
    ACTIONS(1311), 1,
      sym__sp,
  [4652] = 1,
    ACTIONS(1313), 1,
      sym_ascii_digit,
  [4656] = 1,
    ACTIONS(1315), 1,
      sym__sp,
  [4660] = 1,
    ACTIONS(1317), 1,
      sym_dots,
  [4664] = 1,
    ACTIONS(1319), 1,
      sym_dots,
  [4668] = 1,
    ACTIONS(1321), 1,
      sym__sp,
  [4672] = 1,
    ACTIONS(1323), 1,
      sym_dots,
  [4676] = 1,
    ACTIONS(1325), 1,
      sym_dots,
  [4680] = 1,
    ACTIONS(1327), 1,
      sym_dots,
  [4684] = 1,
    ACTIONS(1329), 1,
      sym__sp,
  [4688] = 1,
    ACTIONS(1331), 1,
      sym_dots,
  [4692] = 1,
    ACTIONS(1333), 1,
      sym__sp,
  [4696] = 1,
    ACTIONS(1335), 1,
      sym_ascii_digit,
  [4700] = 1,
    ACTIONS(1337), 1,
      sym_dots,
  [4704] = 1,
    ACTIONS(1339), 1,
      sym_dots,
  [4708] = 1,
    ACTIONS(1341), 1,
      sym__sp,
  [4712] = 1,
    ACTIONS(1343), 1,
      sym__sp,
  [4716] = 1,
    ACTIONS(1345), 1,
      sym__sp,
  [4720] = 1,
    ACTIONS(1347), 1,
      sym_dots,
  [4724] = 1,
    ACTIONS(1349), 1,
      sym_dots,
  [4728] = 1,
    ACTIONS(1351), 1,
      sym_dots,
  [4732] = 1,
    ACTIONS(1353), 1,
      sym_dots,
  [4736] = 1,
    ACTIONS(1355), 1,
      sym__sp,
  [4740] = 1,
    ACTIONS(1357), 1,
      sym__sp,
  [4744] = 1,
    ACTIONS(1359), 1,
      sym_dots,
  [4748] = 1,
    ACTIONS(1361), 1,
      sym_dots,
  [4752] = 1,
    ACTIONS(1363), 1,
      sym__sp,
  [4756] = 1,
    ACTIONS(1365), 1,
      sym__sp,
  [4760] = 1,
    ACTIONS(1367), 1,
      sym__sp,
  [4764] = 1,
    ACTIONS(1369), 1,
      sym__sp,
  [4768] = 1,
    ACTIONS(1371), 1,
      sym__sp,
  [4772] = 1,
    ACTIONS(1373), 1,
      sym__sp,
  [4776] = 1,
    ACTIONS(1375), 1,
      sym__sp,
  [4780] = 1,
    ACTIONS(1377), 1,
      sym__sp,
  [4784] = 1,
    ACTIONS(1379), 1,
      sym__sp,
  [4788] = 1,
    ACTIONS(1381), 1,
      sym_dots,
  [4792] = 1,
    ACTIONS(1383), 1,
      sym_dots,
  [4796] = 1,
    ACTIONS(1385), 1,
      sym_dots,
  [4800] = 1,
    ACTIONS(1387), 1,
      sym_dots,
  [4804] = 1,
    ACTIONS(1389), 1,
      sym__sp,
  [4808] = 1,
    ACTIONS(1391), 1,
      sym_dots,
  [4812] = 1,
    ACTIONS(1393), 1,
      sym__sp,
  [4816] = 1,
    ACTIONS(1395), 1,
      sym__sp,
  [4820] = 1,
    ACTIONS(1397), 1,
      sym_dots,
  [4824] = 1,
    ACTIONS(1399), 1,
      sym__sp,
  [4828] = 1,
    ACTIONS(1401), 1,
      sym__sp,
  [4832] = 1,
    ACTIONS(1403), 1,
      sym__sp,
  [4836] = 1,
    ACTIONS(1405), 1,
      sym__sp,
  [4840] = 1,
    ACTIONS(1407), 1,
      sym__sp,
  [4844] = 1,
    ACTIONS(1409), 1,
      sym__sp,
  [4848] = 1,
    ACTIONS(1411), 1,
      sym__sp,
  [4852] = 1,
    ACTIONS(1413), 1,
      anon_sym_match,
  [4856] = 1,
    ACTIONS(1415), 1,
      sym__sp,
  [4860] = 1,
    ACTIONS(1417), 1,
      sym__sp,
  [4864] = 1,
    ACTIONS(1419), 1,
      sym__sp,
  [4868] = 1,
    ACTIONS(1421), 1,
      sym__sp,
  [4872] = 1,
    ACTIONS(1423), 1,
      sym__sp,
  [4876] = 1,
    ACTIONS(1425), 1,
      sym__sp,
  [4880] = 1,
    ACTIONS(1427), 1,
      sym__sp,
  [4884] = 1,
    ACTIONS(1429), 1,
      sym__sp,
  [4888] = 1,
    ACTIONS(1431), 1,
      sym__sp,
  [4892] = 1,
    ACTIONS(1433), 1,
      sym__sp,
  [4896] = 1,
    ACTIONS(1435), 1,
      sym__sp,
  [4900] = 1,
    ACTIONS(1437), 1,
      sym__sp,
  [4904] = 1,
    ACTIONS(1439), 1,
      sym__sp,
  [4908] = 1,
    ACTIONS(1441), 1,
      sym__sp,
  [4912] = 1,
    ACTIONS(1443), 1,
      sym__sp,
  [4916] = 1,
    ACTIONS(1445), 1,
      sym__sp,
  [4920] = 1,
    ACTIONS(1447), 1,
      sym__sp,
  [4924] = 1,
    ACTIONS(1449), 1,
      sym__sp,
  [4928] = 1,
    ACTIONS(1451), 1,
      sym__sp,
  [4932] = 1,
    ACTIONS(1453), 1,
      sym__sp,
  [4936] = 1,
    ACTIONS(1455), 1,
      sym__sp,
  [4940] = 1,
    ACTIONS(1457), 1,
      sym__sp,
  [4944] = 1,
    ACTIONS(1459), 1,
      sym__sp,
  [4948] = 1,
    ACTIONS(1461), 1,
      sym__sp,
  [4952] = 1,
    ACTIONS(1463), 1,
      sym__sp,
  [4956] = 1,
    ACTIONS(1465), 1,
      sym__sp,
  [4960] = 1,
    ACTIONS(1467), 1,
      sym__sp,
  [4964] = 1,
    ACTIONS(1469), 1,
      sym__sp,
  [4968] = 1,
    ACTIONS(1471), 1,
      sym__sp,
  [4972] = 1,
    ACTIONS(1473), 1,
      sym__sp,
  [4976] = 1,
    ACTIONS(1475), 1,
      sym__sp,
  [4980] = 1,
    ACTIONS(1477), 1,
      sym__sp,
  [4984] = 1,
    ACTIONS(1479), 1,
      sym__sp,
  [4988] = 1,
    ACTIONS(1481), 1,
      sym__sp,
  [4992] = 1,
    ACTIONS(1483), 1,
      sym__sp,
  [4996] = 1,
    ACTIONS(1485), 1,
      sym__sp,
  [5000] = 1,
    ACTIONS(1487), 1,
      sym__sp,
  [5004] = 1,
    ACTIONS(1489), 1,
      sym__sp,
  [5008] = 1,
    ACTIONS(1491), 1,
      sym__sp,
  [5012] = 1,
    ACTIONS(1493), 1,
      sym__sp,
  [5016] = 1,
    ACTIONS(1495), 1,
      sym__sp,
  [5020] = 1,
    ACTIONS(1497), 1,
      sym__sp,
  [5024] = 1,
    ACTIONS(1499), 1,
      sym__sp,
  [5028] = 1,
    ACTIONS(1501), 1,
      sym__sp,
  [5032] = 1,
    ACTIONS(1503), 1,
      sym__sp,
  [5036] = 1,
    ACTIONS(1505), 1,
      sym__sp,
  [5040] = 1,
    ACTIONS(1507), 1,
      sym__sp,
  [5044] = 1,
    ACTIONS(1509), 1,
      sym__sp,
  [5048] = 1,
    ACTIONS(1511), 1,
      sym__sp,
  [5052] = 1,
    ACTIONS(1513), 1,
      sym__sp,
  [5056] = 1,
    ACTIONS(1515), 1,
      sym__sp,
  [5060] = 1,
    ACTIONS(1517), 1,
      sym__sp,
  [5064] = 1,
    ACTIONS(1519), 1,
      sym__sp,
  [5068] = 1,
    ACTIONS(1521), 1,
      sym__sp,
  [5072] = 1,
    ACTIONS(1523), 1,
      sym__sp,
  [5076] = 1,
    ACTIONS(1525), 1,
      sym__sp,
  [5080] = 1,
    ACTIONS(1527), 1,
      sym__sp,
  [5084] = 1,
    ACTIONS(1529), 1,
      sym__sp,
  [5088] = 1,
    ACTIONS(1531), 1,
      sym__sp,
  [5092] = 1,
    ACTIONS(1533), 1,
      sym__sp,
  [5096] = 1,
    ACTIONS(1535), 1,
      sym__sp,
  [5100] = 1,
    ACTIONS(1537), 1,
      sym__sp,
  [5104] = 1,
    ACTIONS(1539), 1,
      sym__sp,
  [5108] = 1,
    ACTIONS(1541), 1,
      sym__sp,
  [5112] = 1,
    ACTIONS(1543), 1,
      sym__sp,
  [5116] = 1,
    ACTIONS(1545), 1,
      sym__sp,
  [5120] = 1,
    ACTIONS(1547), 1,
      sym__sp,
  [5124] = 1,
    ACTIONS(1549), 1,
      sym__sp,
  [5128] = 1,
    ACTIONS(1551), 1,
      sym__sp,
  [5132] = 1,
    ACTIONS(1553), 1,
      sym__sp,
  [5136] = 1,
    ACTIONS(1555), 1,
      sym__sp,
  [5140] = 1,
    ACTIONS(1557), 1,
      sym__sp,
  [5144] = 1,
    ACTIONS(1559), 1,
      sym__sp,
  [5148] = 1,
    ACTIONS(1561), 1,
      sym__sp,
  [5152] = 1,
    ACTIONS(1563), 1,
      sym__sp,
  [5156] = 1,
    ACTIONS(1565), 1,
      sym__sp,
  [5160] = 1,
    ACTIONS(1567), 1,
      sym__sp,
  [5164] = 1,
    ACTIONS(1569), 1,
      sym__sp,
  [5168] = 1,
    ACTIONS(1571), 1,
      sym__sp,
  [5172] = 1,
    ACTIONS(1573), 1,
      sym__sp,
  [5176] = 1,
    ACTIONS(1575), 1,
      sym__sp,
  [5180] = 1,
    ACTIONS(1577), 1,
      aux_sym_hex_char_token1,
  [5184] = 1,
    ACTIONS(1579), 1,
      sym__sp,
  [5188] = 1,
    ACTIONS(1581), 1,
      sym__sp,
  [5192] = 1,
    ACTIONS(1583), 1,
      sym__sp,
  [5196] = 1,
    ACTIONS(1585), 1,
      sym__sp,
  [5200] = 1,
    ACTIONS(1587), 1,
      sym__sp,
  [5204] = 1,
    ACTIONS(1589), 1,
      sym__sp,
  [5208] = 1,
    ACTIONS(1591), 1,
      sym__sp,
  [5212] = 1,
    ACTIONS(1593), 1,
      sym__sp,
  [5216] = 1,
    ACTIONS(655), 1,
      anon_sym_match,
  [5220] = 1,
    ACTIONS(1595), 1,
      sym__sp,
  [5224] = 1,
    ACTIONS(1597), 1,
      sym__sp,
  [5228] = 1,
    ACTIONS(1599), 1,
      sym__sp,
  [5232] = 1,
    ACTIONS(1601), 1,
      anon_sym_COMMA,
  [5236] = 1,
    ACTIONS(1603), 1,
      sym__sp,
  [5240] = 1,
    ACTIONS(1605), 1,
      sym__sp,
  [5244] = 1,
    ACTIONS(1607), 1,
      sym__sp,
  [5248] = 1,
    ACTIONS(1609), 1,
      sym__sp,
  [5252] = 1,
    ACTIONS(1611), 1,
      sym__sp,
  [5256] = 1,
    ACTIONS(1613), 1,
      sym__sp,
  [5260] = 1,
    ACTIONS(1615), 1,
      sym__sp,
  [5264] = 1,
    ACTIONS(1617), 1,
      sym__sp,
  [5268] = 1,
    ACTIONS(1619), 1,
      sym__sp,
  [5272] = 1,
    ACTIONS(1621), 1,
      sym__sp,
  [5276] = 1,
    ACTIONS(1623), 1,
      sym__sp,
  [5280] = 1,
    ACTIONS(1625), 1,
      sym__sp,
  [5284] = 1,
    ACTIONS(1627), 1,
      sym__sp,
  [5288] = 1,
    ACTIONS(1629), 1,
      sym__sp,
  [5292] = 1,
    ACTIONS(1631), 1,
      sym__sp,
  [5296] = 1,
    ACTIONS(1633), 1,
      sym__sp,
  [5300] = 1,
    ACTIONS(1635), 1,
      sym__sp,
  [5304] = 1,
    ACTIONS(1637), 1,
      sym__sp,
  [5308] = 1,
    ACTIONS(1639), 1,
      sym__sp,
  [5312] = 1,
    ACTIONS(1641), 1,
      sym__sp,
  [5316] = 1,
    ACTIONS(1643), 1,
      sym__sp,
  [5320] = 1,
    ACTIONS(1645), 1,
      sym__sp,
  [5324] = 1,
    ACTIONS(1647), 1,
      sym__sp,
  [5328] = 1,
    ACTIONS(1649), 1,
      sym__sp,
  [5332] = 1,
    ACTIONS(1651), 1,
      sym__sp,
  [5336] = 1,
    ACTIONS(1653), 1,
      sym__sp,
  [5340] = 1,
    ACTIONS(1655), 1,
      sym__sp,
  [5344] = 1,
    ACTIONS(1657), 1,
      sym__sp,
  [5348] = 1,
    ACTIONS(1659), 1,
      sym__sp,
  [5352] = 1,
    ACTIONS(1661), 1,
      sym__sp,
  [5356] = 1,
    ACTIONS(1663), 1,
      sym__sp,
  [5360] = 1,
    ACTIONS(1665), 1,
      sym_dots,
  [5364] = 1,
    ACTIONS(1667), 1,
      sym__sp,
  [5368] = 1,
    ACTIONS(1669), 1,
      sym_dots,
  [5372] = 1,
    ACTIONS(1671), 1,
      sym_dots,
  [5376] = 1,
    ACTIONS(1673), 1,
      sym__sp,
  [5380] = 1,
    ACTIONS(1675), 1,
      sym_dots,
  [5384] = 1,
    ACTIONS(1677), 1,
      sym_dots,
  [5388] = 1,
    ACTIONS(1679), 1,
      sym_dots,
  [5392] = 1,
    ACTIONS(1681), 1,
      sym_dots,
  [5396] = 1,
    ACTIONS(1683), 1,
      sym_dots,
  [5400] = 1,
    ACTIONS(1685), 1,
      sym_dots,
  [5404] = 1,
    ACTIONS(1687), 1,
      sym_dots,
  [5408] = 1,
    ACTIONS(1689), 1,
      sym_dots,
  [5412] = 1,
    ACTIONS(1691), 1,
      sym_dots,
  [5416] = 1,
    ACTIONS(1693), 1,
      sym__sp,
  [5420] = 1,
    ACTIONS(1695), 1,
      sym_dots,
  [5424] = 1,
    ACTIONS(1697), 1,
      sym__sp,
  [5428] = 1,
    ACTIONS(1699), 1,
      sym_dots,
  [5432] = 1,
    ACTIONS(1701), 1,
      sym__sp,
  [5436] = 1,
    ACTIONS(1703), 1,
      sym__sp,
  [5440] = 1,
    ACTIONS(1705), 1,
      sym__sp,
  [5444] = 1,
    ACTIONS(1707), 1,
      sym__sp,
  [5448] = 1,
    ACTIONS(1709), 1,
      sym__sp,
  [5452] = 1,
    ACTIONS(1711), 1,
      sym_name,
  [5456] = 1,
    ACTIONS(1713), 1,
      sym__sp,
  [5460] = 1,
    ACTIONS(1715), 1,
      sym__sp,
  [5464] = 1,
    ACTIONS(1717), 1,
      sym_dots,
  [5468] = 1,
    ACTIONS(1719), 1,
      sym_dots,
  [5472] = 1,
    ACTIONS(1721), 1,
      sym_dots,
  [5476] = 1,
    ACTIONS(1723), 1,
      sym_dots,
  [5480] = 1,
    ACTIONS(1725), 1,
      sym__sp,
  [5484] = 1,
    ACTIONS(1727), 1,
      sym_dots,
  [5488] = 1,
    ACTIONS(1729), 1,
      sym__sp,
  [5492] = 1,
    ACTIONS(1731), 1,
      sym__sp,
  [5496] = 1,
    ACTIONS(1733), 1,
      sym__sp,
  [5500] = 1,
    ACTIONS(1735), 1,
      sym__not_newline,
  [5504] = 1,
    ACTIONS(1737), 1,
      sym__sp,
  [5508] = 1,
    ACTIONS(1739), 1,
      sym__sp,
  [5512] = 1,
    ACTIONS(1741), 1,
      sym__sp,
  [5516] = 1,
    ACTIONS(1743), 1,
      sym__sp,
  [5520] = 1,
    ACTIONS(1745), 1,
      sym__sp,
  [5524] = 1,
    ACTIONS(1747), 1,
      sym__sp,
  [5528] = 1,
    ACTIONS(1749), 1,
      sym__sp,
  [5532] = 1,
    ACTIONS(1751), 1,
      sym__sp,
  [5536] = 1,
    ACTIONS(1753), 1,
      sym__sp,
  [5540] = 1,
    ACTIONS(1755), 1,
      sym__sp,
  [5544] = 1,
    ACTIONS(1757), 1,
      sym__sp,
  [5548] = 1,
    ACTIONS(1759), 1,
      sym__sp,
  [5552] = 1,
    ACTIONS(1761), 1,
      sym_dots,
  [5556] = 1,
    ACTIONS(1763), 1,
      sym__not_newline,
  [5560] = 1,
    ACTIONS(1765), 1,
      sym_dots,
  [5564] = 1,
    ACTIONS(1767), 1,
      sym_dots,
  [5568] = 1,
    ACTIONS(1769), 1,
      sym_dots,
  [5572] = 1,
    ACTIONS(1771), 1,
      sym_dots,
  [5576] = 1,
    ACTIONS(1773), 1,
      sym_dots,
  [5580] = 1,
    ACTIONS(1775), 1,
      sym__sp,
  [5584] = 1,
    ACTIONS(1777), 1,
      sym__sp,
  [5588] = 1,
    ACTIONS(1779), 1,
      sym__sp,
  [5592] = 1,
    ACTIONS(1781), 1,
      sym__sp,
  [5596] = 1,
    ACTIONS(1783), 1,
      sym_ascii_chars,
  [5600] = 1,
    ACTIONS(1785), 1,
      sym__sp,
  [5604] = 1,
    ACTIONS(1787), 1,
      sym_ascii_chars,
  [5608] = 1,
    ACTIONS(1789), 1,
      sym_ascii_chars,
  [5612] = 1,
    ACTIONS(1791), 1,
      sym_ascii_chars,
  [5616] = 1,
    ACTIONS(1793), 1,
      sym_dots,
  [5620] = 1,
    ACTIONS(1795), 1,
      sym_dots,
  [5624] = 1,
    ACTIONS(1797), 1,
      sym__sp,
  [5628] = 1,
    ACTIONS(1799), 1,
      sym__sp,
  [5632] = 1,
    ACTIONS(1801), 1,
      sym__sp,
  [5636] = 1,
    ACTIONS(1803), 1,
      sym__sp,
  [5640] = 1,
    ACTIONS(1805), 1,
      sym__sp,
  [5644] = 1,
    ACTIONS(1807), 1,
      sym__sp,
  [5648] = 1,
    ACTIONS(1809), 1,
      anon_sym_AT,
  [5652] = 1,
    ACTIONS(1811), 1,
      sym__sp,
  [5656] = 1,
    ACTIONS(1813), 1,
      sym__sp,
  [5660] = 1,
    ACTIONS(1815), 1,
      sym__sp,
  [5664] = 1,
    ACTIONS(1817), 1,
      sym__sp,
  [5668] = 1,
    ACTIONS(1819), 1,
      sym__sp,
  [5672] = 1,
    ACTIONS(1821), 1,
      sym__sp,
  [5676] = 1,
    ACTIONS(1823), 1,
      sym__sp,
  [5680] = 1,
    ACTIONS(1825), 1,
      sym__sp,
  [5684] = 1,
    ACTIONS(1827), 1,
      sym__sp,
  [5688] = 1,
    ACTIONS(1829), 1,
      sym__sp,
  [5692] = 1,
    ACTIONS(1831), 1,
      sym__sp,
  [5696] = 1,
    ACTIONS(1833), 1,
      sym__sp,
  [5700] = 1,
    ACTIONS(1835), 1,
      sym__sp,
  [5704] = 1,
    ACTIONS(1837), 1,
      sym__sp,
  [5708] = 1,
    ACTIONS(1839), 1,
      sym__sp,
  [5712] = 1,
    ACTIONS(1841), 1,
      sym__sp,
  [5716] = 1,
    ACTIONS(1843), 1,
      sym__sp,
  [5720] = 1,
    ACTIONS(1845), 1,
      sym__sp,
  [5724] = 1,
    ACTIONS(1847), 1,
      sym__sp,
  [5728] = 1,
    ACTIONS(1849), 1,
      sym__sp,
  [5732] = 1,
    ACTIONS(1851), 1,
      sym__sp,
  [5736] = 1,
    ACTIONS(1853), 1,
      sym__sp,
  [5740] = 1,
    ACTIONS(1855), 1,
      sym__sp,
  [5744] = 1,
    ACTIONS(1857), 1,
      sym__sp,
  [5748] = 1,
    ACTIONS(1859), 1,
      sym__sp,
  [5752] = 1,
    ACTIONS(1861), 1,
      sym_ascii_chars,
  [5756] = 1,
    ACTIONS(1863), 1,
      sym_ascii_chars,
  [5760] = 1,
    ACTIONS(1865), 1,
      sym_ascii_chars,
  [5764] = 1,
    ACTIONS(1867), 1,
      sym_ascii_chars,
  [5768] = 1,
    ACTIONS(1869), 1,
      sym_ascii_chars,
  [5772] = 1,
    ACTIONS(1871), 1,
      sym_ascii_chars,
  [5776] = 1,
    ACTIONS(1873), 1,
      sym_ascii_chars,
  [5780] = 1,
    ACTIONS(1875), 1,
      sym_ascii_chars,
  [5784] = 1,
    ACTIONS(1877), 1,
      sym__sp,
  [5788] = 1,
    ACTIONS(1879), 1,
      anon_sym_COMMA,
  [5792] = 1,
    ACTIONS(1881), 1,
      sym_ascii_chars,
  [5796] = 1,
    ACTIONS(1883), 1,
      sym_ascii_chars,
  [5800] = 1,
    ACTIONS(1885), 1,
      sym_ascii_chars,
  [5804] = 1,
    ACTIONS(1887), 1,
      sym_ascii_chars,
  [5808] = 1,
    ACTIONS(1889), 1,
      sym__sp,
  [5812] = 1,
    ACTIONS(1891), 1,
      sym__sp,
  [5816] = 1,
    ACTIONS(1893), 1,
      sym__sp,
  [5820] = 1,
    ACTIONS(1895), 1,
      sym__sp,
  [5824] = 1,
    ACTIONS(1897), 1,
      sym__sp,
  [5828] = 1,
    ACTIONS(1899), 1,
      sym__sp,
  [5832] = 1,
    ACTIONS(1901), 1,
      sym__sp,
  [5836] = 1,
    ACTIONS(1903), 1,
      sym__sp,
  [5840] = 1,
    ACTIONS(1905), 1,
      sym__sp,
  [5844] = 1,
    ACTIONS(1907), 1,
      sym__sp,
  [5848] = 1,
    ACTIONS(1909), 1,
      ts_builtin_sym_end,
  [5852] = 1,
    ACTIONS(1911), 1,
      sym_ascii_chars,
  [5856] = 1,
    ACTIONS(1913), 1,
      sym_ascii_chars,
  [5860] = 1,
    ACTIONS(1915), 1,
      sym_ascii_chars,
  [5864] = 1,
    ACTIONS(629), 1,
      anon_sym_match,
  [5868] = 1,
    ACTIONS(1917), 1,
      sym_dots,
  [5872] = 1,
    ACTIONS(1919), 1,
      sym_dots,
  [5876] = 1,
    ACTIONS(1921), 1,
      sym__sp,
  [5880] = 1,
    ACTIONS(1923), 1,
      sym_dots,
  [5884] = 1,
    ACTIONS(1925), 1,
      sym__sp,
  [5888] = 1,
    ACTIONS(1927), 1,
      sym_filename,
  [5892] = 1,
    ACTIONS(1929), 1,
      sym__sp,
  [5896] = 1,
    ACTIONS(1931), 1,
      sym_dots,
  [5900] = 1,
    ACTIONS(1933), 1,
      sym__sp,
  [5904] = 1,
    ACTIONS(1935), 1,
      sym_dots,
  [5908] = 1,
    ACTIONS(1937), 1,
      sym_dots,
  [5912] = 1,
    ACTIONS(1939), 1,
      sym_ascii_digit,
  [5916] = 1,
    ACTIONS(1941), 1,
      sym__sp,
  [5920] = 1,
    ACTIONS(1943), 1,
      sym_dots,
  [5924] = 1,
    ACTIONS(1945), 1,
      sym_dots,
  [5928] = 1,
    ACTIONS(1947), 1,
      sym_dots,
  [5932] = 1,
    ACTIONS(1949), 1,
      sym__sp,
  [5936] = 1,
    ACTIONS(1951), 1,
      sym__sp,
  [5940] = 1,
    ACTIONS(1953), 1,
      sym_dots,
  [5944] = 1,
    ACTIONS(1955), 1,
      sym_dots,
  [5948] = 1,
    ACTIONS(1957), 1,
      sym_ascii_chars,
  [5952] = 1,
    ACTIONS(1959), 1,
      sym_dots,
  [5956] = 1,
    ACTIONS(1961), 1,
      sym_ascii_chars,
  [5960] = 1,
    ACTIONS(1963), 1,
      sym_name,
  [5964] = 1,
    ACTIONS(1965), 1,
      aux_sym_hex_char_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 204,
  [SMALL_STATE(8)] = 255,
  [SMALL_STATE(9)] = 306,
  [SMALL_STATE(10)] = 354,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 425,
  [SMALL_STATE(13)] = 442,
  [SMALL_STATE(14)] = 466,
  [SMALL_STATE(15)] = 490,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 538,
  [SMALL_STATE(18)] = 562,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 610,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 658,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 706,
  [SMALL_STATE(25)] = 730,
  [SMALL_STATE(26)] = 754,
  [SMALL_STATE(27)] = 778,
  [SMALL_STATE(28)] = 802,
  [SMALL_STATE(29)] = 826,
  [SMALL_STATE(30)] = 846,
  [SMALL_STATE(31)] = 866,
  [SMALL_STATE(32)] = 886,
  [SMALL_STATE(33)] = 906,
  [SMALL_STATE(34)] = 926,
  [SMALL_STATE(35)] = 946,
  [SMALL_STATE(36)] = 966,
  [SMALL_STATE(37)] = 986,
  [SMALL_STATE(38)] = 1006,
  [SMALL_STATE(39)] = 1026,
  [SMALL_STATE(40)] = 1046,
  [SMALL_STATE(41)] = 1066,
  [SMALL_STATE(42)] = 1086,
  [SMALL_STATE(43)] = 1106,
  [SMALL_STATE(44)] = 1126,
  [SMALL_STATE(45)] = 1146,
  [SMALL_STATE(46)] = 1166,
  [SMALL_STATE(47)] = 1186,
  [SMALL_STATE(48)] = 1206,
  [SMALL_STATE(49)] = 1226,
  [SMALL_STATE(50)] = 1246,
  [SMALL_STATE(51)] = 1266,
  [SMALL_STATE(52)] = 1286,
  [SMALL_STATE(53)] = 1306,
  [SMALL_STATE(54)] = 1326,
  [SMALL_STATE(55)] = 1346,
  [SMALL_STATE(56)] = 1366,
  [SMALL_STATE(57)] = 1386,
  [SMALL_STATE(58)] = 1406,
  [SMALL_STATE(59)] = 1426,
  [SMALL_STATE(60)] = 1446,
  [SMALL_STATE(61)] = 1466,
  [SMALL_STATE(62)] = 1486,
  [SMALL_STATE(63)] = 1506,
  [SMALL_STATE(64)] = 1526,
  [SMALL_STATE(65)] = 1546,
  [SMALL_STATE(66)] = 1566,
  [SMALL_STATE(67)] = 1586,
  [SMALL_STATE(68)] = 1606,
  [SMALL_STATE(69)] = 1626,
  [SMALL_STATE(70)] = 1646,
  [SMALL_STATE(71)] = 1666,
  [SMALL_STATE(72)] = 1686,
  [SMALL_STATE(73)] = 1706,
  [SMALL_STATE(74)] = 1726,
  [SMALL_STATE(75)] = 1746,
  [SMALL_STATE(76)] = 1766,
  [SMALL_STATE(77)] = 1786,
  [SMALL_STATE(78)] = 1806,
  [SMALL_STATE(79)] = 1826,
  [SMALL_STATE(80)] = 1846,
  [SMALL_STATE(81)] = 1866,
  [SMALL_STATE(82)] = 1886,
  [SMALL_STATE(83)] = 1906,
  [SMALL_STATE(84)] = 1926,
  [SMALL_STATE(85)] = 1946,
  [SMALL_STATE(86)] = 1966,
  [SMALL_STATE(87)] = 1986,
  [SMALL_STATE(88)] = 2006,
  [SMALL_STATE(89)] = 2026,
  [SMALL_STATE(90)] = 2046,
  [SMALL_STATE(91)] = 2066,
  [SMALL_STATE(92)] = 2086,
  [SMALL_STATE(93)] = 2106,
  [SMALL_STATE(94)] = 2126,
  [SMALL_STATE(95)] = 2146,
  [SMALL_STATE(96)] = 2166,
  [SMALL_STATE(97)] = 2186,
  [SMALL_STATE(98)] = 2206,
  [SMALL_STATE(99)] = 2226,
  [SMALL_STATE(100)] = 2246,
  [SMALL_STATE(101)] = 2266,
  [SMALL_STATE(102)] = 2286,
  [SMALL_STATE(103)] = 2306,
  [SMALL_STATE(104)] = 2326,
  [SMALL_STATE(105)] = 2346,
  [SMALL_STATE(106)] = 2366,
  [SMALL_STATE(107)] = 2386,
  [SMALL_STATE(108)] = 2406,
  [SMALL_STATE(109)] = 2426,
  [SMALL_STATE(110)] = 2446,
  [SMALL_STATE(111)] = 2466,
  [SMALL_STATE(112)] = 2486,
  [SMALL_STATE(113)] = 2506,
  [SMALL_STATE(114)] = 2526,
  [SMALL_STATE(115)] = 2546,
  [SMALL_STATE(116)] = 2566,
  [SMALL_STATE(117)] = 2586,
  [SMALL_STATE(118)] = 2606,
  [SMALL_STATE(119)] = 2626,
  [SMALL_STATE(120)] = 2639,
  [SMALL_STATE(121)] = 2652,
  [SMALL_STATE(122)] = 2665,
  [SMALL_STATE(123)] = 2678,
  [SMALL_STATE(124)] = 2691,
  [SMALL_STATE(125)] = 2703,
  [SMALL_STATE(126)] = 2711,
  [SMALL_STATE(127)] = 2718,
  [SMALL_STATE(128)] = 2725,
  [SMALL_STATE(129)] = 2732,
  [SMALL_STATE(130)] = 2739,
  [SMALL_STATE(131)] = 2746,
  [SMALL_STATE(132)] = 2753,
  [SMALL_STATE(133)] = 2760,
  [SMALL_STATE(134)] = 2767,
  [SMALL_STATE(135)] = 2774,
  [SMALL_STATE(136)] = 2781,
  [SMALL_STATE(137)] = 2788,
  [SMALL_STATE(138)] = 2795,
  [SMALL_STATE(139)] = 2802,
  [SMALL_STATE(140)] = 2809,
  [SMALL_STATE(141)] = 2816,
  [SMALL_STATE(142)] = 2823,
  [SMALL_STATE(143)] = 2832,
  [SMALL_STATE(144)] = 2839,
  [SMALL_STATE(145)] = 2846,
  [SMALL_STATE(146)] = 2853,
  [SMALL_STATE(147)] = 2860,
  [SMALL_STATE(148)] = 2867,
  [SMALL_STATE(149)] = 2876,
  [SMALL_STATE(150)] = 2883,
  [SMALL_STATE(151)] = 2890,
  [SMALL_STATE(152)] = 2897,
  [SMALL_STATE(153)] = 2904,
  [SMALL_STATE(154)] = 2911,
  [SMALL_STATE(155)] = 2918,
  [SMALL_STATE(156)] = 2925,
  [SMALL_STATE(157)] = 2932,
  [SMALL_STATE(158)] = 2939,
  [SMALL_STATE(159)] = 2946,
  [SMALL_STATE(160)] = 2953,
  [SMALL_STATE(161)] = 2960,
  [SMALL_STATE(162)] = 2967,
  [SMALL_STATE(163)] = 2974,
  [SMALL_STATE(164)] = 2981,
  [SMALL_STATE(165)] = 2988,
  [SMALL_STATE(166)] = 2995,
  [SMALL_STATE(167)] = 3002,
  [SMALL_STATE(168)] = 3009,
  [SMALL_STATE(169)] = 3016,
  [SMALL_STATE(170)] = 3023,
  [SMALL_STATE(171)] = 3030,
  [SMALL_STATE(172)] = 3037,
  [SMALL_STATE(173)] = 3044,
  [SMALL_STATE(174)] = 3051,
  [SMALL_STATE(175)] = 3058,
  [SMALL_STATE(176)] = 3065,
  [SMALL_STATE(177)] = 3072,
  [SMALL_STATE(178)] = 3079,
  [SMALL_STATE(179)] = 3086,
  [SMALL_STATE(180)] = 3093,
  [SMALL_STATE(181)] = 3100,
  [SMALL_STATE(182)] = 3107,
  [SMALL_STATE(183)] = 3114,
  [SMALL_STATE(184)] = 3121,
  [SMALL_STATE(185)] = 3128,
  [SMALL_STATE(186)] = 3135,
  [SMALL_STATE(187)] = 3142,
  [SMALL_STATE(188)] = 3149,
  [SMALL_STATE(189)] = 3156,
  [SMALL_STATE(190)] = 3163,
  [SMALL_STATE(191)] = 3170,
  [SMALL_STATE(192)] = 3177,
  [SMALL_STATE(193)] = 3184,
  [SMALL_STATE(194)] = 3191,
  [SMALL_STATE(195)] = 3198,
  [SMALL_STATE(196)] = 3205,
  [SMALL_STATE(197)] = 3212,
  [SMALL_STATE(198)] = 3219,
  [SMALL_STATE(199)] = 3226,
  [SMALL_STATE(200)] = 3233,
  [SMALL_STATE(201)] = 3240,
  [SMALL_STATE(202)] = 3247,
  [SMALL_STATE(203)] = 3254,
  [SMALL_STATE(204)] = 3261,
  [SMALL_STATE(205)] = 3268,
  [SMALL_STATE(206)] = 3275,
  [SMALL_STATE(207)] = 3282,
  [SMALL_STATE(208)] = 3289,
  [SMALL_STATE(209)] = 3296,
  [SMALL_STATE(210)] = 3303,
  [SMALL_STATE(211)] = 3310,
  [SMALL_STATE(212)] = 3317,
  [SMALL_STATE(213)] = 3324,
  [SMALL_STATE(214)] = 3331,
  [SMALL_STATE(215)] = 3338,
  [SMALL_STATE(216)] = 3345,
  [SMALL_STATE(217)] = 3352,
  [SMALL_STATE(218)] = 3359,
  [SMALL_STATE(219)] = 3366,
  [SMALL_STATE(220)] = 3373,
  [SMALL_STATE(221)] = 3380,
  [SMALL_STATE(222)] = 3387,
  [SMALL_STATE(223)] = 3394,
  [SMALL_STATE(224)] = 3401,
  [SMALL_STATE(225)] = 3408,
  [SMALL_STATE(226)] = 3415,
  [SMALL_STATE(227)] = 3422,
  [SMALL_STATE(228)] = 3429,
  [SMALL_STATE(229)] = 3436,
  [SMALL_STATE(230)] = 3443,
  [SMALL_STATE(231)] = 3450,
  [SMALL_STATE(232)] = 3463,
  [SMALL_STATE(233)] = 3470,
  [SMALL_STATE(234)] = 3477,
  [SMALL_STATE(235)] = 3484,
  [SMALL_STATE(236)] = 3491,
  [SMALL_STATE(237)] = 3498,
  [SMALL_STATE(238)] = 3505,
  [SMALL_STATE(239)] = 3512,
  [SMALL_STATE(240)] = 3519,
  [SMALL_STATE(241)] = 3526,
  [SMALL_STATE(242)] = 3533,
  [SMALL_STATE(243)] = 3540,
  [SMALL_STATE(244)] = 3547,
  [SMALL_STATE(245)] = 3554,
  [SMALL_STATE(246)] = 3561,
  [SMALL_STATE(247)] = 3568,
  [SMALL_STATE(248)] = 3575,
  [SMALL_STATE(249)] = 3582,
  [SMALL_STATE(250)] = 3589,
  [SMALL_STATE(251)] = 3596,
  [SMALL_STATE(252)] = 3603,
  [SMALL_STATE(253)] = 3610,
  [SMALL_STATE(254)] = 3617,
  [SMALL_STATE(255)] = 3624,
  [SMALL_STATE(256)] = 3631,
  [SMALL_STATE(257)] = 3638,
  [SMALL_STATE(258)] = 3645,
  [SMALL_STATE(259)] = 3652,
  [SMALL_STATE(260)] = 3659,
  [SMALL_STATE(261)] = 3666,
  [SMALL_STATE(262)] = 3673,
  [SMALL_STATE(263)] = 3680,
  [SMALL_STATE(264)] = 3687,
  [SMALL_STATE(265)] = 3694,
  [SMALL_STATE(266)] = 3701,
  [SMALL_STATE(267)] = 3708,
  [SMALL_STATE(268)] = 3715,
  [SMALL_STATE(269)] = 3722,
  [SMALL_STATE(270)] = 3729,
  [SMALL_STATE(271)] = 3736,
  [SMALL_STATE(272)] = 3743,
  [SMALL_STATE(273)] = 3750,
  [SMALL_STATE(274)] = 3757,
  [SMALL_STATE(275)] = 3764,
  [SMALL_STATE(276)] = 3771,
  [SMALL_STATE(277)] = 3778,
  [SMALL_STATE(278)] = 3785,
  [SMALL_STATE(279)] = 3792,
  [SMALL_STATE(280)] = 3799,
  [SMALL_STATE(281)] = 3806,
  [SMALL_STATE(282)] = 3813,
  [SMALL_STATE(283)] = 3820,
  [SMALL_STATE(284)] = 3827,
  [SMALL_STATE(285)] = 3834,
  [SMALL_STATE(286)] = 3841,
  [SMALL_STATE(287)] = 3847,
  [SMALL_STATE(288)] = 3853,
  [SMALL_STATE(289)] = 3859,
  [SMALL_STATE(290)] = 3864,
  [SMALL_STATE(291)] = 3869,
  [SMALL_STATE(292)] = 3874,
  [SMALL_STATE(293)] = 3879,
  [SMALL_STATE(294)] = 3884,
  [SMALL_STATE(295)] = 3889,
  [SMALL_STATE(296)] = 3894,
  [SMALL_STATE(297)] = 3899,
  [SMALL_STATE(298)] = 3904,
  [SMALL_STATE(299)] = 3909,
  [SMALL_STATE(300)] = 3914,
  [SMALL_STATE(301)] = 3919,
  [SMALL_STATE(302)] = 3926,
  [SMALL_STATE(303)] = 3933,
  [SMALL_STATE(304)] = 3940,
  [SMALL_STATE(305)] = 3947,
  [SMALL_STATE(306)] = 3954,
  [SMALL_STATE(307)] = 3961,
  [SMALL_STATE(308)] = 3968,
  [SMALL_STATE(309)] = 3975,
  [SMALL_STATE(310)] = 3982,
  [SMALL_STATE(311)] = 3989,
  [SMALL_STATE(312)] = 3996,
  [SMALL_STATE(313)] = 4003,
  [SMALL_STATE(314)] = 4010,
  [SMALL_STATE(315)] = 4017,
  [SMALL_STATE(316)] = 4024,
  [SMALL_STATE(317)] = 4029,
  [SMALL_STATE(318)] = 4034,
  [SMALL_STATE(319)] = 4039,
  [SMALL_STATE(320)] = 4044,
  [SMALL_STATE(321)] = 4049,
  [SMALL_STATE(322)] = 4054,
  [SMALL_STATE(323)] = 4061,
  [SMALL_STATE(324)] = 4066,
  [SMALL_STATE(325)] = 4071,
  [SMALL_STATE(326)] = 4076,
  [SMALL_STATE(327)] = 4081,
  [SMALL_STATE(328)] = 4088,
  [SMALL_STATE(329)] = 4093,
  [SMALL_STATE(330)] = 4100,
  [SMALL_STATE(331)] = 4107,
  [SMALL_STATE(332)] = 4114,
  [SMALL_STATE(333)] = 4121,
  [SMALL_STATE(334)] = 4128,
  [SMALL_STATE(335)] = 4133,
  [SMALL_STATE(336)] = 4140,
  [SMALL_STATE(337)] = 4145,
  [SMALL_STATE(338)] = 4150,
  [SMALL_STATE(339)] = 4155,
  [SMALL_STATE(340)] = 4160,
  [SMALL_STATE(341)] = 4165,
  [SMALL_STATE(342)] = 4170,
  [SMALL_STATE(343)] = 4175,
  [SMALL_STATE(344)] = 4180,
  [SMALL_STATE(345)] = 4185,
  [SMALL_STATE(346)] = 4190,
  [SMALL_STATE(347)] = 4197,
  [SMALL_STATE(348)] = 4202,
  [SMALL_STATE(349)] = 4207,
  [SMALL_STATE(350)] = 4212,
  [SMALL_STATE(351)] = 4217,
  [SMALL_STATE(352)] = 4222,
  [SMALL_STATE(353)] = 4227,
  [SMALL_STATE(354)] = 4232,
  [SMALL_STATE(355)] = 4239,
  [SMALL_STATE(356)] = 4246,
  [SMALL_STATE(357)] = 4253,
  [SMALL_STATE(358)] = 4260,
  [SMALL_STATE(359)] = 4267,
  [SMALL_STATE(360)] = 4274,
  [SMALL_STATE(361)] = 4279,
  [SMALL_STATE(362)] = 4284,
  [SMALL_STATE(363)] = 4288,
  [SMALL_STATE(364)] = 4292,
  [SMALL_STATE(365)] = 4296,
  [SMALL_STATE(366)] = 4300,
  [SMALL_STATE(367)] = 4304,
  [SMALL_STATE(368)] = 4308,
  [SMALL_STATE(369)] = 4312,
  [SMALL_STATE(370)] = 4316,
  [SMALL_STATE(371)] = 4320,
  [SMALL_STATE(372)] = 4324,
  [SMALL_STATE(373)] = 4328,
  [SMALL_STATE(374)] = 4332,
  [SMALL_STATE(375)] = 4336,
  [SMALL_STATE(376)] = 4340,
  [SMALL_STATE(377)] = 4344,
  [SMALL_STATE(378)] = 4348,
  [SMALL_STATE(379)] = 4352,
  [SMALL_STATE(380)] = 4356,
  [SMALL_STATE(381)] = 4360,
  [SMALL_STATE(382)] = 4364,
  [SMALL_STATE(383)] = 4368,
  [SMALL_STATE(384)] = 4372,
  [SMALL_STATE(385)] = 4376,
  [SMALL_STATE(386)] = 4380,
  [SMALL_STATE(387)] = 4384,
  [SMALL_STATE(388)] = 4388,
  [SMALL_STATE(389)] = 4392,
  [SMALL_STATE(390)] = 4396,
  [SMALL_STATE(391)] = 4400,
  [SMALL_STATE(392)] = 4404,
  [SMALL_STATE(393)] = 4408,
  [SMALL_STATE(394)] = 4412,
  [SMALL_STATE(395)] = 4416,
  [SMALL_STATE(396)] = 4420,
  [SMALL_STATE(397)] = 4424,
  [SMALL_STATE(398)] = 4428,
  [SMALL_STATE(399)] = 4432,
  [SMALL_STATE(400)] = 4436,
  [SMALL_STATE(401)] = 4440,
  [SMALL_STATE(402)] = 4444,
  [SMALL_STATE(403)] = 4448,
  [SMALL_STATE(404)] = 4452,
  [SMALL_STATE(405)] = 4456,
  [SMALL_STATE(406)] = 4460,
  [SMALL_STATE(407)] = 4464,
  [SMALL_STATE(408)] = 4468,
  [SMALL_STATE(409)] = 4472,
  [SMALL_STATE(410)] = 4476,
  [SMALL_STATE(411)] = 4480,
  [SMALL_STATE(412)] = 4484,
  [SMALL_STATE(413)] = 4488,
  [SMALL_STATE(414)] = 4492,
  [SMALL_STATE(415)] = 4496,
  [SMALL_STATE(416)] = 4500,
  [SMALL_STATE(417)] = 4504,
  [SMALL_STATE(418)] = 4508,
  [SMALL_STATE(419)] = 4512,
  [SMALL_STATE(420)] = 4516,
  [SMALL_STATE(421)] = 4520,
  [SMALL_STATE(422)] = 4524,
  [SMALL_STATE(423)] = 4528,
  [SMALL_STATE(424)] = 4532,
  [SMALL_STATE(425)] = 4536,
  [SMALL_STATE(426)] = 4540,
  [SMALL_STATE(427)] = 4544,
  [SMALL_STATE(428)] = 4548,
  [SMALL_STATE(429)] = 4552,
  [SMALL_STATE(430)] = 4556,
  [SMALL_STATE(431)] = 4560,
  [SMALL_STATE(432)] = 4564,
  [SMALL_STATE(433)] = 4568,
  [SMALL_STATE(434)] = 4572,
  [SMALL_STATE(435)] = 4576,
  [SMALL_STATE(436)] = 4580,
  [SMALL_STATE(437)] = 4584,
  [SMALL_STATE(438)] = 4588,
  [SMALL_STATE(439)] = 4592,
  [SMALL_STATE(440)] = 4596,
  [SMALL_STATE(441)] = 4600,
  [SMALL_STATE(442)] = 4604,
  [SMALL_STATE(443)] = 4608,
  [SMALL_STATE(444)] = 4612,
  [SMALL_STATE(445)] = 4616,
  [SMALL_STATE(446)] = 4620,
  [SMALL_STATE(447)] = 4624,
  [SMALL_STATE(448)] = 4628,
  [SMALL_STATE(449)] = 4632,
  [SMALL_STATE(450)] = 4636,
  [SMALL_STATE(451)] = 4640,
  [SMALL_STATE(452)] = 4644,
  [SMALL_STATE(453)] = 4648,
  [SMALL_STATE(454)] = 4652,
  [SMALL_STATE(455)] = 4656,
  [SMALL_STATE(456)] = 4660,
  [SMALL_STATE(457)] = 4664,
  [SMALL_STATE(458)] = 4668,
  [SMALL_STATE(459)] = 4672,
  [SMALL_STATE(460)] = 4676,
  [SMALL_STATE(461)] = 4680,
  [SMALL_STATE(462)] = 4684,
  [SMALL_STATE(463)] = 4688,
  [SMALL_STATE(464)] = 4692,
  [SMALL_STATE(465)] = 4696,
  [SMALL_STATE(466)] = 4700,
  [SMALL_STATE(467)] = 4704,
  [SMALL_STATE(468)] = 4708,
  [SMALL_STATE(469)] = 4712,
  [SMALL_STATE(470)] = 4716,
  [SMALL_STATE(471)] = 4720,
  [SMALL_STATE(472)] = 4724,
  [SMALL_STATE(473)] = 4728,
  [SMALL_STATE(474)] = 4732,
  [SMALL_STATE(475)] = 4736,
  [SMALL_STATE(476)] = 4740,
  [SMALL_STATE(477)] = 4744,
  [SMALL_STATE(478)] = 4748,
  [SMALL_STATE(479)] = 4752,
  [SMALL_STATE(480)] = 4756,
  [SMALL_STATE(481)] = 4760,
  [SMALL_STATE(482)] = 4764,
  [SMALL_STATE(483)] = 4768,
  [SMALL_STATE(484)] = 4772,
  [SMALL_STATE(485)] = 4776,
  [SMALL_STATE(486)] = 4780,
  [SMALL_STATE(487)] = 4784,
  [SMALL_STATE(488)] = 4788,
  [SMALL_STATE(489)] = 4792,
  [SMALL_STATE(490)] = 4796,
  [SMALL_STATE(491)] = 4800,
  [SMALL_STATE(492)] = 4804,
  [SMALL_STATE(493)] = 4808,
  [SMALL_STATE(494)] = 4812,
  [SMALL_STATE(495)] = 4816,
  [SMALL_STATE(496)] = 4820,
  [SMALL_STATE(497)] = 4824,
  [SMALL_STATE(498)] = 4828,
  [SMALL_STATE(499)] = 4832,
  [SMALL_STATE(500)] = 4836,
  [SMALL_STATE(501)] = 4840,
  [SMALL_STATE(502)] = 4844,
  [SMALL_STATE(503)] = 4848,
  [SMALL_STATE(504)] = 4852,
  [SMALL_STATE(505)] = 4856,
  [SMALL_STATE(506)] = 4860,
  [SMALL_STATE(507)] = 4864,
  [SMALL_STATE(508)] = 4868,
  [SMALL_STATE(509)] = 4872,
  [SMALL_STATE(510)] = 4876,
  [SMALL_STATE(511)] = 4880,
  [SMALL_STATE(512)] = 4884,
  [SMALL_STATE(513)] = 4888,
  [SMALL_STATE(514)] = 4892,
  [SMALL_STATE(515)] = 4896,
  [SMALL_STATE(516)] = 4900,
  [SMALL_STATE(517)] = 4904,
  [SMALL_STATE(518)] = 4908,
  [SMALL_STATE(519)] = 4912,
  [SMALL_STATE(520)] = 4916,
  [SMALL_STATE(521)] = 4920,
  [SMALL_STATE(522)] = 4924,
  [SMALL_STATE(523)] = 4928,
  [SMALL_STATE(524)] = 4932,
  [SMALL_STATE(525)] = 4936,
  [SMALL_STATE(526)] = 4940,
  [SMALL_STATE(527)] = 4944,
  [SMALL_STATE(528)] = 4948,
  [SMALL_STATE(529)] = 4952,
  [SMALL_STATE(530)] = 4956,
  [SMALL_STATE(531)] = 4960,
  [SMALL_STATE(532)] = 4964,
  [SMALL_STATE(533)] = 4968,
  [SMALL_STATE(534)] = 4972,
  [SMALL_STATE(535)] = 4976,
  [SMALL_STATE(536)] = 4980,
  [SMALL_STATE(537)] = 4984,
  [SMALL_STATE(538)] = 4988,
  [SMALL_STATE(539)] = 4992,
  [SMALL_STATE(540)] = 4996,
  [SMALL_STATE(541)] = 5000,
  [SMALL_STATE(542)] = 5004,
  [SMALL_STATE(543)] = 5008,
  [SMALL_STATE(544)] = 5012,
  [SMALL_STATE(545)] = 5016,
  [SMALL_STATE(546)] = 5020,
  [SMALL_STATE(547)] = 5024,
  [SMALL_STATE(548)] = 5028,
  [SMALL_STATE(549)] = 5032,
  [SMALL_STATE(550)] = 5036,
  [SMALL_STATE(551)] = 5040,
  [SMALL_STATE(552)] = 5044,
  [SMALL_STATE(553)] = 5048,
  [SMALL_STATE(554)] = 5052,
  [SMALL_STATE(555)] = 5056,
  [SMALL_STATE(556)] = 5060,
  [SMALL_STATE(557)] = 5064,
  [SMALL_STATE(558)] = 5068,
  [SMALL_STATE(559)] = 5072,
  [SMALL_STATE(560)] = 5076,
  [SMALL_STATE(561)] = 5080,
  [SMALL_STATE(562)] = 5084,
  [SMALL_STATE(563)] = 5088,
  [SMALL_STATE(564)] = 5092,
  [SMALL_STATE(565)] = 5096,
  [SMALL_STATE(566)] = 5100,
  [SMALL_STATE(567)] = 5104,
  [SMALL_STATE(568)] = 5108,
  [SMALL_STATE(569)] = 5112,
  [SMALL_STATE(570)] = 5116,
  [SMALL_STATE(571)] = 5120,
  [SMALL_STATE(572)] = 5124,
  [SMALL_STATE(573)] = 5128,
  [SMALL_STATE(574)] = 5132,
  [SMALL_STATE(575)] = 5136,
  [SMALL_STATE(576)] = 5140,
  [SMALL_STATE(577)] = 5144,
  [SMALL_STATE(578)] = 5148,
  [SMALL_STATE(579)] = 5152,
  [SMALL_STATE(580)] = 5156,
  [SMALL_STATE(581)] = 5160,
  [SMALL_STATE(582)] = 5164,
  [SMALL_STATE(583)] = 5168,
  [SMALL_STATE(584)] = 5172,
  [SMALL_STATE(585)] = 5176,
  [SMALL_STATE(586)] = 5180,
  [SMALL_STATE(587)] = 5184,
  [SMALL_STATE(588)] = 5188,
  [SMALL_STATE(589)] = 5192,
  [SMALL_STATE(590)] = 5196,
  [SMALL_STATE(591)] = 5200,
  [SMALL_STATE(592)] = 5204,
  [SMALL_STATE(593)] = 5208,
  [SMALL_STATE(594)] = 5212,
  [SMALL_STATE(595)] = 5216,
  [SMALL_STATE(596)] = 5220,
  [SMALL_STATE(597)] = 5224,
  [SMALL_STATE(598)] = 5228,
  [SMALL_STATE(599)] = 5232,
  [SMALL_STATE(600)] = 5236,
  [SMALL_STATE(601)] = 5240,
  [SMALL_STATE(602)] = 5244,
  [SMALL_STATE(603)] = 5248,
  [SMALL_STATE(604)] = 5252,
  [SMALL_STATE(605)] = 5256,
  [SMALL_STATE(606)] = 5260,
  [SMALL_STATE(607)] = 5264,
  [SMALL_STATE(608)] = 5268,
  [SMALL_STATE(609)] = 5272,
  [SMALL_STATE(610)] = 5276,
  [SMALL_STATE(611)] = 5280,
  [SMALL_STATE(612)] = 5284,
  [SMALL_STATE(613)] = 5288,
  [SMALL_STATE(614)] = 5292,
  [SMALL_STATE(615)] = 5296,
  [SMALL_STATE(616)] = 5300,
  [SMALL_STATE(617)] = 5304,
  [SMALL_STATE(618)] = 5308,
  [SMALL_STATE(619)] = 5312,
  [SMALL_STATE(620)] = 5316,
  [SMALL_STATE(621)] = 5320,
  [SMALL_STATE(622)] = 5324,
  [SMALL_STATE(623)] = 5328,
  [SMALL_STATE(624)] = 5332,
  [SMALL_STATE(625)] = 5336,
  [SMALL_STATE(626)] = 5340,
  [SMALL_STATE(627)] = 5344,
  [SMALL_STATE(628)] = 5348,
  [SMALL_STATE(629)] = 5352,
  [SMALL_STATE(630)] = 5356,
  [SMALL_STATE(631)] = 5360,
  [SMALL_STATE(632)] = 5364,
  [SMALL_STATE(633)] = 5368,
  [SMALL_STATE(634)] = 5372,
  [SMALL_STATE(635)] = 5376,
  [SMALL_STATE(636)] = 5380,
  [SMALL_STATE(637)] = 5384,
  [SMALL_STATE(638)] = 5388,
  [SMALL_STATE(639)] = 5392,
  [SMALL_STATE(640)] = 5396,
  [SMALL_STATE(641)] = 5400,
  [SMALL_STATE(642)] = 5404,
  [SMALL_STATE(643)] = 5408,
  [SMALL_STATE(644)] = 5412,
  [SMALL_STATE(645)] = 5416,
  [SMALL_STATE(646)] = 5420,
  [SMALL_STATE(647)] = 5424,
  [SMALL_STATE(648)] = 5428,
  [SMALL_STATE(649)] = 5432,
  [SMALL_STATE(650)] = 5436,
  [SMALL_STATE(651)] = 5440,
  [SMALL_STATE(652)] = 5444,
  [SMALL_STATE(653)] = 5448,
  [SMALL_STATE(654)] = 5452,
  [SMALL_STATE(655)] = 5456,
  [SMALL_STATE(656)] = 5460,
  [SMALL_STATE(657)] = 5464,
  [SMALL_STATE(658)] = 5468,
  [SMALL_STATE(659)] = 5472,
  [SMALL_STATE(660)] = 5476,
  [SMALL_STATE(661)] = 5480,
  [SMALL_STATE(662)] = 5484,
  [SMALL_STATE(663)] = 5488,
  [SMALL_STATE(664)] = 5492,
  [SMALL_STATE(665)] = 5496,
  [SMALL_STATE(666)] = 5500,
  [SMALL_STATE(667)] = 5504,
  [SMALL_STATE(668)] = 5508,
  [SMALL_STATE(669)] = 5512,
  [SMALL_STATE(670)] = 5516,
  [SMALL_STATE(671)] = 5520,
  [SMALL_STATE(672)] = 5524,
  [SMALL_STATE(673)] = 5528,
  [SMALL_STATE(674)] = 5532,
  [SMALL_STATE(675)] = 5536,
  [SMALL_STATE(676)] = 5540,
  [SMALL_STATE(677)] = 5544,
  [SMALL_STATE(678)] = 5548,
  [SMALL_STATE(679)] = 5552,
  [SMALL_STATE(680)] = 5556,
  [SMALL_STATE(681)] = 5560,
  [SMALL_STATE(682)] = 5564,
  [SMALL_STATE(683)] = 5568,
  [SMALL_STATE(684)] = 5572,
  [SMALL_STATE(685)] = 5576,
  [SMALL_STATE(686)] = 5580,
  [SMALL_STATE(687)] = 5584,
  [SMALL_STATE(688)] = 5588,
  [SMALL_STATE(689)] = 5592,
  [SMALL_STATE(690)] = 5596,
  [SMALL_STATE(691)] = 5600,
  [SMALL_STATE(692)] = 5604,
  [SMALL_STATE(693)] = 5608,
  [SMALL_STATE(694)] = 5612,
  [SMALL_STATE(695)] = 5616,
  [SMALL_STATE(696)] = 5620,
  [SMALL_STATE(697)] = 5624,
  [SMALL_STATE(698)] = 5628,
  [SMALL_STATE(699)] = 5632,
  [SMALL_STATE(700)] = 5636,
  [SMALL_STATE(701)] = 5640,
  [SMALL_STATE(702)] = 5644,
  [SMALL_STATE(703)] = 5648,
  [SMALL_STATE(704)] = 5652,
  [SMALL_STATE(705)] = 5656,
  [SMALL_STATE(706)] = 5660,
  [SMALL_STATE(707)] = 5664,
  [SMALL_STATE(708)] = 5668,
  [SMALL_STATE(709)] = 5672,
  [SMALL_STATE(710)] = 5676,
  [SMALL_STATE(711)] = 5680,
  [SMALL_STATE(712)] = 5684,
  [SMALL_STATE(713)] = 5688,
  [SMALL_STATE(714)] = 5692,
  [SMALL_STATE(715)] = 5696,
  [SMALL_STATE(716)] = 5700,
  [SMALL_STATE(717)] = 5704,
  [SMALL_STATE(718)] = 5708,
  [SMALL_STATE(719)] = 5712,
  [SMALL_STATE(720)] = 5716,
  [SMALL_STATE(721)] = 5720,
  [SMALL_STATE(722)] = 5724,
  [SMALL_STATE(723)] = 5728,
  [SMALL_STATE(724)] = 5732,
  [SMALL_STATE(725)] = 5736,
  [SMALL_STATE(726)] = 5740,
  [SMALL_STATE(727)] = 5744,
  [SMALL_STATE(728)] = 5748,
  [SMALL_STATE(729)] = 5752,
  [SMALL_STATE(730)] = 5756,
  [SMALL_STATE(731)] = 5760,
  [SMALL_STATE(732)] = 5764,
  [SMALL_STATE(733)] = 5768,
  [SMALL_STATE(734)] = 5772,
  [SMALL_STATE(735)] = 5776,
  [SMALL_STATE(736)] = 5780,
  [SMALL_STATE(737)] = 5784,
  [SMALL_STATE(738)] = 5788,
  [SMALL_STATE(739)] = 5792,
  [SMALL_STATE(740)] = 5796,
  [SMALL_STATE(741)] = 5800,
  [SMALL_STATE(742)] = 5804,
  [SMALL_STATE(743)] = 5808,
  [SMALL_STATE(744)] = 5812,
  [SMALL_STATE(745)] = 5816,
  [SMALL_STATE(746)] = 5820,
  [SMALL_STATE(747)] = 5824,
  [SMALL_STATE(748)] = 5828,
  [SMALL_STATE(749)] = 5832,
  [SMALL_STATE(750)] = 5836,
  [SMALL_STATE(751)] = 5840,
  [SMALL_STATE(752)] = 5844,
  [SMALL_STATE(753)] = 5848,
  [SMALL_STATE(754)] = 5852,
  [SMALL_STATE(755)] = 5856,
  [SMALL_STATE(756)] = 5860,
  [SMALL_STATE(757)] = 5864,
  [SMALL_STATE(758)] = 5868,
  [SMALL_STATE(759)] = 5872,
  [SMALL_STATE(760)] = 5876,
  [SMALL_STATE(761)] = 5880,
  [SMALL_STATE(762)] = 5884,
  [SMALL_STATE(763)] = 5888,
  [SMALL_STATE(764)] = 5892,
  [SMALL_STATE(765)] = 5896,
  [SMALL_STATE(766)] = 5900,
  [SMALL_STATE(767)] = 5904,
  [SMALL_STATE(768)] = 5908,
  [SMALL_STATE(769)] = 5912,
  [SMALL_STATE(770)] = 5916,
  [SMALL_STATE(771)] = 5920,
  [SMALL_STATE(772)] = 5924,
  [SMALL_STATE(773)] = 5928,
  [SMALL_STATE(774)] = 5932,
  [SMALL_STATE(775)] = 5936,
  [SMALL_STATE(776)] = 5940,
  [SMALL_STATE(777)] = 5944,
  [SMALL_STATE(778)] = 5948,
  [SMALL_STATE(779)] = 5952,
  [SMALL_STATE(780)] = 5956,
  [SMALL_STATE(781)] = 5960,
  [SMALL_STATE(782)] = 5964,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(680),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(762),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(760),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(745),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(744),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(743),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(727),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(687),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(686),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(552),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(632),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(630),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(621),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(585),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(560),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(559),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(558),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(557),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(556),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(555),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(554),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(553),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(381),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(506),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(505),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(503),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(497),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(495),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(494),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(469),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(462),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(455),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(442),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(441),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(436),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(416),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(414),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(413),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(412),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(411),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(410),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(409),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(408),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(407),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(406),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(405),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(404),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(403),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(402),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(401),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(400),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(399),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(398),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(397),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(389),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(387),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(384),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(383),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(594),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(592),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(593),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(775),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(667),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(678),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(688),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(691),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(697),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(698),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(699),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(700),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(701),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(702),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(704),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(705),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(706),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(707),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(708),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(709),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(710),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(711),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(712),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(713),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(714),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(715),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(716),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(717),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(718),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(719),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(720),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(721),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(722),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(723),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(724),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(725),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(726),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(728),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(746),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(749),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(751),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(752),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_always_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_always_repeat1, 2), SHIFT_REPEAT(749),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_class, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_swapdd, 6),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_swapdd, 5),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_swapcd, 7),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_swapcd_repeat1, 2), SHIFT_REPEAT(685),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_swapcd_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_swapcd, 8),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_with_comment, 1),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphletter, 5),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joinnum, 5),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_char, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc_seq, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chars, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 12),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 11),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 10),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 9),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 9),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partword, 7),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begcomp, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contraction, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exactdots, 4),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nocont, 3),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endword, 7),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midendword, 7),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compbrl, 3),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midword, 7),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begmidword, 7),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begword, 7),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sufword, 7),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 7),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_always, 7),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capsletter, 4),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begcapsword, 4),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_swapcc, 7),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rependword, 7),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endemphphrase, 7),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endmodephrase, 7),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base, 7),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endcapsword, 4),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compbrl, 4),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begcomp, 4),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endcomp, 4),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphclass, 3),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display, 5),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seqafterexpression, 3),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seqafterpattern, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seqafterchars, 3),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_correct, 6),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass4, 6),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass3, 6),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass2, 6),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 6),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joinnum, 6),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endnum, 6),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midnum, 6),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begnum, 6),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postpunc, 6),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prepunc, 6),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partword, 6),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endword, 6),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midendword, 6),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midword, 6),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begmidword, 6),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begword, 6),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prfword, 6),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sufword, 6),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lowword, 6),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 6),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeated, 6),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_always, 6),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hyphen, 6),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endemph, 6),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begemph, 6),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begmodeword, 6),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modeletter, 6),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 6),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sign, 6),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase, 6),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lowercase, 6),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter, 6),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seqbeforechars, 3),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 6),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 6),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multind, 6),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seqdelimiter, 3),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multind, 5),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 5),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 5),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midendnumericmodechars, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numericmodechars, 3),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numericnocontchars, 3),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numsign, 3),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display, 6),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nocontractsign, 3),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noletsignafter, 3),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noletsignbefore, 3),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noletsign, 3),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letsign, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lencapsphrase, 3),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 5),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begcapsphrase, 3),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endcaps, 3),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begcaps, 3),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capsmodechars, 3),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endcapsword, 3),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begcapsword, 3),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter, 5),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capsletter, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lowercase, 5),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uppercase, 5),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_litdigit, 5),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sign, 5),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_correct, 5),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass4, 5),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass3, 5),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass2, 5),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 5),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipass_action, 1),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endcomp, 3),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endnum, 5),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midnum, 5),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begnum, 5),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postpunc, 5),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prepunc, 5),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partword, 5),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endword, 5),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midendword, 5),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midword, 5),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begmidword, 5),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begword, 5),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prfword, 5),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sufword, 5),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lowword, 5),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joinword, 5),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syllable, 5),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 5),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_largesign, 5),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repword, 5),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeated, 5),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_always, 5),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace, 5),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp6, 5),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hyphen, 5),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decpoint, 5),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lenemphphrase, 5),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undefined, 3),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begemphphrase, 5),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphmodechars, 5),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endemphword, 5),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begemphword, 5),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noemphchars, 5),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endemph, 5),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begemph, 5),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lenmodephrase, 5),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begmodephrase, 5),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endcapsphrase, 5),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begmodeword, 5),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modeletter, 5),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 5),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_with_comment, 2),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_comment, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_match, 2),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipass_test, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_pattern, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_char, 2),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_match, 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc_seq, 1),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chars, 1),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_pattern, 1),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1909] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_liblouis(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
