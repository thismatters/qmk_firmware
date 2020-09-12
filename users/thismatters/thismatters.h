#pragma once

#include "quantum.h"

// Layout parts for easy reuse between keyboard keymaps.

// Transparent.
// ┌─────┬─────┬─────┬─────┬─────┐
// │     │     │     │     │     │
// └─────┴─────┴─────┴─────┴─────┘
#define ___________________________________________ _______, _______, _______, _______, _______

// Numbers.
// ┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
// │  1  │  2  │  3  │  4  │  5  │   │  6  │  7  │  8  │  9  │  0  │
// └─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴─────┴─────┘
#define ________________NUMBERS_L__________________ KC_1, KC_2, KC_3, KC_4, KC_5
#define ________________NUMBERS_R__________________ KC_6, KC_7, KC_8, KC_9, KC_0

// F keys.
// ┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
// │ F1  │ F2  │ F3  │ F4  │ F5  │   │ F6  │ F7  │ F8  │ F9  │ F10 │
// └─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴─────┴─────┘
#define ______________________F_L__________________ KC_F1, KC_F2, KC_F3, KC_F4, KC_F5
#define ______________________F_R__________________ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10

// QWERTY.
// ┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
// │  Q  │  W  │  E  │  R  │  T  │   │  Y  │  U  │  I  │  O  │  P  │
// ├─────┼─────┼─────╆━━━━━╅─────┤   ├─────╆━━━━━╅─────┼─────┼─────┤
// │  A  │  S  │  D  ┃  F  ┃  G  │   │  H  ┃  J  ┃  K  │  L  │  ;  │
// ├─────┼─────┼─────╄━━━━━╃─────┤   ├─────╄━━━━━╃─────┼─────┼─────┤
// │  Z  │  X  │  C  │  V  │  B  │   │  N  │  M  │  ,  │  .  │  /  │
// └─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴─────┴─────┘
#define _________________QWERTY_L1_________________ KC_Q, KC_W, KC_E, KC_R, KC_T
#define _________________QWERTY_L2_________________ KC_A, KC_S, KC_D, KC_F, KC_G
#define _________________QWERTY_L3_________________ KC_Z, KC_X, KC_C, KC_V, KC_B

#define _________________QWERTY_R1_________________ KC_Y, KC_U, KC_I, KC_O, KC_P
#define _________________QWERTY_R2_________________ KC_H, KC_J, KC_K, KC_L, KC_SCLN
#define _________________QWERTY_R3_________________ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
// |  !  |  {  |  }  |  #  |  %  |   |  ^  |  &  |  *  |  |  |  "  |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  ~  |  [  |  ]  |  _  |  $  |   |  +  |  -  |  <  |  >  |  '  |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  \  |  (  |  )  |  -  |  |  |   |  =  |  @  |  <  |  >  |  `  |
// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
#define _________________SYMBOL_L1_________________ KC_EXLM, KC_LCBR, KC_RCBR, KC_HASH, KC_PERC
#define _________________SYMBOL_L2_________________ KC_TILD, KC_LBRC, KC_RBRC, KC_UNDS,  KC_DLR
#define _________________SYMBOL_L3_________________ KC_BSLS, KC_LPRN, KC_RPRN, KC_MINS, KC_PIPE

#define _________________SYMBOL_R1_________________ KC_CIRC, KC_AMPR, KC_ASTR, KC_PIPE, KC_DQUO
#define _________________SYMBOL_R2_________________ KC_PLUS, KC_MINS, KC_LABK, KC_RABK, KC_QUOT
#define _________________SYMBOL_R3_________________  KC_EQL,   KC_AT, KC_LABK, KC_RABK,  KC_GRV

// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
// |  !  |  <  |  >  |  ^  |  $  |   |     |     |     |     |  /  |
// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
// |  &  |  /  |  -  |  :  |  |  |   |  B  |  C  |  D  |  E  |  F  |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  %  |  *  |  +  |  .  |  =  |   |  6  |  7  |  8  |  9  |  A  |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  T  |  (  |  )  |  ,  | spc |   |  1  |  2  |  3  |  4  |  5  |
// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
#define __________________HEX_L0___________________ KC_EXLM, KC_LABK, KC_RABK, KC_CIRC, KC_DLR
#define __________________HEX_L1___________________ KC_AMPR, KC_SLSH, KC_MINS, KC_COLN, KC_PIPE
#define __________________HEX_L2___________________ KC_PERC, KC_ASTR, KC_PLUS, KC_DOT,  KC_EQL
#define __________________HEX_L3___________________ KC_T, KC_LPRN, KC_RPRN, KC_COMM, KC_SPC

#define __________________HEX_R0___________________  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH
#define __________________HEX_R1___________________  KC_B, KC_C, KC_D, KC_E, KC_F
#define __________________HEX_R2___________________  KC_6, KC_7, KC_8, KC_9, KC_A
#define __________________HEX_R3___________________  KC_1, KC_2, KC_3, KC_4, KC_5

// We need wrappers in order for these definitions, because they need to be expanded before being used as arguments to the LAYOUT_xxx macro.
#define LAYOUT_ergodox_pretty_wrapper(...) LAYOUT_ergodox_pretty(__VA_ARGS__)
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

// Extra stuff that might be needed.
void     keyboard_post_init_user_keymap(void);
uint32_t layer_state_set_user_keymap(uint32_t state);
