    /* Copyright 2020 foostan
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
#include "icons.h"
#include QMK_KEYBOARD_H
#define TAPPING_TERM 200  // Time in milliseconds (e.g., 150 for faster response)
#define HOLD_ON_OTHER_KEY_PRESS
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_SPC):
            if (record->tap.count && record->event.pressed) {
                return true;  // Allow normal tap (Space)
            } else if (record->event.pressed) {
                tap_code(KC_TAB);  // Override hold with Tab
                return false;
            }
            return true;
    }
    return true;
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    uint8_t layer = get_highest_layer(layer_state);

    // Debug check (optional): show current layer number
    // char buf[4];
    // snprintf(buf, sizeof(buf), "%d", layer);
    // oled_write_ln(buf, false);

    switch (layer) {
        case 0:
            oled_write_raw_P(home_layer_icon, sizeof(home_layer_icon));
            break;
        case 1:
            oled_write_raw_P(number_layer_icon, sizeof(number_layer_icon));
            break;
        case 2:
            oled_write_raw_P(symbol_layer_icon, sizeof(symbol_layer_icon));
            break;
        case 3:
            oled_write_raw_P(function_layer_icon, sizeof(function_layer_icon));
            break;
        default:
            oled_write_raw_P(home_layer_icon, sizeof(home_layer_icon));
            break;
    }

    if (host_keyboard_led_state().caps_lock) {
        oled_write_raw_P(caps_lock_on_icon, sizeof(caps_lock_on_icon));
    }

    return false;
}
#endif



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_ESC,  KC_W,    KC_L,    KC_Y,    KC_P,    KC_B,                         KC_Z,    KC_F,    KC_O,    KC_U,    KC_QUOT,   KC_LALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_C,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,     KC_I,    KC_A,   KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_Q,    KC_J,    KC_V,    KC_D,    KC_K,                         KC_X,    KC_H, KC_PSLS, MT(MOD_LSFT, KC_COMM) ,  MT(MOD_LSFT, KC_DOT), LT(3, KC_NO),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
             LT(1, KC_LGUI), MT(MOD_LCTL, KC_NO), LT(1, KC_SPC),     KC_BSPC,  MT(MOD_LSFT, KC_NO), LT(2, KC_NO)
                                      //|--------------------------|  |--------------------------|
  ),

  [1] = LAYOUT(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
        KC_NO,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_NO, KC_NO, KC_NO,   KC_NO, XXXXXXX, XXXXXXX,    
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_NO,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_PSLS, KC_PMNS, KC_PAST, KC_PPLS, KC_NO,                          XXXXXXX, XXXXXXX, XXXXXXX, KC_PCMM, MT(MOD_LSFT, KC_DOT), KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
             LT(1, KC_LGUI), MT(MOD_LCTL, KC_NO), LT(1, KC_SPC),     KC_BSPC,  MT(MOD_LSFT, KC_NO), LT(2, KC_NO)
                                      //|--------------------------|  |--------------------------|
  ),

  [2] = LAYOUT(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_NO, S(KC_1), S(KC_COMM), S(KC_4), S(KC_DOT), S(KC_2),                   KC_NO, KC_LBRC, S(KC_MINS), KC_RBRC, S(KC_BSLS), KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_MINS, KC_BSLS, S(KC_9), XXXXXXX, S(KC_0), S(KC_3),                     S(KC_5), S(KC_LBRC),  KC_PEQL, S(KC_RBRC), KC_SCLN, S(KC_SCLN),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_PSLS, KC_PMNS, KC_PAST, KC_PPLS, KC_GRV,                         S(KC_GRV), S(KC_7), S(KC_6), KC_PCMM, MT(MOD_LSFT, KC_DOT), S(KC_SLSH),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
             LT(1, KC_LGUI), MT(MOD_LCTL, KC_NO), LT(1, KC_SPC),     KC_BSPC,  MT(MOD_LSFT, KC_NO), LT(2, KC_NO)
                                      //|--------------------------|  |--------------------------|
  ),

  [3] = LAYOUT(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_F1,   KC_F2,     KC_F3,   KC_F4,  KC_F5,  KC_F6,                       KC_F7,    KC_F8,   KC_F9,  KC_F10 ,  KC_F11 , KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS, XXXXXXX, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_PGUP,  KC_UP  , KC_PGDN, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,                      KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|

               LT(1, KC_LGUI), MT(MOD_LCTL, KC_NO), LT(1, KC_SPC),     KC_BSPC,  MT(MOD_LSFT, KC_NO), LT(2, KC_NO)
                                    //|--------------------------|  |--------------------------|
  )
};
