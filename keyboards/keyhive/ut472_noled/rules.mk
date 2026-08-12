# ATmega32U2 size optimization for Vial
LTO_ENABLE = yes

# Features required by the existing UT47.2 keymap
# Mouse keys are intentionally disabled; the FN3 mouse functions were removed.
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = yes

# Vial dynamic features for the next test
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes

# Features not used by the keymap / Vial configuration
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
BOOTMAGIC_ENABLE = no
NKRO_ENABLE = no
AUDIO_ENABLE = no
MUSIC_ENABLE = no
CAPS_WORD_ENABLE = no
AUTO_SHIFT_ENABLE = no
REPEAT_KEY_ENABLE = no
MAGIC_ENABLE = no
SWAP_HANDS_ENABLE = no
KEY_OVERRIDE_ENABLE = no
QMK_SETTINGS = no

# No RGB / WS2812 / LED functionality.
