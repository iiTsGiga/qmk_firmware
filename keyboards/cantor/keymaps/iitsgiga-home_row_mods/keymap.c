#include "keycodes.h"
#include QMK_KEYBOARD_H

#include "keymap_us_international_linux.h"

#define _BASE_LETTERS 0
#define _BASE_NAV 1
#define _MOUSE_NAV 2
#define _MEDIA_NAV 3
#define _BASE_NUMS 4
#define _BASE_SYMS 5
#define _ALT_SYMS 6
#define _FUNC_NAV 7

#define MY_QUOT US_ACUT
#define MY_DQUO S(US_ACUT)
#define MY_ACUT ALGR(US_QUOT)
#define MY_DIAE S(ALGR(US_QUOT))
#define MY_GRV US_DGRV
#define MY_TILD S(US_DGRV)
#define MY_CIRC S(US_6)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Dvorak: */
    /*
    [_BASE_LETTERS] = LAYOUT_split_3x6_3(
        XXXXXXX, US_ADIA,      US_ODIA,      US_SS,        US_P,         US_Y,             US_F, US_G,         US_C,         US_R,         US_L,         XXXXXXX,
        XXXXXXX, LGUI_T(US_A), LALT_T(US_O), LSFT_T(US_E), LCTL_T(US_U), US_I,             US_D, LCTL_T(US_H), LSFT_T(US_T), LALT_T(US_N), LGUI_T(US_S), XXXXXXX,
        XXXXXXX, US_UDIA,      US_Q,         US_J,         US_K,         US_X,             US_B, US_M,         US_W,         US_V,         US_Z,         XXXXXXX,
             LT(_FUNC_NAV, KC_ESC), LT(_BASE_NUMS, KC_SPC), LT(_BASE_NAV, KC_TAB),     LT(_MOUSE_NAV, KC_ENT), LT(_BASE_SYMS, US_DOT), LT(_MEDIA_NAV, US_COMM)
    ),
    */

    /* Bone: */
    [_BASE_LETTERS] = LAYOUT_split_3x6_3(
        XXXXXXX, US_J,         US_D,         US_U,         US_A,         US_X,                US_P, US_H,         US_L,         US_M,         US_W,         XXXXXXX,
        XXXXXXX, LGUI_T(US_C), LALT_T(US_T), LSFT_T(US_I), LCTL_T(US_E), US_O,                US_B, LCTL_T(US_N), LSFT_T(US_R), LALT_T(US_S), LGUI_T(US_G), XXXXXXX,
        XXXXXXX, US_F,         US_V,         US_UDIA,      US_ADIA,      US_ODIA,             US_Y, US_Z,         US_Q,         US_SS,        US_K,         XXXXXXX,
               LT(_FUNC_NAV, KC_ESC), LT(_BASE_NUMS, KC_SPC), LT(_MOUSE_NAV, KC_TAB),     LT(_BASE_NAV, US_DOT), LT(_BASE_SYMS, KC_ENT), LT(_MEDIA_NAV, US_COMM)
    ),

    [_BASE_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_BSPC, XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX,             XXXXXXX, KC_BSPC, KC_UP,   KC_DEL,  KC_PGUP, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,             KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, KC_HOME, KC_INS,  KC_END,  CW_TOGG, XXXXXXX,
                                       XXXXXXX, XXXXXXX, _______,     XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [_MOUSE_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_ACL2, KC_BTN2, KC_MS_U, KC_BTN1, XXXXXXX,             XXXXXXX, KC_BTN5, KC_WH_U, KC_BTN4, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,             XXXXXXX, KC_WH_D, KC_WH_D, KC_WH_R, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_ACL0, KC_BTN5, KC_BTN3, KC_BTN4, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                       XXXXXXX, XXXXXXX, XXXXXXX,     _______, XXXXXXX, XXXXXXX
    ),

    [_MEDIA_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, QK_RBT,  XXXXXXX, KC_BRIU, XXXXXXX, XXXXXXX,             XXXXXXX, KC_MSTP, KC_VOLU, KC_MPLY, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID, XXXXXXX, XXXXXXX,             XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT, XXXXXXX, XXXXXXX,
        XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,
                                       XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, _______
    ),

    [_BASE_NUMS] = LAYOUT_split_3x6_3(
        XXXXXXX, US_A,         US_B,         US_C,         US_F,           US_D,                US_B, US_7, US_8,         US_9, MY_QUOT, XXXXXXX,
        XXXXXXX, LGUI_T(US_D), LALT_T(US_E), LSFT_T(US_F), LCTL_T(US_DOT), US_COMM,             US_O, US_4, LSFT_T(US_5), US_6, US_UNDS, XXXXXXX,
        XXXXXXX, XXXXXXX,      XXXXXXX,      US_E,         US_PLUS,        US_MINS,             US_X, US_1, US_2,         US_3, US_DOT,  XXXXXXX,
                                                             XXXXXXX, _______, XXXXXXX,     XXXXXXX, US_0, XXXXXXX
    ),

    [_BASE_SYMS] = LAYOUT_split_3x6_3(
        XXXXXXX, US_EXLM, US_LABK, US_RABK, US_ASTR, US_SLSH,             MY_DQUO, US_QUES, US_LCBR, US_RCBR, US_SCLN, XXXXXXX,
        XXXXXXX, US_PIPE, US_LPRN, US_RPRN, US_PLUS, US_MINS,             MY_QUOT, US_EQL,  US_LBRC, US_RBRC, US_COLN, XXXXXXX,
        XXXXXXX, US_AMPR, US_AT,   MY_TILD, MY_CIRC, US_PERC,             MY_GRV,  US_DLR,  US_HASH, US_PERC, US_BSLS, XXXXXXX,
                                 XXXXXXX, US_UNDS, MO(_ALT_SYMS),     XXXXXXX, _______, XXXXXXX
    ),

    [_ALT_SYMS] = LAYOUT_split_3x6_3(
        XXXXXXX, US_IEXL, US_LDAQ, US_RDAQ, US_MUL,  US_DIV,              US_ETH,  US_IQUE, US_SECT, US_CURR, US_PND,  XXXXXXX,
        XXXXXXX, US_BRKP, US_LSQU, US_RSQU, US_OSTR, US_MICR,             US_SECT, US_QRTR, US_HALF, US_TQTR, US_EURO, XXXXXXX,
        XXXXXXX, US_REGD, US_COPY, US_NOT,  US_DEG,  US_CENT,             MY_ACUT, US_SUP1, US_SUP2, US_SUP3, US_YEN,  XXXXXXX,
                                       XXXXXXX, XXXXXXX, _______,     XXXXXXX, _______, XXXXXXX
    ),

    [_FUNC_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,             KC_SCRL, KC_F4, KC_F5, KC_F6, KC_F11, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F12, XXXXXXX,
                                       _______, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    )
};
