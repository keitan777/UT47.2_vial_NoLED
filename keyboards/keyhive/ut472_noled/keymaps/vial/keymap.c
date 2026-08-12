/* Copyright 2018 Carlos Filoteo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0 - UT47.2_kei777.vil */
  LAYOUT(
    KC_GESC,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPACE,
    LCTL_T(KC_TAB), KC_A, KC_S,    KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_MINUS,  KC_ENTER,
    KC_LSHIFT, KC_Z,    KC_X,      KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMMA,  KC_DOT,   KC_SLASH,  RSFT_T(KC_BSLASH),
    KC_LCTRL, KC_LGUI,  KC_APPLICATION, KC_LALT, LT2(KC_SPACE), KC_SPACE, LT1(KC_SPACE), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
  ),

  /* Layer 1 */
  LAYOUT(
    KC_GRAVE, KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DELETE,
    KC_CAPSLOCK, KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_EQUAL,  KC_NO,
    KC_LSHIFT, KC_NO,   KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_SCOLON, KC_QUOTE, KC_LBRACKET, KC_RBRACKET, KC_BSLASH, KC_RSHIFT,
    KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDOWN, KC_PGUP, KC_END
  ),

  /* Layer 2 */
  LAYOUT(
    LSFT(KC_GRAVE), LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), KC_PSCREEN,
    KC_NUMLOCK, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  /* Layer 3 - NoLED adaptation of UT47.2_kei777.vil.
   * RGB keycodes from the source .vil are intentionally omitted because
   * this firmware is the NoLED variant.
   */
  LAYOUT(
    QK_BOOT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};
