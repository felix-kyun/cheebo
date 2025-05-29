// Copyright 2024 Praise Jacob (@Felix-Kyun)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#define LED GP25

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_RALT, KC_SPC, KC_SPC, KC_BSPC, KC_ENT)};

// code to control the LED
void keyboard_post_init_user(void) {
    setPinOutput(LED);    // Set the LED pin as output
    writePin(LED, false); // Turn the LED off initially
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    writePin(LED, record->event.pressed);
    return true;
}