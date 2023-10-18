#include "keycodes.h"
#include "quantum_keycodes.h"
#include QMK_KEYBOARD_H

#include "keymap_german.h"

enum Layers {
    BASE_LETTERS = 0,
    BASE_NAV,
    MOUSE_NAV,
    MEDIA_NAV,
    BASE_NUMS,
    BASE_SYMS,
    ALT_SYMS,
    FUNC_NAV,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE_LETTERS] = LAYOUT_split_3x6_3(
        XXXXXXX, DE_J,         DE_D,          DE_U,            DE_A,            DE_X,                DE_P, DE_H,         DE_L,         DE_M,          DE_W,         XXXXXXX,
        XXXXXXX, DE_C,         DE_T,          LSFT_T(DE_I),    DE_E,            DE_O,                DE_B, DE_N,         LSFT_T(DE_R), DE_S,          DE_G,         XXXXXXX,
        XXXXXXX, LGUI_T(DE_F), LALT_T(DE_V),  ALGR_T(DE_UDIA), LCTL_T(DE_ADIA), DE_ODIA,             DE_Y, LCTL_T(DE_Z), ALGR_T(DE_Q), LALT_T(DE_SS), LGUI_T(DE_K), XXXXXXX,
                         LT(FUNC_NAV, KC_ESC), LT(BASE_NUMS, KC_SPC), LT(MOUSE_NAV, KC_TAB),     LT(BASE_NAV, DE_DOT), LT(BASE_SYMS, KC_ENT), LT(MEDIA_NAV, DE_COMM)
    ),

    [BASE_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, KC_BSPC, KC_UP,   KC_DEL,  KC_PGUP, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, XXXXXXX, XXXXXXX,             KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_ALGR, KC_LCTL, XXXXXXX,             XXXXXXX, KC_HOME, KC_INS,  KC_END,  CW_TOGG, XXXXXXX,
                                       XXXXXXX, KC_SPC,  KC_ENT,     _______, XXXXXXX, XXXXXXX
    ),

    [MOUSE_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_ACL2, KC_BTN2, KC_MS_U, KC_BTN1, XXXXXXX,             XXXXXXX, KC_BTN2, KC_WH_U, KC_BTN1, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,             XXXXXXX, KC_WH_D, KC_WH_D, KC_WH_R, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_ACL0, KC_BTN4, KC_BTN3, KC_BTN5, XXXXXXX,             XXXXXXX, KC_BTN4, KC_BTN3, KC_BTN5, XXXXXXX, XXXXXXX,
                                       XXXXXXX, XXXXXXX, _______,     XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [MEDIA_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, QK_RBT,  XXXXXXX, KC_BRIU, XXXXXXX, XXXXXXX,             XXXXXXX, KC_MSTP, KC_VOLU, KC_MPLY, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID, XXXXXXX, XXXXXXX,             XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT, XXXXXXX, XXXXXXX,
        XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,
                                       XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, _______
    ),

    [BASE_NUMS] = LAYOUT_split_3x6_3(
        XXXXXXX, DE_A,    DE_B,    DE_C,         DE_F,            DE_D,                DE_O, DE_7,         DE_8,         DE_9,         DE_QUOT,        XXXXXXX,
        XXXXXXX, DE_D,    DE_E,    LSFT_T(DE_F), DE_DOT,          DE_COMM,             DE_X, DE_4,         LSFT_T(DE_5), DE_6,         DE_UNDS,        XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, ALGR_T(DE_E), LCTL_T(DE_PLUS), DE_MINS,             DE_B, LCTL_T(DE_1), ALGR_T(DE_2), LALT_T(DE_3), LGUI_T(DE_DOT), XXXXXXX,
                                                    XXXXXXX, _______, XXXXXXX,     XXXXXXX, DE_0, XXXXXXX
    ),

    [BASE_SYMS] = LAYOUT_split_3x6_3(
        XXXXXXX, DE_AT,   DE_LABK, DE_RABK, DE_ASTR, DE_SLSH,             DE_DQUO, DE_QUES, DE_LCBR, DE_RCBR, DE_SCLN, XXXXXXX,
        XXXXXXX, DE_EXLM, DE_LPRN, DE_RPRN, DE_PLUS, DE_MINS,             DE_QUOT, DE_EQL,  DE_LBRC, DE_RBRC, DE_COLN, XXXXXXX,
        XXXXXXX, DE_TILD, DE_PIPE, DE_AMPR, DE_CIRC, DE_PERC,             DE_GRV,  DE_HASH, DE_DLR,  DE_EURO, DE_BSLS, XXXXXXX,
                            DE_UNDS, KC_SPC, LT(ALT_SYMS, KC_ENT),     XXXXXXX, _______, XXXXXXX
    ),

    [ALT_SYMS] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DE_MICR,             DE_SECT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DE_DEG,  XXXXXXX,             DE_ACUT, XXXXXXX, DE_SUP2, DE_SUP3, XXXXXXX, XXXXXXX,
                                       XXXXXXX, XXXXXXX, _______,     XXXXXXX, _______, XXXXXXX
    ),

    [FUNC_NAV] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, XXXXXXX, XXXXXXX,             KC_SCRL, KC_F4, KC_F5, KC_F6, KC_F11, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_ALGR, KC_LCTL, XXXXXXX,             KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F12, XXXXXXX,
                                       _______, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    )
};
