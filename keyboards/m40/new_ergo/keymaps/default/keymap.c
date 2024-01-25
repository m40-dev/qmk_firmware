// Copyright 2022 Tomek (@m40)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
	_NUMPAD,
	_GAME,
	_FN,
	_MOUSE,
	_LAYERSWITCH
};

enum custom_keycodes {
    DRAG_SCROLL=SAFE_RANGE,
	VOL_CTL,
    TRACKBALL_FLIP,
	DPI_UP,
	DPI_DOWN,
	DPI_RESET
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
			KC_ESC,     KC_1,    KC_2,    KC_3,     KC_4,                   KC_5, 	      KC_MYCM, 		            	KC_6,               KC_7,    KC_8,      KC_9,       KC_0,       KC_DEL,
		    KC_TAB,     KC_W,    KC_L,    KC_R,     KC_B,                   KC_Z,         KC_PSCR, 		               	KC_Y,               KC_Q,    KC_U,      KC_D,       KC_J,       KC_MINS,
			KC_BSPC,    KC_S,    KC_H,    KC_N,     KC_T,                   KC_COMM,      KC_CALC, 	   	            	KC_DOT,             KC_A,    KC_E,      KC_O,       KC_I,       KC_EQL,
		    KC_LSFT,    KC_F, 	 KC_X,    KC_V,     KC_C,                   KC_SLSH,      TO(_LAYERSWITCH), 	        KC_BSLS,            KC_G,    KC_P,      KC_M,       KC_K,       KC_RSFT,
		    KC_LCTL,    KC_LGUI, MO(_FN), KC_LALT,  LT(_NUMPAD, KC_SPC),    MO(_FN),      LT(_MOUSE, KC_ENT),           LT(_MOUSE, KC_ENT), KC_RALT, KC_LEFT,   KC_UP,      KC_DOWN,    KC_RGHT
		),

	[_NUMPAD] = LAYOUT(
			TO(_BASE),  KC_F1,   KC_F2,   KC_F3,    KC_F4,      KC_F5, 	    TO(_BASE),		                            KC_F6,          KC_F7,      KC_F8,      KC_F9,   KC_F10,  KC_NO,
		    KC_TRNS,    KC_P7,   KC_P8,   KC_P9,    KC_PSLS,    KC_PAST,    QK_BOOT,		                            KC_NO,          KC_NO,      KC_UP,      KC_NO,   KC_F11,  KC_NO,
		    KC_CAPS,    KC_P4,   KC_P5,   KC_P6,    KC_PMNS,    KC_PPLS,    KC_TRNS, 	            	                KC_NO, 	        KC_LEFT,    KC_DOWN,    KC_RGHT, KC_F12,  KC_NO,
		    KC_LSFT,    KC_P1,   KC_P2,   KC_P3,    KC_PCMM,    KC_PDOT,    KC_TRNS, 	            	                KC_NO,          KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,
		    KC_LCTL,    KC_TRNS, KC_P0,   KC_TRNS,  KC_TRNS, 	KC_TRNS,    KC_TRNS, 	            	                KC_NO, 	        KC_NO,      KC_NO,      KC_NO, 	 KC_NO,   KC_NO
		),

	[_GAME] = LAYOUT(
			KC_ESC,     KC_1,    KC_2,    KC_3, 	KC_4, 	    KC_5, 	    TO(_BASE),		                            KC_6,           KC_7,       KC_8,       KC_9,    KC_0,    KC_DEL,
		    KC_6, 	    KC_TAB,  KC_Q,    KC_W, 	KC_E, 	    KC_R, 	    KC_H,		            	                KC_BTN1,        KC_BTN2,    KC_BTN3,    KC_D,    KC_J,    KC_MINS,
		    KC_7, 	    KC_NO, 	 KC_A,    KC_S,     KC_D,       KC_F,       KC_G,		            	                DRAG_SCROLL,    KC_A,       KC_E,       KC_O,    KC_I,    KC_EQL,
		    KC_8, 	    KC_LSFT, KC_Z,    KC_X,     KC_C,       KC_V,       KC_M,	            		                KC_BSLS,        KC_G,       KC_P,       KC_M,    KC_K,    KC_RSFT,
		   	KC_LCTL,    KC_Y, 	 KC_T,    KC_LALT,  KC_SPC,  	KC_RCTL,    KC_ENT, 		                            KC_SPC,         KC_RALT, 	KC_LEFT,    KC_UP,   KC_DOWN, KC_RGHT
		),

	[_FN] = LAYOUT(
		   	KC_SLEP,     KC_NO,   KC_MPRV, KC_MPLY,  KC_MNXT,    KC_9, 		 TO(_BASE),      	                		KC_0,       KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,
		   	KC_GRV,      KC_NO,   KC_NO,   KC_VOLU,  KC_NO,      KC_LBRC,    QK_BOOT,	            	    			KC_RBRC,    KC_NO,      KC_PGUP,    KC_NO,   KC_NO,   KC_NO,
		   	KC_DEL,      KC_PSCR, KC_NO,   KC_VOLD,  KC_NO,      KC_SCLN,    KC_NO, 	            	    			KC_QUOT,    KC_HOME,    KC_PGDN,    KC_END,  KC_NO,   KC_NO,
		   	KC_LSFT,     KC_NO,   KC_NO,   KC_NO,    KC_NO,      KC_NO,      KC_NO, 	            					KC_NO,      KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,
		   	KC_LCTL,     KC_LGUI, KC_NO,   KC_TRNS,  KC_NO,      KC_NO,      KC_ENT,		            	            KC_NO,      KC_NO, 	    KC_HOME,    KC_PGUP, KC_PGDN, KC_END
		),

	[_MOUSE] = LAYOUT(
		   	KC_ESC,   	 KC_NO,      KC_NO,      VOL_CTL,    KC_NO,      KC_NO, 		 TO(_BASE), 		            DPI_DOWN,       DPI_UP,     DPI_RESET,  KC_NO,      KC_NO,      TRACKBALL_FLIP,
		   	KC_DEL,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      LCTL(KC_Z),     QK_BOOT,		                KC_BTN1,        KC_BTN2,    KC_BTN3,    KC_NO,      KC_NO,      KC_NO,
		   	KC_BSPC,     LCTL(KC_S), KC_BTN3,    KC_BTN2,    KC_BTN1,    DRAG_SCROLL,    KC_NO,	            	    	DRAG_SCROLL,    LCTL(KC_A), KC_NO,      KC_NO,      KC_NO,      KC_NO,
		   	KC_LSFT,     LCTL(KC_Z), LCTL(KC_X), LCTL(KC_V), LCTL(KC_C), KC_NO,          KC_NO,	            			KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
		   	KC_LCTL,     KC_NO,      KC_NO,      KC_LALT,    KC_BTN1,    KC_NO,          KC_NO,	                	    KC_NO,          KC_NO, 	    KC_HOME,    KC_PGUP,    KC_PGDN,    KC_END
		),

	[_LAYERSWITCH] = LAYOUT(
			TO(_BASE),	 TO(_NUMPAD),	TO(_GAME),	TO(_FN), TO(_MOUSE), KC_NO,	 TO(_BASE),							    KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,	KC_NO,
			KC_NO,       KC_NO,      	KC_NO,   	KC_NO,   KC_NO,		 KC_NO,		 KC_NO,								KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,	KC_NO,
			KC_NO,       KC_NO,      	KC_NO,   	KC_NO,   KC_NO,		 KC_NO,		 KC_NO,								KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,	KC_NO,
			KC_NO,       KC_NO,      	KC_NO,   	KC_NO,   KC_NO,		 KC_NO,		 KC_NO,								KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,	KC_NO,
			KC_NO,       KC_NO,      	KC_NO,   	KC_NO,   KC_NO,		 KC_NO,		 KC_NO,								KC_NO,      KC_NO,      KC_NO,   KC_NO,   KC_NO,	KC_NO
	)
};

static bool scrolling_mode = false;
static bool volume_control = false;

// control if the trackball sensor is flipped to translate the directions accordingly
bool flip_axis = true;

// configuration parameters to make the small moves much slower for precision moves
//(gave up on this at some point because the sensor would sometimes forget to reset cpi back to normal after being in the sensitive mode)
uint16_t precision_threshold = 5; // Distance to cover with lower sensor dpi
uint16_t precision_dpi = 105;
static uint16_t default_dpi = 1200;
static uint16_t current_dpi = 1200;
static uint16_t dpi_step = 200;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    // pointing_device_set_cpi(default_dpi);

    if (flip_axis) {
        mouse_report.x = (mouse_report.x * -1);
        mouse_report.y = (mouse_report.y * -1);
        mouse_report.h = (mouse_report.h * -1);
        mouse_report.v = (mouse_report.v * -1);
    }

    if (scrolling_mode) {
        // pointing_device_set_cpi(precision_dpi);
        mouse_report.h = mouse_report.x;
        mouse_report.v = -mouse_report.y;

		mouse_report.x = 0;
		mouse_report.y = 0;
        return mouse_report;
    }

	if (volume_control) {
		if (mouse_report.y < 0){
			register_code(KC_VOLU);
			unregister_code(KC_VOLU);
		}

		if (mouse_report.y > 0){
			register_code(KC_VOLD);
			unregister_code(KC_VOLD);
		}

		mouse_report.x = 0;
		mouse_report.y = 0;
        return mouse_report;
    }

    pointing_device_set_cpi(current_dpi);

    return mouse_report;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    pointing_device_set_cpi(current_dpi);

    if (keycode == DRAG_SCROLL){
        scrolling_mode = !scrolling_mode;
    }

    if (keycode == VOL_CTL){
        volume_control = !volume_control;
    }

	if (keycode == DPI_RESET){
        current_dpi = default_dpi;
		pointing_device_set_cpi(default_dpi);
    }

	if (keycode == DPI_UP){
        current_dpi = current_dpi + dpi_step;
		pointing_device_set_cpi(current_dpi);
    }
	if (keycode == DPI_DOWN){
        current_dpi = current_dpi - dpi_step;
		pointing_device_set_cpi(current_dpi);
    }

    if (keycode == TRACKBALL_FLIP){
        flip_axis = !flip_axis;
    }

    return true;

}
