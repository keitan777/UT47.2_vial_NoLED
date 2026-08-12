/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#define VIAL_KEYBOARD_UID {0xCE, 0xA7, 0x01, 0xED, 0x54, 0x99, 0x01, 0x18}

/* Unlock with Esc + Backspace. */
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }

/* Four layers are used; 8-bit layer state is sufficient. */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define LAYER_STATE_8BIT

/* Vial macro storage. */
#define DYNAMIC_KEYMAP_MACRO_COUNT 8

/* Vial Combo and Tap Dance storage. */
#define VIAL_COMBO_ENTRIES 8
#define VIAL_TAP_DANCE_ENTRIES 8

/* Keep Vial communication/storage close to the minimal known-good setup. */
#define VIAL_KEY_OVERRIDE_ENTRIES 0
