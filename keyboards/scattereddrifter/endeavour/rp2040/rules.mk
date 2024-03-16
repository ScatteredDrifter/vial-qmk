# configure build config for RP2040
MCU = RP2040
BOARD = GENERIC_RP_RP2040
BOOTLOADER = rp2040

# most build options are not contained in info.json 
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work

