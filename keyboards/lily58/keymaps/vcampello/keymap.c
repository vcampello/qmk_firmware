#include "keycodes.h"
#include "modifiers.h"
#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

// TODO: setup combos
/*
 const uint16_t PROGMEM quick_esc[] = {KC_I, KC_O, COMBO_END};
 combo_t key_combos[] = {
     COMBO(quick_esc, KC_ESC),
 };
*/



// TODO: copy and update keyboard ascii view with my layout
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        /* MT(KC_F1,KC_ESC), */
        KC_ESC,
        KC_F2,
        KC_F3,
        KC_F4,
        KC_F5,
        KC_F6,
        KC_F7,
        KC_F8,
        KC_F9,
        KC_F10,
        KC_F11,
        KC_F12,
        KC_TAB,
        KC_Q,
        KC_W,
        KC_E,
        KC_R,
        KC_T,
        KC_Y,
        KC_U,
        KC_I,
        KC_O,
        KC_P,
        KC_MINS,
        KC_LCTL,
        MT(MOD_LGUI, KC_A),
        MT(MOD_LALT, KC_S),
        MT(MOD_LCTL, KC_D),
        MT(MOD_LSFT, KC_F),
        KC_G,
        KC_H,
        MT(MOD_LSFT, KC_J),
        MT(MOD_LCTL, KC_K),
        MT(MOD_LALT, KC_L),
        MT(MOD_LGUI, KC_SCLN),
        MT(MOD_LCTL, KC_QUOT),
        /* KC_QUOT, */
        KC_LSFT,
        KC_Z,
        KC_X,
        KC_C,
        KC_V,
        KC_B,
        KC_CAPS,
        KC_F1,
        KC_N,
        KC_M,
        KC_COMM,
        KC_DOT,
        KC_SLSH,
        KC_RSFT,
        KC_LALT,
        KC_LGUI,
        TL_LOWR,
        KC_SPC,
        KC_ENT,
        TL_UPPR,
        KC_BSPC,
        KC_RGUI
    ),
    [_LOWER] = LAYOUT(
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        S(KC_1),
        S(KC_2),
        S(KC_3),
        S(KC_4),
        S(KC_5),
        S(KC_6),
        S(KC_7),
        S(KC_8),
        S(KC_9),
        S(KC_0),
        KC_TRNS,
        KC_TRNS,
        KC_1,
        KC_2,
        KC_3,
        KC_4,
        KC_5,
        KC_6,
        KC_7,
        KC_8,
        KC_9,
        KC_0,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        S(KC_BSLS),
        KC_GRV,
        S(KC_LBRC),
        S(KC_RBRC),
        S(KC_GRV),
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS
    ),
    [_RAISE] = LAYOUT(
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_F1,
        KC_F2,
        KC_F3,
        KC_F4,
        KC_F5,
        KC_F6,
        KC_F7,
        KC_F8,
        KC_F9,
        KC_F10,
        KC_F11,
        KC_F12,
        KC_TRNS,
        RM_HUEU,
        RM_SATU,
        RM_VALU,
        RM_SPDU,
        RM_NEXT,
        KC_LEFT,
        KC_DOWN,
        KC_UP,
        KC_RGHT,
        KC_TRNS,
        S(KC_GRV),
        KC_TRNS,
        RM_HUED,
        RM_SATD,
        RM_VALD,
        RM_SPDD,
        RM_PREV,
        RM_TOGG,
        KC_TRNS,
        S(KC_EQL),
        KC_PEQL,
        KC_LBRC,
        KC_RBRC,
        KC_BSLS,
        KC_SLSH,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS
    ),
    [_ADJUST] = LAYOUT(
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_VOLU,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_MPRV,
        KC_MPLY,
        KC_MNXT,
        KC_VOLD,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        /* KC_PSCR, */
        /* KC_ESC, */
        DT_UP,
        DT_DOWN,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_NO,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS,
        KC_TRNS
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
// TODO: fully remove logo
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

char *read_tapping_term(void) {
  static char buffer[32];
  snprintf(buffer, sizeof(buffer), "TapTerm: %d", TAPPING_TERM);
  return buffer;
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
    /* oled_write_ln(read_tapping_term(), false); */
  } else {
    /* oled_write(read_logo(), false); */
    oled_write_ln(read_tapping_term(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
