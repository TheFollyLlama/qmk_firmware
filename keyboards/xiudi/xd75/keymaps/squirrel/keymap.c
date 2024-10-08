/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _QW,
    _FN
};

#define KC_SPAL LALT_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
        KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,   KC_BSLS, KC_VOLU,  KC_SLSH,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,   KC_LBRC, KC_VOLD,  KC_RBRC,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
        KC_ESC,  KC_A,    KC_S,    KC_D,   KC_F,    KC_G,   KC_HOME, KC_MUTE,  KC_PGUP,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,   KC_END,  KC_MPLY,  KC_PGDN,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_RSFT,
        KC_LCTL, MO(_FN), KC_LGUI, KC_NO,  KC_SPAL, KC_SPC, KC_ENT,  KC_NO,    KC_DEL,   KC_BSPC, KC_SLSH, KC_LGUI, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
        KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_NO,   KC_NO,   KC_NO,   KC_NLCK, KC_SLSH, KC_ASTR, KC_MINS, KC_NO,   RESET,
        KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_HOME, KC_PGUP, KC_P7,   KC_P8,   KC_P9,   KC_PLUS, KC_NO,   KC_NO,
        KC_CAPS, RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, KC_DEL,  KC_END,  KC_PGDN, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, KC_NO,   KC_NO,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_TRNS, KC_NO,
        KC_TRNS, MO(_FN), KC_NO,    KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_P0,   KC_P0,   KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
