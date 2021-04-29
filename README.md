# PS/2 Keyboard Beeper

This basic code will allow you to add a piezo beeper to any PS/2 or AT protocol keyboard. The code simply looks for the start of a keycode (data line being pulled low) and activates the beeper for the set duration. I've also included a function to toggle the beeper on or off with one of the keys on the board.

Once you've flashed your controller, wire it up as follows:
- `kbadatapin` to the PS/2 data line
- Controller ground to keyboard ground
- Controller RAW power input to keyboard VCC
- One buzzer pin to `buzzerpin`, the other to ground

And if you want a button to toggle the beeper:
- One pin of your switch to `kbswitch`, the other to ground

The repo is set up to function as a PlatformIO project. Source code is in the `src` folder. By default, it is configured to compile and flash for a Leonardo/Pro Micro.
