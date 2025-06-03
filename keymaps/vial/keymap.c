// Copyright 2024 Praise Jacob (@Felix-Kyun)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#include "keymap.layout.h"
#include "transactions.h"

#define LED GP25

/////////// FOR ONBOARD LED ////////////
// basically on every keypress the onboaord led light up
// and on keydown it goes off

/* custom transactions for controlling led on slave */

/* transactions handlers */
void txn_handle_led_on(uint8_t initiator, const void *data, uint8_t len, void *unused) {
    writePin(LED, true); // Turn the LED on
}

void txn_handle_led_off(uint8_t initiator, const void *data, uint8_t len, void *unused) {
    writePin(LED, false); // Turn the LED off
}

/* led events */
void led_on(void) {
    writePin(LED, true);
    transaction_rpc_send(TXN_LED_ON, 0, NULL);
}

void led_off(void) {
    writePin(LED, false);
    transaction_rpc_send(TXN_LED_OFF, 0, NULL);
}

/* keyboard routines */
void keyboard_post_init_user(void) {
    // initialize led pinout
    setPinOutput(LED);
    writePin(LED, false);

    // register txn handlers
    transaction_register_rpc(TXN_LED_ON, txn_handle_led_on);
    transaction_register_rpc(TXN_LED_OFF, txn_handle_led_off);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    writePin(LED, record->event.pressed);
    const uint8_t key_pressed = record->event.pressed;
    if (key_pressed)
        led_on();
    else
        led_off();
    return true;
}
