// Copyright 22 ScatteredDrifter / fabiansta

#pragma once

#include "config_common.h"

/* --- USB Device properties --- */
#define VENDOR_ID 0xEEE0
#define PRODUCT_ID 0xEEE5
#define DEVICE_VER 0x0001
#define MANUFACTURER ScatteredDrifter
#define PRODUCT Spacewalk

/* --- Matrix definition --- */
#define MATRIX_ROWS 5 
#define MATRIX_COLS 13

/* --- Matrix assignment --- */ 
#define MATRIX_COL_PINS \
    { GP9, GP8, GP7, GP6, GP5, GP4, GP3, GP24, GP23, GP22, GP21, GP20, GP19  }
#define MATRIX_ROW_PINS \
    { GP10, GP25, GP2, GP14, GP15 }
/* --- Encoder assignment --- */

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


// Definition BACKLIGHT 

#define BACKLIGHT_PIN GP1
//#define BACKLIGHT_BREATHING

// Definition underglow 
#define RGB_DI_PIN GP0
#define RGBLED_NUM 9
#define NOP_FUDGE 0.5 
#define DRIVER_LED_TOTAL RGBLED_NUM 
#define WS2812_PIO_USE_PIO1
#define RGBLIGHT_ANIMATIONS 

