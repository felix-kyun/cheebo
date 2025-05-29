// Copyright 2024 Praise Jacob (@Felix-Kyun)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#include "keymap.layout.h"
#define LED GP25

// code to control the LED
void keyboard_post_init_user(void) {
    setPinOutput(LED);    // Set the LED pin as output
    writePin(LED, false); // Turn the LED off initially
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    writePin(LED, record->event.pressed);
    return true;
}
