#include "keymap_common.h"

/* An Atreus right-handed layout designed mostly to reduce wrist and pinky RSI
 * by helping you to stay closer to home-row.
 *
 * This is achieved mostly by relying on dual-role keys, but only on the less
 * used or non-alphanumeric ones to avoid conflicts or activating incorrect
 * key-codes.
 *
 * https://en.wikipedia.org/wiki/Modifier_key#Dual-role_keys
 *
 * Build:
 * $ make upload KEYMAP=guillotine USB=/path/to/usb
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * Layer 0: Default/Main (Dvorak) layer (mostly letters and modifiers)
   * .--------------------------------------------.       .-------------------------------.
   * |' (FN2)      |, (FN3)|. (FN4)|P  |Y         |       |F  |G  |C   |R   |L            |
   * |--------------------------------------------|       |-------------------------------|
   * |A            |O      |E      |U  |I         |       |D  |H  |T   |N   |S            |
   * |--------------------------------------------|       |-------------------------------|
   * |; SHIFT (FN5)|Q      |J      |K  |X         |       |B  |M  |W   |V   |Z SHIFT (FN6)|
   * |--------------------------------------------+-------+-------------------------------|
   * |LCTRL        |LALT   |LGUI   |FN0|TAB (FN11)|ESC|FN1|SPC|FN0|RGUI|RALT|RCTRL        |
   * '------------------------------------------------------------------------------------'
   */
  KEYMAP( \
    KC_FN2, KC_FN3, KC_FN4, KC_P,  KC_Y,                 KC_F,  KC_G,  KC_C,   KC_R,   KC_L, \
    KC_A,   KC_O,   KC_E,   KC_U,  KC_I,                 KC_D,  KC_H,  KC_T,   KC_N,   KC_S, \
    KC_FN5, KC_Q,   KC_J,   KC_K,  KC_X,                 KC_B,  KC_M,  KC_W,   KC_V,   KC_FN6, \
    KC_LCTL,KC_LALT,KC_LGUI,KC_FN0,KC_FN11,KC_ESC,KC_FN1,KC_SPC,KC_FN0,KC_RGUI,KC_RALT,KC_RCTL \
  ), \

  /*
   * Layer 1 (layover on FN0 and switch on FN1)
   * LHS: F1-F15
   * RHS: Movement
   * SPC -> ESC
   * .----------------------------.         .--------------------------------.
   * |F1   |F2  |F3  |F4    |F5   |         |   |GUI+LEFT|PGDN|PGUP|GUI+RIGHT|
   * |----------------------------|         |--------------------------------|
   * |F6   |F7  |F8  |F9    |F10  |         |   |LEFT    |DOWN|UP  |RIGHT    |
   * |----------------------------|         |--------------------------------|
   * |F11  |F12 |F13 |F14   |F15  |         |   |        |END |HOME|         |
   * |----------------------------+---------+--------------------------------|
   * |TRNS |TRNS|TRNS|>TRNS<|TRNS |TRNS|TRNS|ESC|>TRNS<  |TRNS|TRNS|TRNS     |
   * '-----------------------------------------------------------------------'
   */
  KEYMAP( \
    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                  KC_NO, KC_FN8, KC_PGDN,KC_PGUP,KC_FN9, \
    KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,                 KC_NO, KC_LEFT,KC_DOWN,KC_UP,  KC_RIGHT, \
    KC_F11, KC_F12, KC_F13, KC_F14, KC_F15,                 KC_NO, KC_NO,  KC_END, KC_HOME,KC_F13, \
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_ESC,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS \
  ), \

 /*
  * Layer 2 (FN2): Numbers while pressing and "'" on tap
   * .------------------------.         .------------------------.
   * |>'< |    |    |    |    |         |    |7   |8   |9   |0   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |+   |4   |5   |6   |=   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |-   |1   |2   |3   |    |
   * |------------------------+---------+------------------------|
   * |TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
   * '-----------------------------------------------------------'
   */
  KEYMAP( \
    KC_FN2, KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,        KC_7,   KC_8,   KC_9,   KC_0, \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  SHIFT(KC_EQL),KC_4,   KC_5,   KC_6,   KC_EQL, \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_MINUS,     KC_1,   KC_2,   KC_3,   KC_NO, \
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_ENT,       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS \
  ), \

  /*
   * Layer 3 (FN3): Symbols (numbers shifted) while pressing and "," on tap
   * .------------------------.         .------------------------.
   * |    |>,< |    |    |    |         |    |&   |*   |    |    |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |    |%   |%   |^   |    |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |    |!   |@   |#   |    |
   * |------------------------+---------+------------------------|
   * |TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
   * '-----------------------------------------------------------'
   */
  KEYMAP( \
    KC_NO,  KC_FN3, KC_NO,  KC_NO,  KC_NO,                  KC_NO,  SHIFT(KC_7),SHIFT(KC_8),KC_NO,      KC_NO, \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  SHIFT(KC_4),SHIFT(KC_5),SHIFT(KC_6),KC_NO, \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  SHIFT(KC_1),SHIFT(KC_2),SHIFT(KC_3),KC_NO, \
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS \
  ), \

  /*
   * Layer 4 (FN4): Symbols while pressing and "." on tap
   * .------------------------.         .------------------------.
   * |    |    |>.< |    |    |         |    |{   |}   |(   |)   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |?   |[   |]   |`   |~   |
   * |------------------------|         |------------------------|
   * |    |    |    |    |    |         |_   |/   |\   ||   |    |
   * |------------------------+---------+------------------------|
   * |TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
   * '-----------------------------------------------------------'
   */
  KEYMAP( \
    KC_NO,  KC_NO,  KC_FN4, KC_NO,  KC_NO,                  KC_NO,         SHIFT(KC_LBRC),SHIFT(KC_RBRC),SHIFT(KC_9),   SHIFT(KC_0), \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  SHIFT(KC_SLSH),KC_LBRC,       KC_RBRC,       KC_GRV,        SHIFT(KC_GRV), \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  SHIFT(KC_MINS),KC_SLSH,       KC_BSLS,       SHIFT(KC_BSLS),KC_NO, \
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS \
  ), \

  /*
   * Layer 5 (FN11): Misc while pressing and "Tab" on tap
   * .-------------------------.         .----------------------------.
   * |    |    |    |    |     |         |       |    |    |    |BSPC |
   * |-------------------------|         |----------------------------|
   * |    |    |    |    |     |         |       |HELP|ESC |F13 |ENTER|
   * |-------------------------|         |----------------------------|
   * |    |    |    |    |RESET|         |       |    |    |    |     |
   * |-------------------------+---------+----------------------------|
   * |TRNS|TRNS|TRNS|TRNS|>TAB<|TRNS|TRNS|GUI+DEL|TRNS|TRNS|TRNS|TRNS |
   * '----------------------------------------------------------------'
   */
  KEYMAP( \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_BSPC, \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_HELP, KC_ESC, KC_F13, KC_ENT, \
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_FN7,                 KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO, \
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_FN11,KC_TRNS,KC_TRNS,KC_FN10,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS \
  )
};

/*
 * Macro definition
 *
 * GUI_LEFT, GUI_RIGHT and ALT_DEL
 */
enum macro_id {
  GUI_LEFT,
  GUI_RIGHT,
  ALT_DEL,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
  case GUI_LEFT:
    if (record->event.pressed) {
      return (MACRO( D(LGUI), D(LEFT), END ));
    } else {
      return (MACRO(U(LEFT), U(LGUI), END));
    }
  case GUI_RIGHT:
    if (record->event.pressed) {
      return (MACRO( D(RGUI), D(RIGHT), END ));
    } else {
      return (MACRO( U(RIGHT), U(RGUI), END ));
    }
  case ALT_DEL:
    if (record->event.pressed) {
      return (MACRO( D(LALT), D(BSPC), END ));
    } else {
      return (MACRO( U(LALT), U(BSPC), END ));
    }
  }
  return MACRO_NONE;
}

/*
 * Function definition
 *
 * RESET
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  if (id == BOOTLOADER) {
    bootloader();
  }
}

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),              // FN0: Turn main FN layer(1) on momentarily (overlay)
  [1] = ACTION_LAYER_TOGGLE(1),                 // FN1: Turn main FN layer(1) on and off
  [2] = ACTION_LAYER_TAP_KEY(2, KC_QUOT),       // FN2: Turn number layer(2) on while pressed and "'" key on tap
  [3] = ACTION_LAYER_TAP_KEY(3, KC_COMM),       // FN3: Turn symbol(shifted) layer(3) on while pressed and "," key on tap
  [4] = ACTION_LAYER_TAP_KEY(4, KC_DOT),        // FN4: Turn symbol layer(4) on while pressed and "." key on tap
  [5] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SCLN), // FN5: Activate left shift while pressed and ";" key on tap
  [6] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_Z),    // FN6: Activate right shift while pressed and "Z" key on tap
  [7] = ACTION_FUNCTION(BOOTLOADER),            // FN7: A-Star card RESET
  [8] = ACTION_MACRO(GUI_LEFT),                 // FN8: GUI + LEFT (move left by word)
  [9] = ACTION_MACRO(GUI_RIGHT),                // FN9: GUI + RIGHT (move right by word)
  [10] = ACTION_MACRO(ALT_DEL),                 // FN10: ALT + BACKSPACE (backwards delete by word)
  [11] = ACTION_LAYER_TAP_KEY(5, KC_TAB),       // FN11: Turn misc layer(5) on while pressed and "TAB" key on tap
};
