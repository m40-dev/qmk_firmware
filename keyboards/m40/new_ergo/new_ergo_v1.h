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
	K000, K001, K002, K003, K004, K005,       K007,			K009, K010, K011, K012, K013, K014, K015, \
	K100, K101, K102, K103, K104, K105, K106, K107,				  K109,  K110, K111, K112, K113, K114, \
	K200, K201, K202, K203, K204, K205, K206, K207,			      K209,  K210, K211, K212, K213, K214, \
	K300, K301, K302, K303, K304, K305, K306, K307,			      K309,  K310, K311, K312, K313, K314, \
	K400, K401, K402, K403,    K405,    K406, K407,			K408, K409,  K410, K412, K413, K414, K415 ) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  KC_NO, K007}, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107}, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207}, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307}, \
	{ K400,  K401,  K402,  K403,  KC_NO, K405,  K406,  K407}, \
    { K015,  K014,  K013,  K012,  K011,  K010,  K009,  KC_NO}, \
	{ K114,  K113,  K112,  K111,  K110,  K109,  KC_NO, KC_NO}, \
	{ K214,  K213,  K212,  K211,  K210,  K209,  KC_NO, KC_NO}, \
	{ K314,  K313,  K312,  K311,  K310,  K309,  KC_NO, KC_NO}, \
	{ K415,  K414,  K413,  K412,  K410,  K409,  K408,  KC_NO} \
}
