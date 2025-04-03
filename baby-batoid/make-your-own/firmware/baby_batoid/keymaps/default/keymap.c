// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *
     */
    [0] = LAYOUT(
        KC_Q,KC_W,KC_E,KC_T,KC_U,KC_I,KC_O,KC_BACKSPACE,
        KC_A,KC_S,KC_D,KC_F,KC_J,KC_K,KC_L,KC_P,
        KC_LEFT_SHIFT,KC_Z,KC_X,KC_C,KC_N,KC_NO,KC_NO,KC_ENTER,
        KC_LEFT_CTRL,KC_SPACE,KC_B,KC_SPACE,KC_RIGHT_CTRL
    ) //the 3rd key on the last row is ACTUALLY the 5th key on the 3rd row!!!
};
const uint16_t PROGMEM test_combo1[] = {KC_Q, KC_W, COMBO_END};
combo_t key_combos[] = {
        COMBO(test_combo1, KC_ESC)
};