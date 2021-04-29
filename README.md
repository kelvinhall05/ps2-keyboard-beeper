# PS/2 Keyboard Beeper

This basic code will allow you to add a piezo beeper to any PS/2 or AT protocol keyboard. The code simply looks for the start of a keycode (data line being pulled low) and activates the beeper for the set duration. This does result in a beep for both the upstroke and downstroke.

The repo is set up to function as a PlatformIO project. Source code is in the ```src``` folder. By default, it is configured to compile and flash for a Leonardo/Pro Micro.
