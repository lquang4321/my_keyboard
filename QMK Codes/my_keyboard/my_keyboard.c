#include "my_keyboard.h"



#ifdef NUMLOCK_LED

    void keyboard_pre_init_user(void) {
        // Call the keyboard pre init code.

        // Set our LED pins as output
        setPinOutput(NUMLOCK_LED);
    }

    bool led_update_kb(led_t led_state) {
        bool res = led_update_user(led_state);
        if(res) {
            // writePin sets the pin high for 1 and low for 0.
            // In this example the pins are inverted, setting
            // it low/0 turns it on, and high/1 turns the LED off.
            // This behavior depends on whether the LED is between the pin
            // and VCC or the pin and GND.
            writePin(NUMLOCK_LED, !led_state.caps_lock);
        }

        return res;
    }
#endif

#ifdef RGBLIGHT_ENABLE
    void keyboard_post_init_user(void) {
    // Call the post init code.
    rgblight_enable_noeeprom(); // enables Rgb, without saving settings
    rgblight_sethsv_noeeprom(rand() % 255, rand() % 255, rand() % 255); // sets the color to teal/cyan without saving
    rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 1); // sets mode to Fast breathing without saving
    }
#endif

