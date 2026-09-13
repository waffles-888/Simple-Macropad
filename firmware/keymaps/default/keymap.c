#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_MUTE
        
    )
};

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_ln_P(PSTR("Hackpad"), false);
    return false;
}
#endif
