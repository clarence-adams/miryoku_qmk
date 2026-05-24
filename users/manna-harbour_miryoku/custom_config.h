// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_ALTERNATIVES_GAME \
KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U,    KC_Y,   KC_QUOT,\
KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E,    KC_I,   KC_O,   \
KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,\
U_NP, U_NP, KC_ESC,KC_SPC,  KC_TAB,KC_ENT, KC_BSPC, LT(U_FUN,KC_DEL), U_NP, U_NP

#define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_GAME
