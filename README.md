# UT472_noled

UT47.2をベースに、RGB/LED機能を削除した独立Vial-QMKキーボードです。

## QMK keyboard ID

    keyhive/ut472_noled

## Vial keymap

    vial

## 構成

- `keyboard.json`: ハードウェア、matrix、layout、feature設定
- `keymaps/vial/rules.mk`: VIA/Vial、軽量化、Combo/Tap Dance
- `keymaps/vial/config.h`: Vial UID、Unlock Combo、Combo/Tap Dance数
- `keymaps/vial/keymap.c`: 既存の動作確認済み4レイヤーkeymap
- `keymaps/vial/vial.json`: Vial用キーボード定義
- `.c` / `.h`: 使用しない

## 設定

- RGBLIGHT / WS2812: 無効
- Bootmagic: 無効
- NKRO: 無効
- ExtraKey: 有効
- Mousekey: 有効
- Console / Command / Audio / Space Cadet / Grave Escape / Magic: 無効
- QMK Settings / Key Override / Repeat Key: 無効
- LTO: 有効
- Layer state: 8-bit
- Combo: 12
- Tap Dance: 12

## ビルド

vial-qmkのルートから:

    make keyhive/ut472_noled:vial

または:

    qmk compile -kb keyhive/ut472_noled -km vial

既存の `keyhive/ut472` とは別のキーボードとしてビルドされます。
