# cheebo

![cheebo](https://github.com/Felix-Kyun/cheebo/blob/master/assets/banner.png?raw=true)

_A 42 key handwired, diodeless, aggressively column staggered, splayed, ergonomic mechnical split keyboard_

-   Keyboard Maintainer: [Praise Jacob](https://github.com/Felix-Kyun)
-   Hardware Supported: _Pi pico_
-   [Plate and Case Model](https://cad.onshape.com/documents/d629d05c6ab4ceb50aa5ccc0/w/f011758026d3b82147f3d326/e/3afc35aa885c8655b5dc0660)
-  [Gallery](https://github.com/Felix-Kyun/cheebo/blob/master/gallery.md)

Before building, clone this repo to vial-qmk repo inside the keyboard folder.

Make example for this keyboard (after setting up your build environment):

    make cheebo:vial

Flashing example for this keyboard:

    make cheebo:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **BOOTSEL**: Hold down the bootsel button on pi pico while pluggin in the keyboard
-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard

## Special Thanks

-   [piantor](https://github.com/beekeeb/piantor)
-   [hillside](https://github.com/mmccoyd/hillside)
