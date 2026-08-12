/* Copyright 2018 Carlos Filoteo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */
#pragma once

/* USB descriptor compatibility for the Vial-QMK AVR descriptor code.
 * The canonical values are also kept in keyboard.json.
 */
#define VENDOR_ID       0xA103
#define PRODUCT_ID      0x0472
#define DEVICE_VER      0x0002
#define MANUFACTURER    "Keyhive"
#define PRODUCT         "UT47.2 NoLED"

#define DEBOUNCE 5

/* AVR SRAM optimization: these features are not used by the Vial keymap. */
#define NO_ACTION_ONESHOT

/* Mechanical lock-switch support is not used; regular KC_CAPS is used. */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* Four layers are used, so 8-bit layer state is sufficient. */
#define LAYER_STATE_8BIT

/* Vial dynamic feature limits for this test build. */
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 12
#define DYNAMIC_KEYMAP_MACRO_COUNT 6

/* No RGB/WS2812/LED functionality. */
