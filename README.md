# UT472_noled

UT47.2をベースに、RGB/LED機能を削除した独立Vial-QMKキーボードです。

## QMK keyboard ID

    keyhive/ut472_noled

## Vial keymap

    vial

## 構成

- `keyboard.json`: ハードウェア、matrix、layout、feature設定
- `keymaps/vial/rules.mk`: VIA/Vial、軽量化、Combo/Tap Dance
- `keymaps/vial/config.h`: Vial UID、Unlock Combo、Macro/Combo/Tap Dance数
- `keymaps/vial/keymap.c`: 動作確認済み4レイヤーkeymap
- `keymaps/vial/vial.json`: Vial用キーボード定義
- `.c` / `.h`: 使用しない

## 最終版の設定

- RGBLIGHT / WS2812: 無効
- LED機能: 無効
- Bootmagic: 無効
- NKRO: 無効
- Mousekey: 有効
- ExtraKey: 有効
- Console / Command / Audio / Space Cadet / Magic: 無効
- QMK Settings / Key Override / Repeat Key: 無効
- LTO: 有効
- Layer state: 8-bit
- **Macro: 8**
- **Combo: 8**
- **Tap Dance: 8**
- Vial Unlock Combo: Esc + Backspace
- 4レイヤー構成

この構成は、Vialでの動作確認を優先した最終版です。

## ビルド確認

最終版はGitHub Actionsでビルド成功を確認済みです。

- Flash: 20,766 / 28,672 bytes
- 使用率: 約72%
- 空き: 7,906 bytes
- SRAM `.bss`: 618 bytes
- Vial用HEX生成成功

## ビルド

vial-qmkのルートから:

    make keyhive/ut472_noled:vial

または:

    qmk compile -kb keyhive/ut472_noled -km vial

既存の `keyhive/ut472` とは別のキーボードとしてビルドされます。
