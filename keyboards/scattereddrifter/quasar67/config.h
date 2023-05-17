// Copyright 22 ScatteredDrifter / fabiansta

#pragma once

#include "config_common.h"

/* --- USB Device properties --- */
#define VENDOR_ID 0xeee0
#define PRODUCT_ID 0xeee4
#define DEVICE_VER 0x0001
#define MANUFACTURER ScatteredDrifter
#define PRODUCT Quasar_67

/* --- Matrix definition --- */
#define MATRIX_ROWS 6 
#define MATRIX_COLS 12

/* --- Matrix assignment --- */ 
#define MATRIX_COL_PINS \
    { GP18, GP19, GP20, GP23, GP22, GP21, GP12, GP8, GP10, GP11, GP13, GP14 }
#define MATRIX_ROW_PINS \
    { GP17, GP16, GP4, GP5, GP6, GP7 }
/* --- Encoder assignment --- */
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A {GP2, GP24}
#define ENCODERS_PAD_B {GP3, GP25}

/*#define ENCODER_DIRECTION_FLIP*/

/* --- additional settings --- */
#define DEBUG_MATRIX_SCAN_RATE
#define LAYER_STATE_16BIT
// reducing chattering, set to 0 if not necessary 
#define DEBOUNCE 5 
#define DIODE_DIRECTION COL2ROW


//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

/* --- RP2040 specific settings */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN GP9
#define RGBLED_NUM 6 
#define WS2812_PIO_USE_PIO1
