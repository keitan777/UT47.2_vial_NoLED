/* Copyright 2018 Carlos Filoteo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */
#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xA103
#define PRODUCT_ID      0x0472
#define DEVICE_VER      0x0002
#define MANUFACTURER    Keyhive
#define PRODUCT         UT47.2 NoLED
#define DESCRIPTION     An awesome 40% keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { D1, D2, D3, D4 }
#define MATRIX_COL_PINS { C4, C5, B7, B6, B5, B4, B3, B2, B1, B0, D6, D5 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

/* Mechanical locking support */
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

/* Intentionally no RGB/WS2812 definitions in Stage 1. */
