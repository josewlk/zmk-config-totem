/*
 * Localized Keys for Spanish
 *
 * This file was generated from data with the following license:
 *
 * Copyright (c) 2024 The ZMK Contributors
 * 
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define ES_ESCAPE_CHARACTER (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

#define ES_FILE_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))

#define ES_GROUP_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

#define ES_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define ES_EXCLAMATION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define ES_EXCL (ES_EXCLAMATION)

/* " */
#define ES_DOUBLE_QUOTES (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define ES_DQT (ES_DOUBLE_QUOTES)

/* # */
#define ES_HASH (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define ES_POUND (ES_HASH)

/* $ */
#define ES_DOLLAR (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define ES_DLLR (ES_DOLLAR)

/* % */
#define ES_PERCENT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define ES_PRCNT (ES_PERCENT)

/* & */
#define ES_AMPERSAND (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define ES_AMPS (ES_AMPERSAND)

/* ' */
#define ES_SINGLE_QUOTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))
#define ES_SQT (ES_SINGLE_QUOTE)
#define ES_APOSTROPHE (ES_SINGLE_QUOTE)
#define ES_APOS (ES_SINGLE_QUOTE)

/* ( */
#define ES_LEFT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define ES_LPAR (ES_LEFT_PARENTHESIS)

/* ) */
#define ES_RIGHT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define ES_RPAR (ES_RIGHT_PARENTHESIS)

/* * */
#define ES_ASTERISK (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define ES_ASTRK (ES_ASTERISK)
#define ES_STAR (ES_ASTERISK)

/* + */
#define ES_PLUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))

/* , */
#define ES_COMMA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define ES_MINUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* . */
#define ES_PERIOD (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define ES_DOT (ES_PERIOD)

/* / */
#define ES_SLASH (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define ES_FSLH (ES_SLASH)

/* 0 */
#define ES_N0 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define ES_N1 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define ES_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define ES_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define ES_N4 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define ES_N5 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define ES_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define ES_N7 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define ES_N8 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define ES_N9 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define ES_COLON (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ; */
#define ES_SEMICOLON (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define ES_SEMI (ES_SEMICOLON)

/* < */
#define ES_LESS_THAN (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define ES_LT (ES_LESS_THAN)

/* = */
#define ES_EQUAL (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* > */
#define ES_GREATER_THAN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define ES_GT (ES_GREATER_THAN)

/* ? */
#define ES_QUESTION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define ES_QMARK (ES_QUESTION)

/* @ */
#define ES_AT_SIGN (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define ES_AT (ES_AT_SIGN)

/* [ */
#define ES_LEFT_BRACKET (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))
#define ES_LBKT (ES_LEFT_BRACKET)

/* \ */
#define ES_BACKSLASH (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define ES_BSLH (ES_BACKSLASH)

/* ] */
#define ES_RIGHT_BRACKET (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define ES_RBKT (ES_RIGHT_BRACKET)

/* ^ */
#define ES_CARET (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

/* _ */
#define ES_UNDERSCORE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define ES_UNDER (ES_UNDERSCORE)

/* ` */
#define ES_GRAVE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* a */
#define ES_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define ES_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define ES_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define ES_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define ES_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define ES_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define ES_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define ES_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define ES_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define ES_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define ES_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define ES_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define ES_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define ES_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define ES_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define ES_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define ES_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* r */
#define ES_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define ES_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define ES_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define ES_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define ES_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define ES_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* x */
#define ES_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define ES_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define ES_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define ES_LEFT_BRACE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))
#define ES_LBRC (ES_LEFT_BRACE)

/* | */
#define ES_PIPE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))

/* } */
#define ES_RIGHT_BRACE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define ES_RBRC (ES_RIGHT_BRACE)

/* ~ */
#define ES_TILDE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))

/* ¡ */
#define ES_INVERTED_EXCLAMATION (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))
#define ES_IEXCL (ES_INVERTED_EXCLAMATION)

/* ¨ */
#define ES_UMLAUT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))

/* ª */
#define ES_FEMININE_ORDINAL_INDICATOR (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define ES_ORDF (ES_FEMININE_ORDINAL_INDICATOR)

/* ¬ */
#define ES_NOT (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))

/* ´ */
#define ES_ACUTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* · */
#define ES_MIDDLE_DOT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define ES_MIDDOT (ES_MIDDLE_DOT)

/* º */
#define ES_MASCULINE_ORDINAL_INDICATOR (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define ES_ORDM (ES_MASCULINE_ORDINAL_INDICATOR)

/* ¿ */
#define ES_INVERTED_QUESTION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))
#define ES_IQMARK (ES_INVERTED_QUESTION)

/* ç */
#define ES_C_CEDILLA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))

/* ñ */
#define ES_N_TILDE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* € */
#define ES_EURO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))
/*#define ES_EURO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))*/
