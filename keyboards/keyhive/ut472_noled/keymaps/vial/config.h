/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#define VIAL_KEYBOARD_UID {0xCE, 0xA7, 0x01, 0xED, 0x54, 0x99, 0x01, 0x18}

/* Unlock with Esc + Backspace. */
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }

/* Four layers are used; 8-bit layer state is sufficient. */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define LAYER_STATE_8BIT

/* Keep the Vial feature set intentionally small for ATmega32U2. */
#define VIAL_TAP_DANCE_ENTRIES 12
#define VIAL_COMBO_ENTRIES 12
#define VIAL_KEY_OVERRIDE_ENTRIES 4
