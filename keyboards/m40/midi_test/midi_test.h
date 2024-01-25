// Copyright 2022 Tomek (@m40)
// SPDX-License-Identifier: GPL-2.0-or-later


#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, \
	K100, K101, K102, K103, K104, K105, \
	K200, K201, K202, K203, K204, K205, \
	K300, K301, K302, K303, K304, K305, \
	      K400, K401, K402, K403, K404 ) { \
	{ K005,  K004,  K003,  K002,  K001,  K000}, \
	{ K105,  K104,  K103,  K102,  K101,  K100}, \
	{ K205,  K204,  K203,  K202,  K201,  K200}, \
	{ K305,  K304,  K303,  K302,  K301,  K300}, \
    { K404,  K403,  K402,  K401,  K400, KC_NO }, \
}
