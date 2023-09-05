#include QMK_KEYBOARD_H

#include "keymap_us_international_linux.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _BASE_LETTERS 0
#define _BASE_SYMS_LEFT 1
#define _BASE_SYMS_RIGHT 2
#define _MODS_ALT_SYMS_LEFT 3
#define _MODS_ALT_SYMS_RIGHT 4
#define _BASE_NAV 5
#define _MEDIA_NAV_ALT_SYMS 6
#define _MOUSE_NAV 7
#define _FN_NAV 8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │N/A│ Ä │ Ö │ ß │ P │ Y │       │ F │ G │ C │ R │ L │N/A│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │N/A│ A │ O │ E │ U │ I │       │ D │ H │ T │ N │ S │N/A│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │N/A│ Ü │ Q │ J │ K │ X │       │ B │ M │ W │ V │ Z │N/A│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [_BASE_LETTERS] = LAYOUT_split_3x6_3(
        XXXXXXX, US_ADIA, US_ODIA, US_SS,   US_P,    US_Y,                   US_F,    US_G,    US_C,    US_R,    US_L,    XXXXXXX,
        XXXXXXX, US_A,    US_O,    US_E,    US_U,    US_I,                   US_D,    US_H,    US_T,    US_N,    US_S,    XXXXXXX,
        XXXXXXX, US_UDIA, US_Q,    US_J,    US_K,    US_X,                   US_B,    US_M,    US_W,    US_V,    US_Z,    XXXXXXX,
            LT(_MODS_ALT_SYMS_LEFT, KC_ESC), KC_SPC, LT(_BASE_SYMS_LEFT, KC_TAB),
                                        LT(_BASE_SYMS_RIGHT, C(KC_BSPC)), LT(_BASE_NAV, KC_ENTER), LT(_MODS_ALT_SYMS_RIGHT, A(KC_BSPC))
    ),
    [_BASE_SYMS_LEFT] = LAYOUT_split_3x6_3(
        XXXXXXX, US_LCBR, US_RCBR, US_SCLN, US_ASTR, US_MINS,                _______, _______, _______, _______, _______, XXXXXXX,
        XXXXXXX, US_LPRN, US_RPRN, US_DOT,  US_PLUS, US_QUES,                _______, _______, _______, _______, _______, XXXXXXX,
        XXXXXXX, US_LBRC, US_RBRC, US_COMM, US_SLSH, US_UNDS,                _______, _______, _______, _______, _______, XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    ),
    [_BASE_SYMS_RIGHT] = LAYOUT_split_3x6_3(
        XXXXXXX, _______, _______, _______, _______, _______,                US_DQUO, KC_P7,   KC_P8,   KC_P9,   US_BSLS, XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                US_QUOT, KC_P4,   KC_P5,   KC_P6,   KC_P0,   XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                US_EQL,  KC_P1,   KC_P2,   KC_P3,   US_COLN, XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    ),
    [_MODS_ALT_SYMS_LEFT] = LAYOUT_split_3x6_3(
        XXXXXXX, US_EURO, US_PERC, KC_DEL,  US_TILD, US_AMPR,                _______, _______, _______, _______, _______, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, US_PIPE,                _______, _______, _______, _______, _______, XXXXXXX,
        XXXXXXX, US_LABK, US_RABK, US_DLR,  US_HASH, US_EXLM,                _______, _______, _______, _______, _______, XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    ),
    [_MODS_ALT_SYMS_RIGHT] = LAYOUT_split_3x6_3(
        XXXXXXX, _______, _______, _______, _______, _______,                US_ACUT, US_MICR, KC_BSPC, US_CIRC, US_DEG,  XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                US_DGRV, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                US_AT,   US_SUP1, US_SUP2, US_SUP3, US_SECT, XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    ),
    [_BASE_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, _______, _______, _______, _______, _______,                KC_PGUP, KC_HOME, KC_UP,   KC_END,  MO(_MEDIA_NAV_ALT_SYMS), XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, MO(_FN_NAV), XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                KC_NUM,  KC_PSCR, KC_SCRL, KC_PAUS, MO(_MOUSE_NAV), XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    ),
    [_MEDIA_NAV_ALT_SYMS] = LAYOUT_split_3x6_3(
        XXXXXXX, US_YEN,  US_COPY, US_REGD, US_MUL,  US_NOT,                 KC_BRIU, KC_MSTP, KC_VOLU, KC_MPLY, _______, XXXXXXX,
        XXXXXXX, US_QRTR, US_HALF, US_TQTR, US_CENT, US_IQUE,                KC_BRID, KC_MRWD, KC_VOLD, KC_MFFD, _______, XXXXXXX,
        XXXXXXX, US_LDAQ, US_RDAQ, US_PND,  US_DIV,  US_IEXL,                KC_INS,  KC_MPRV, KC_MUTE, KC_MNXT, XXXXXXX, XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    ),
    [_MOUSE_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_ACL2, KC_BTN2, KC_MS_U, KC_BTN1, XXXXXXX,                XXXXXXX, KC_BTN5, KC_WH_U, KC_BTN4, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,                XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_R, _______, XXXXXXX,
        XXXXXXX, KC_ACL0, KC_BTN5, KC_BTN3, KC_BTN4, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    ),
    [_FN_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, _______, _______, _______, _______, _______,                KC_F12,  KC_F7,   KC_F8,   KC_F9,   XXXXXXX, XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                KC_F11,  KC_F4,   KC_F5,   KC_F6,   _______, XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______,                KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, XXXXXXX,
                                       _______, _______, _______,         _______, _______, _______
    )
};

