# baby_batoid

![baby_batoid](https://imgur.com/a/Xh7ii4S)

*A short description of the keyboard/project*

* Keyboard Maintainer: [isaac turner](https://github.com/turnisaa-sgtworms)
* Hardware Supported: baby-batoid
* Hardware Availability: https://github.com/turnisaa-sgtworms/baby-batoid - if you are reading this in the future and i somehow haven't publicized it, send me an email @ turnisaa.sgtworms@gmail.com

Make example for this keyboard (after setting up your build environment):

    make baby_batoid:default

Flashing example for this keyboard:

    make baby_batoid:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (the top left key on the left hand cluster) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
