// Copyright 22 ScatteredDrifter / evelynsta

#pragma once

#include "config_common.h"

/* --- USB Device properties --- */
#define VENDOR_ID 0xeee0
#define PRODUCT_ID 0xe001
#define DEVICE_VER 0x0001
#define MANUFACTURER ScatteredDrifter
#define PRODUCT Monorail-redux

/* --- Matrix definition --- */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* --- Matrix assignment --- */
#define MATRIX_COL_PINS \
    { GP25, GP24, GP23, GP22, GP5, GP6, GP7, GP15, GP13, GP14, GP11, GP4 }
#define MATRIX_ROW_PINS \
    { GP29, GP26, GP12, GP20 }
/* --- Encoder assignment --- */
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A {GP27 }
#define ENCODERS_PAD_B {GP28 }

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

#define RGB_DI_PIN GP21
