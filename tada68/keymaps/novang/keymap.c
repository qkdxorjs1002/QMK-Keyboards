#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _NL 1
#define _FL 2
#define _CL 3

#define _______ KC_TRNS
#define FN_CAPS LT(_CL, KC_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer 1
   * ,----------------------------------------------------------------.
   * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Backsp |Ins |
   * |----------------------------------------------------------------|
   * |Tab  | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |Del |
   * |----------------------------------------------------------------|
   * |FNCAPS | A | S | D | F | G | H | J | K | L | ; | ' |Return |PgUp|
   * |----------------------------------------------------------------|
   * |Shift   | Z | X | C | V | B | N | M | , | . | / |Shift |Up |PgDn|
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt |          Space         |Alt|Fn |Ctl|Lft|Dwn|Rgt |
   * `----------------------------------------------------------------'
   */
[_BL] = LAYOUT_ansi(
  KC_GESC,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC,KC_INS, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS,KC_DEL, \
  FN_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_ENT,KC_PGUP,  \
  KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,   KC_RSFT,KC_UP,KC_PGDN, \
  KC_LCTL, KC_LGUI,KC_LALT,                KC_SPC,                        KC_RALT, MO(_FL), KC_RCTRL, KC_LEFT,KC_DOWN,KC_RGHT),

  /* Keymap _NL: (Numpad Layer) Default Layer 2
   * ,----------------------------------------------------------------.
   * |Esc|KP1|KP2|KP3|KP4|KP5|KP6|KP7|KP8|KP9|KP0|KP-|KP+|KP*    |Ins |
   * |----------------------------------------------------------------|
   * |Tab  | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |Del |
   * |----------------------------------------------------------------|
   * |FNCAPS | A | S | D | F | G | H | J | K | L | ; | ' |KPRtrn |PgUp|
   * |----------------------------------------------------------------|
   * |Shift   | Z | X | C | V | B | N | M |KP,|KP.|KP/|NLCK  |Up |PgDn|
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt |          Space         |Alt|Fn |Ctl|Lft|Dwn|Rgt |
   * `----------------------------------------------------------------'
   */
[_NL] = LAYOUT_ansi(
  KC_GESC,    KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,   KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_PMNS, KC_PPLS, KC_PAST,KC_INS, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS,KC_DEL, \
  FN_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_PENT,KC_PGUP,  \
  KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_PCMM,KC_PDOT, KC_PSLS,   KC_NLCK,KC_UP,KC_PGDN, \
  KC_LCTL, KC_LGUI,KC_LALT,                KC_SPC,                        KC_RALT, MO(_FL), KC_RCTRL, KC_LEFT,KC_DOWN,KC_RGHT),

  /* Keymap _FL: Function Layer
   * ,----------------------------------------------------------------.
   * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|PAUSE  |Prsc|
   * |----------------------------------------------------------------|
   * |RGB  |VA-|VA+|SP-|SP+|   |   |   |   |   |   |MO+|MO-|     |Hme |
   * |----------------------------------------------------------------|
   * |       |HU-|HU+|SA-|SA+|   |   |   |   |   |   |   |       |End |
   * |----------------------------------------------------------------|
   * |        |BL-|BL |BL+|   |   |   |   |VL-|VL+|MUT|   MLB|MCU|MRB |
   * |----------------------------------------------------------------|
   * |    |    |    |          Cut           |Cpy|   |Pst|MCL|MCD|MCR |
   * `----------------------------------------------------------------'
   */
[_FL] = LAYOUT_ansi(
  KC_GRV, KC_F1 ,KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUS, KC_PSCR,  \
  RGB_TOG,RGB_VAD,RGB_VAI,RGB_SPD,RGB_SPI,_______,_______,_______,_______,_______,_______,RGB_MOD,RGB_RMOD,_______,KC_HOME, \
  _______,RGB_HUD,RGB_HUI,RGB_SAD,RGB_SAI,_______,_______,_______,_______,_______,_______,_______,        _______,KC_END, \
  _______,BL_DEC ,BL_TOGG,BL_INC ,_______,_______,_______,_______,KC_VOLD,KC_VOLU,KC_MUTE,KC_BTN1,KC_MS_U,KC_BTN2, \
  _______,_______,_______,                 KC_CUT,                KC_COPY,_______,KC_PASTE,KC_MS_L,KC_MS_D,KC_MS_R),

  /* Keymap _CL: CapsLock Layer
   * ,----------------------------------------------------------------.
   * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |MPLY|
   * |----------------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |    |
   * |----------------------------------------------------------------|
   * |       |   |   |   |   |   |   |   |   |   |   |   |       |MNXT|
   * |----------------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |PgU|MPRV|
   * |----------------------------------------------------------------|
   * |    |    |    |                        |_NL|   |_BL|Hme|PgD|End |
   * `----------------------------------------------------------------'
   */
[_CL] = LAYOUT_ansi(
  _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,_______,KC_MPLY,  \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_MNXT, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_PGUP,KC_MPRV, \
  _______,_______,_______,                _______,                DF(_NL),_______,DF(_BL),KC_HOME,KC_PGDN,KC_END),
};