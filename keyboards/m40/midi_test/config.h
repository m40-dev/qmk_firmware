// Copyright 2022 Tomek (@m40)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D1, D4, C6, D7, B4 }
#define MATRIX_COL_PINS { B5, F7, F6, F5, F4, D2}

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


#define MIDI_ADVANCED
