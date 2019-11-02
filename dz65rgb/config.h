#pragma once
#include "config_common.h"
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1224
#define DEVICE_VER      0x0001
#define MANUFACTURER    DZTECH
#define PRODUCT         DZ65RGB
#define DESCRIPTION     DZ65RGB ARM RGB keyboard

#define MATRIX_ROWS 5
#define MATRIX_COLS 15
#define MATRIX_ROW_PINS { B1, B10, B11, B14, B12 }
#define MATRIX_COL_PINS { A6, A7, B0, B13, B15, A8, A15, B3, B4, B5, B8, B9, C13, C14, C15 }
#define DIODE_DIRECTION COL2ROW
#define USB_POLLING_INTERVAL_MS 1

#define RGB_MATRIX_LED_PROCESS_LIMIT 4          // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_FLUSH_LIMIT 25           // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define DEBOUNCE 2
#define RGB_DISABLE_AFTER_TIMEOUT 120           // number of ticks to wait until disabling effects
#define RGB_DISABLE_WHEN_USB_SUSPENDED true     // turn off effects when suspended
#define RGB_MATRIX_KEYPRESSES                   // reacts to keypresses
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200       // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_ALL

#define DRIVER_ADDR_1 0b1110100
#define DRIVER_ADDR_2 0b1110111
#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 35
#define DRIVER_2_LED_TOTAL 33
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
