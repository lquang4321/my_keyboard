#pragma once

#include "config_common.h"
/* USB Device descriptor parameter */
#define VENDOR_ID       0x5154
#define PRODUCT_ID      0xB00B
#define DEVICE_VER      0x0001
#define MANUFACTURER    Quang T
#define PRODUCT         QT_pie
#define DESCRIPTION     QMK keyboard firmware for handwired numpad with 17 keys and vol knob

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { B1, B3, B2 , B6 }
#define UNUSED_PINS { B0, D5 }          //B0 and D5 are RX, TX LED respectively.

/* NUMLOCK LED PIN */
//#define NUMLOCK_LED F5

/* OLED SSD1306 128x64 */
#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 180000
#endif

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/*Encoder*/
#ifdef ENCODER_ENABLE
#   define ENCODERS_PAD_A {F4, F6, B0}      //F4 and F5 are the same encoder as the same with F6 and F7, so on...
#   define ENCODERS_PAD_B {F5, F7, D5}
#   define ENCODER_RESOLUTION 4
#endif
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* LED related stuff*/
#ifdef BACKLIGHT_ENABLE
#   define BACKLIGHT_PIN B5
#   define BACKLIGHT_LEVELS 3
#endif

#ifdef RGBLIGHT_ENABLE
#    define RGB_DI_PIN F4
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLED_NUM 1
#    define RGBLIGHT_HUE_STEP 5
#    define RGBLIGHT_SAT_STEP 7
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_LIMIT_VAL 128
#endif

/* Limit USB power consumption */
#define USB_MAX_POWER_CONSUMPTION 500

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define OLED_FONT_END 127

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
