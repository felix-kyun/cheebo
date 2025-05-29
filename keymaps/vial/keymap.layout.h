#include "keycodes.h"
#include "quantum_keycodes.h"
#include QMK_KEYBOARD_H
#define PASS KC_TRNS

typedef enum {
    _QWERTY,
    _NUMBERS,
    _SYMBOLS
} Layers;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
                                            KC_SPC,                                            KC_ENT,
                                                    KC_BSPC,                               MO(_NUMBERS),
                                                            KC_LGUI,                MO(_SYMBOLS)
    ),

    [_NUMBERS] = LAYOUT_split_3x6_3(
        PASS,   KC_1,    KC_2,    KC_3,   KC_4,    KC_5,                                KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   PASS,
        PASS,   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, PASS,                                PASS,   PASS,   PASS,   PASS,   PASS,   PASS,
        PASS,   PASS,    PASS,    PASS,   PASS,    PASS,                                PASS,   PASS,   PASS,   PASS,   PASS,   PASS,
                                          PASS,                                                 PASS,
                                                   PASS,                                PASS,
                                                          PASS,                  PASS
    ),

    [_SYMBOLS] = LAYOUT_split_3x6_3(
        KC_GRV, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),             LSFT(KC_6),     LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0),     PASS,
        PASS,   KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    LSFT(KC_LBRC),          LSFT(KC_RBRC),  PASS,       PASS,       PASS,       LSFT(KC_BSLS),  KC_PEQL,
        PASS,   PASS,       PASS,       PASS,       PASS,       KC_LBRC,                KC_RBRC,        PASS,       PASS,       PASS,       KC_BSLS,        KC_PPLS,
                                                    PASS,                                               PASS,
                                                                PASS,                   PASS,
                                                                        PASS,    PASS
    )
};
