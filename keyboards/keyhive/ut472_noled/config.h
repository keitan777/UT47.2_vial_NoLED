/* Copyright 2018 Carlos Filoteo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */
#pragma once

/* USB Device descriptor is defined by keyboard.json. */
#define DEBOUNCE 5

/* AVR SRAM optimization: these features are not used by the Vial keymap. */
#define NO_DEBUG
#define NO_PRINT
#define NO_ACTION_ONESHOT

/* Mechanical lock-switch support is not used; regular KC_CAPS is used. */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* Four layers are used, so 8-bit layer state is sufficient. */
#define LAYER_STATE_8BIT

/* Intentionally no RGB/WS2812 definitions in Stage 2 NoLED. */
