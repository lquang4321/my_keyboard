# MCU name
MCU = atmega32u4				#Arduino Pro Micro

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no     	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       	# Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no			# Console for debug
COMMAND_ENABLE = no    		# Commands for debug and configuration
ENCODER_ENABLE = yes

# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes            # USB Nkey Rollover
RGBLIGHT_ENABLE = no   	 # Enable keyboard underlight functionality
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality on B7 by default
OLED_DRIVER_ENABLE = yes	 # Enable OLED
WPM_ENABLE = yes			 # Enable WPM feature

TAP_DANCE_ENABLE = no
STENO_ENABLE = no
BOOTMAGIC_ENABLE =no
TERMINAL_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
SPACE_CADET_ENABLE = no
KEY_LOCK_ENABLE = no
AUDIO_ENABLE = no
CONSOLE_ENABLE = no
VELOCIKEY_ENABLE = no

LINK_TIME_OPTIMIZATION_ENABLE = yes
