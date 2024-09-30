
/* --- Matrix definition --- */
/* --- Matrix assignment --- */ 


/* --- additional settings --- */
#define DEBUG_MATRIX_SCAN_RATE
#define LAYER_STATE_16BIT
// reducing chattering, set to 0 if not necessary 
#define DEBOUNCE 5 

/* --- rgb settings --- */
/* --- RP2040 specific settings */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADR_DOUBLE_TAP_RESET_TIMEOUT 500U