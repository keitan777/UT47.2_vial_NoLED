# ATmega32U2 size optimization for Vial
LTO_ENABLE = yes

# Features required by the existing UT47.2 keymap
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
SPACE_CADET_ENABLE = yes

# Vial dynamic features are not used by the existing keymap.
# Disable them explicitly to avoid their runtime RAM overhead.
TAP_DANCE_ENABLE = no
COMBO_ENABLE = no
KEY_OVERRIDE_ENABLE = no
REPEAT_KEY_ENABLE = no

# Features not used by the keymap / Vial configuration
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
BOOTMAGIC_ENABLE = no
NKRO_ENABLE = no
AUDIO_ENABLE = no
MUSIC_ENABLE = no
CAPS_WORD_ENABLE = no
AUTO_SHIFT_ENABLE = no
MAGIC_ENABLE = no
SWAP_HANDS_ENABLE = no

# Keep Grave Escape, Layer State and normal tapping behavior.
