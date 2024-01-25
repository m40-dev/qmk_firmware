// Copyright 2022 Tomek (@m40)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
		//┌────────┬────────┬────────┬────────┬────────┬───────
			MI_ON,    MI_OFF,    MI_VL5,    KC_4,    KC_5, 	QK_BOOT,
		//├────────┼────────┼────────┼────────┼────────┼───────
		    MI_C,    MI_D,    MI_E,    MI_F,    MI_G, 	MI_A,
		//├────────┼────────┼────────┼────────┼────────┼───────
			KC_1,    KC_2,    KC_3,    KC_4,    KC_5, 	KC_6,
		//├────────┼────────┼────────┼────────┼────────┼───────
		    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, 	KC_6,
		//├────────┼────────┼────────┼────────┼────────┼──────
		             KC_1,    KC_2,    MI_VELU, MI_VELD,    KC_5
		//└────────┴────────┴────────┴────────┴────────┴──────┘
		)
};
