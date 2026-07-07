#include QMK_KEYBOARD_H

// Tajmer i varijabla za praćenje teksta na ekranu
static uint32_t oled_timer = 0;
static const char* oled_status_msg = "voltstrip v2.0";

// Definicija tvojih tastera (4 fizička tastera + 1 prazan pošto matrica ima ispisano 5 mjesta)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MUTE,    LCTL(KC_C), LCTL(KC_V),
        KC_MPLY,    KC_NO
    )
};

// 1. Detekcija klikova na tastere
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case LCTL(KC_C):
                oled_status_msg = "COPY";
                break;
            case LCTL(KC_V):
                oled_status_msg = "PASTE";
                break;
            case KC_MUTE:
                oled_status_msg = "MUTED";
                break;
            case KC_MPLY:
                oled_status_msg = "PLAY/PAUSE";
                break;
            default:
                oled_status_msg = "CLICKED!";
                break;
        }
        oled_timer = timer_read32(); // Resetuj tajmer čim se klikne taster
    }
    return true;
}

// 2. Detekcija okretanja enkodera (Pojačavanje / Utišavanje zvuka)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
            oled_status_msg = "VOL UP";
        } else {
            tap_code(KC_VOLD);
            oled_status_msg = "VOL DOWN";
        }
        oled_timer = timer_read32(); // Resetuj tajmer čim se okrene enkoder
    }
    return false;
}

// 3. Logika za OLED ekran
bool oled_task_user(void) {
    // Ako je prošlo više od 2000 milisekundi (2 sekunde) od zadnjeg klika, vrati na staro
    if (timer_elapsed32(oled_timer) > 2000) {
        oled_write_ln("voltstrip v2.0", false);
    } else {
        // Inače, ispiši trenutnu akciju (COPY, MUTED, itd.)
        oled_write_ln(oled_status_msg, false);
    }
    return false;
}