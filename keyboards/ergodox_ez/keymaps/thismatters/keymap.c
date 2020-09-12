
#include QMK_KEYBOARD_H
#include "thismatters.h"

enum layers {
    BASE,
    RAISE,
    LOWER,
    GAME
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox_pretty_wrapper(
  KC_ESCAPE, ________________NUMBERS_L__________________, XXXXXXX,       TG(LOWER), ________________NUMBERS_R__________________, KC_MINS,
     KC_TAB, _________________QWERTY_L1_________________, KC_EQL,          XXXXXXX, _________________QWERTY_R1_________________, KC_BSLS,
   KC_LCTRL, _________________QWERTY_L2_________________,                           _________________QWERTY_R2_________________, KC_QUOT,
    KC_LSFT, _________________QWERTY_L3_________________, KC_SPC,          KC_BSPC, _________________QWERTY_R3_________________, KC_RSFT,
  MO(LOWER), KC_GRAVE, KC_LALT, MO(RAISE), KC_LGUI,                                        MO(RAISE), KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,
                                                  KC_LCTL, KC_LALT,       KC_RALT, KC_RCTL,
                                                           KC_HOME,       KC_PGUP,
                                          KC_BSPC, KC_DEL,  KC_END,       KC_PGDN, KC_ENT, KC_SPC
),
// SYMBOLS
[RAISE] = LAYOUT_ergodox_pretty_wrapper(
  _______, ______________________F_L__________________,  KC_F11,         KC_F12, ______________________F_R__________________, _______,
  _______, _________________SYMBOL_L1_________________, _______,       TG(GAME), _________________SYMBOL_R1_________________, _______,
  _______, _________________SYMBOL_L2_________________,                          _________________SYMBOL_R2_________________, _______,
  _______, _________________SYMBOL_L3_________________, _______,        _______, _________________SYMBOL_R3_________________, _______,
  XXXXXXX, _______, _______, _______, _______,                                            _______, _______, _______, _______, _______,
                                                  _______, _______,   _______, _______,
                                                           _______,   _______,
                                         _______, _______, _______,   _______, _______, _______
),

// HEX
[LOWER] = LAYOUT_ergodox_pretty_wrapper(
  _______, __________________HEX_L0___________________, _______,         _______, __________________HEX_R0___________________, _______,
  _______, __________________HEX_L1___________________, XXXXXXX,         XXXXXXX, __________________HEX_R1___________________, _______,
  _______, __________________HEX_L2___________________,                           __________________HEX_R2___________________, _______,
  _______, __________________HEX_L3___________________, XXXXXXX,         XXXXXXX, __________________HEX_R3___________________, _______,
  _______, _______, _______, XXXXXXX, _______,                                             XXXXXXX, _______, _______, _______, _______,
                                                  _______, _______,   _______, _______,
                                                           _______,   _______,
                                        _______, _______,  _______,   _______, _______, KC_0
),

[GAME] = LAYOUT_ergodox_pretty_wrapper(
  _______, ________________NUMBERS_L__________________, _______,         _______, KC_T, KC_G, KC_B, KC_V, KC_C, _______,
  _______, KC_Q, KC_W, KC_E, KC_R, KC_6, KC_T,                           _______, ___________________________________________, _______,
  _______, KC_A, KC_S, KC_D, KC_F, KC_7,                                          ___________________________________________, _______,
  _______, KC_Z, KC_X, KC_0, KC_9, KC_8, KC_G,                           XXXXXXX, ___________________________________________, _______,
  XXXXXXX, _______, _______, XXXXXXX, _______,                                             _______, _______, _______, _______, _______,
                                                  _______, _______,   _______, _______,
                                                           _______,   _______,
                                          KC_SPC, KC_SPC,  _______,   _______, _______, _______
)

};


// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(layer_state_t state) {
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
      case 1:
        ergodox_right_led_3_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        ergodox_right_led_2_on();
        break;
      default:
        break;
    }

  return state;
};

bool led_update_user(led_t led_state) {
    if (led_state.caps_lock) {
        ergodox_right_led_1_on();
    } else {
        ergodox_right_led_1_off();
    }
    return true;
};

enum combos {
  SHIFTS_CAPS,
};

const uint16_t PROGMEM shifts_combo[] = {KC_LSFT, KC_RSFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [SHIFTS_CAPS] = COMBO(shifts_combo, KC_CAPS)
};
