// Copyright 2022 Tomek (@m40)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7


#define MATRIX_ROW_PINS { B5, B4, E6, D7, C6 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5 }

#define MATRIX_ROW_PINS_RIGHT { D1, D4, C6, D7, B4 }
#define MATRIX_COL_PINS_RIGHT { B5, F7, F6, F5, F4, D2, D3 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST
/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

#define POINTING_DEVICE_INVERT_Y

#define SPLIT_POINTING_ENABLE

#define POINTING_DEVICE_RIGHT

#define PMW33XX_CS_PIN B6

#define PMW33XX_LIFTOFF_DISTANCE 2

#define PMW33XX_CLOCK_SPEED 20000

#define PMW33XX_CPI 1200
