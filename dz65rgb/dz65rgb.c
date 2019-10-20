#include "dz65rgb.h"
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
	{0,  C2_1,  C3_1,  C4_1}, // LA0
	{0,  C1_1,  C3_2,  C4_2}, // LA1
	{0,  C1_2,  C2_2,  C4_3}, // LA2
	{0,  C1_3,  C2_3,  C3_3}, // LA3
	{0,  C1_4,  C2_4,  C3_4}, // LA4
	{0,  C1_5,  C2_5,  C3_5}, // LA5
	{0,  C1_6,  C2_6,  C3_6}, // LA6
	{0,  C1_7,  C2_7,  C3_7}, // LA7
    {0,  C1_8,  C2_8,  C3_8}, // LA8
	{0,  C9_1,  C8_1,  C7_1}, // LA9
	{0,  C9_2,  C8_2,  C7_2}, // LA10
	{0,  C9_3,  C8_3,  C7_3}, // LA11
	{0,  C9_4,  C8_4,  C7_4}, // LA12
	{0,  C9_5,  C8_5,  C7_5}, // LA13
	{0,  C9_6,  C8_6,  C7_6}, // LA14
	{0,  C9_7,  C8_7,  C6_6}, // LA15
	{0,  C9_8,  C7_7,  C6_7}, // LA16
	{0,  C8_8,  C7_8,  C6_8}, // LA17
	{0,  C2_9,  C3_9,  C4_9}, // LB0
	{0,  C1_9, C3_10, C4_10}, // LB1
	{0, C1_10, C2_10, C4_11}, // LB2
	{0, C1_11, C2_11, C3_11}, // LB3
 // {0, C1_12, C2_12, C3_12}, // LB4
	{0, C1_13, C2_13, C3_13}, // LB5
	{0, C1_14, C2_14, C3_14}, // LB6
	{0, C1_15, C2_15, C3_15}, // LB7
	{0, C1_16, C2_16, C3_16}, // LB8
	{0,  C9_9,  C8_9,  C7_9}, // LB9
	{0, C9_10, C8_10, C7_10}, // LB10
	{0, C9_11, C8_11, C7_11}, // LB11
	{0, C9_12, C8_12, C7_12}, // LB12
	{0, C9_13, C8_13, C7_13}, // LB13
	{0, C9_14, C8_14, C7_14}, // LB14
	{0, C9_15, C8_15, C6_14}, // LB15
	{0, C9_16, C7_15, C6_15}, // LB16
	{0, C8_16, C7_16, C6_16}, // LB17
	{1,  C2_1,  C3_1,  C4_1}, // LC0
	{1,  C1_1,  C3_2,  C4_2}, // LC1
	{1,  C1_2,  C2_2,  C4_3}, // LC2
	{1,  C1_3,  C2_3,  C3_3}, // LC3
	{1,  C1_4,  C2_4,  C3_4}, // LC4
	{1,  C1_5,  C2_5,  C3_5}, // LC5
 // {1,  C1_6,  C2_6,  C3_6}, // LC6
	{1,  C1_7,  C2_7,  C3_7}, // LC7
	{1,  C1_8,  C2_8,  C3_8}, // LC8
	{1,  C9_1,  C8_1,  C7_1}, // LC9
	{1,  C9_2,  C8_2,  C7_2}, // LC10
	{1,  C9_3,  C8_3,  C7_3}, // LC11
	{1,  C9_4,  C8_4,  C7_4}, // LC12
	{1,  C9_5,  C8_5,  C7_5}, // LC13
	{1,  C9_6,  C8_6,  C7_6}, // LC14
 // {1,  C9_7,  C8_7,  C6_6}, // LC15
	{1,  C9_8,  C7_7,  C6_7}, // LC16
	{1,  C8_8,  C7_8,  C6_8}, // LC17
	{1,  C2_9,  C3_9,  C4_9}, // LD0
	{1,  C1_9, C3_10, C4_10}, // LD1
	{1, C1_10, C2_10, C4_11}, // LD2
	{1, C1_11, C2_11, C3_11}, // LD3
	{1, C1_12, C2_12, C3_12}, // LD4
	{1, C1_13, C2_13, C3_13}, // LD5
	{1, C1_14, C2_14, C3_14}, // LD6
	{1, C1_15, C2_15, C3_15}, // LD7
	{1, C1_16, C2_16, C3_16}, // LD8
	{1,  C9_9,  C8_9,  C7_9}, // LD9
	{1, C9_10, C8_10, C7_10}, // LD10
	{1, C9_11, C8_11, C7_11}, // LD11
	{1, C9_12, C8_12, C7_12}, // LD12
 // {1, C9_13, C8_13, C7_13}, // LD13
	{1, C9_14, C8_14, C7_14}, // LD14
	{1, C9_15, C8_15, C6_14}, // LD15
	{1, C9_16, C7_15, C6_15}, // LD16
	{1, C8_16, C7_16, C6_16}, // LD17
};

led_config_t g_led_config = { {
    {  17,  16,  15,  14,  13,  12,  11,  10,   9,  18,  19,  20,  21,  22,  23 },
    {   7,   6,   5,   4,   3,   2,   1,   0,  26,  27,  28,  29,  30,  31,  24 },
    {   8,  48,  47,  46,  45,  44,  43,  51,  52,  53,  54,  55, NO_LED,  56,  25 },
    {  49,  40,  39,  38,  37,  36,  60,  61,  62,  63,  57,  58, NO_LED,  59,  32 },
    {  50,  42,  41, NO_LED, NO_LED,  35, NO_LED, NO_LED,  64,  65,  66,  67, NO_LED,  34,  33 }
}, {
    { 112,  16 }, {  96,  16 }, {  80,  16 }, {  64,  16 }, {  48,  16 }, {  32,  16 }, {  16,  16 }, {   0,  16 }, {   0,  32 }, { 128,   0 }, { 112,   0 }, {  96,   0 }, {  80,   0 }, {  64,   0 }, {  48,   0 },
    {  32,   0 }, {  16,   0 }, {   0,   0 }, { 144,   0 }, { 160,   0 }, { 176,   0 }, { 192,   0 }, { 208,   0 }, { 224,   0 }, { 224,  16 }, { 224,  32 }, { 128,  16 }, { 144,  16 }, { 160,  16 }, { 176,  16 },
    { 192,  16 }, { 208,  16 }, { 224,  48 }, { 224,  64 }, { 208,  64 }, {  80,  64 }, {  80,  48 }, {  64,  48 }, {  48,  48 }, {  32,  48 }, {  16,  48 }, {  32,  64 }, {  16,  64 }, {  96,  32 }, {  80,  32 },
    {  64,  32 }, {  48,  32 }, {  32,  32 }, {  16,  32 }, {   0,  48 }, {   0,  64 }, { 112,  32 }, { 128,  32 }, { 144,  32 }, { 160,  32 }, { 176,  32 }, { 208,  32 }, { 160,  48 }, { 176,  48 }, { 208,  48 },
    {  96,  48 }, { 112,  48 }, { 128,  48 }, { 144,  48 }, { 128,  64 }, { 144,  64 }, { 160,  64 }, { 176,  64 }
}, {
    4, 4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4,
    4, 4, 1, 1, 1, 1, 4, 4, 4, 4, 4, 1, 1, 4, 4,
    4, 4, 4, 4, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 1, 1, 1, 1
} };

void matrix_init_kb(void) {
    matrix_init_user();
}
void matrix_scan_kb(void) {
    matrix_scan_user();
}
bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    return process_record_user(keycode, record);
}
void suspend_power_down_kb(void)
{
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void)
{
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}

__attribute__ ((weak))
uint8_t normal_mode = 0;

void rgb_matrix_indicators_user(void)
{
    if (IS_LED_ON(host_keyboard_leds(), USB_LED_CAPS_LOCK))
    {
        if (normal_mode == 0)
        {
            normal_mode = rgb_matrix_get_mode();
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
        }
    }
    else
    {
        if (normal_mode != 0)
        {
            rgb_matrix_mode_noeeprom(normal_mode);
            normal_mode = 0;
        }
    }
}
