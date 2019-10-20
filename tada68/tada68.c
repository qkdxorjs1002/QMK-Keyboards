#include "tada68.h"
#include "led.h"
#include "rgblight.h"
#include "backlight.h"

uint8_t usb_led_status;
uint8_t rgb_light_status;
bool cap_toggled;

void matrix_init_kb(void) {
	// put your keyboard start-up code here
  // runs once when the firmware starts up
	matrix_init_user();
	led_init_ports();
}

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)
	matrix_scan_user();
  caps_led();
}

void led_init_ports(void) {
  // * Set our LED pins as output
  DDRB |= (1<<2);
  PORTB &= ~(1<<2);
}

void led_set_kb(uint8_t usb_led) {
  usb_led_status = usb_led;
	led_set_user(usb_led);
}

void caps_led(void) {
  if (usb_led_status & (1<<USB_LED_CAPS_LOCK)) {
    if (!cap_toggled) {
      rgb_light_status = rgblight_get_mode();
      rgblight_mode(8);
      cap_toggled = true;
    }
  } else {
    if (cap_toggled) {
      rgblight_mode(rgb_light_status);
      cap_toggled = false;
    }
  }
}
