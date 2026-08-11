# UT472_noled

UT47.2をベースにRGB/LED機能を削除した独立したVial-QMKキーボードです。

- QMK keyboard ID: `keyhive/ut472_noled`
- Vial keymap: `vial`
- Display name: `UT47.2 NoLED`
- MCU: ATmega32U2
- 4 layers
- Combo: 12 entries
- Tap Dance: 12 entries
- `LAYER_STATE_8BIT`
- RGBLIGHT / WS2812: disabled/removed
- Bootmagic / NKRO / Console / Command / Audio / Space Cadet / Grave Escape / Magic: disabled
- QMK Settings / Key Override / Repeat Key: disabled
- LTO: enabled

## Build

From the root of Vial-QMK:

```bash
qmk clean -a
make keyhive/ut472_noled:vial
```

Or:

```bash
qmk compile -kb keyhive/ut472_noled -km vial
```

This keyboard is independent from the existing `keyhive/ut472` definition.
