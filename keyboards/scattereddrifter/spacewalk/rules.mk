# MCU name
MCU = RP2040
BOARD = GENERIC_RP_RP2040
BOOTLOADER = rp2040

# Build Options
#   change yes to no to disable
#
ENCODER_ENABLE = no
ENCODER_MAP_ENABLE = no 
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes      
     # USB Nkey Rollover

# Enable keyboard backlight functionality
BACKLIGHT_ENABLE = yes
BACKLIGHT_DRIVER = software
# - RGB underglow 
WS2812_DRIVER = vendor
RGBLIGHT_ENABLE = yes
