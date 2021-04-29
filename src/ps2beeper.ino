#include <Arduino.h>

int buzzerpin = 10; // this is where you connect your buzzer.
int kbdatapin = 5; // this is where you connect the ps/2 keyboard data line.
int kbswitch = 16; // this is for one leg of the momentary switch you want to use as your toggle -- connect the other leg to ground.

bool buzzertoggle = 1; // boolean to act as a toggle for whether the beeper is enabled or disabled.

void setup() {
    pinMode(buzzerpin, OUTPUT);
    pinMode(kbdatapin, INPUT);
    pinMode(kbswitch, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(kbswitch) == LOW) {
    delay(250); // debounce delay -- you can use different values if you feel you need to.
    buzzertoggle = !buzzertoggle; // toggles the buzzertoggle boolean, enabling/disabling the buzzer.
    }
    if (buzzertoggle) {
        if (digitalRead(5)==LOW) { // when the ps/2 data line is pulled low to signal the start of a keycode (both upstroke and downstroke), the buzzer will beep.
        tone(buzzerpin,1000,7); // the buzzer beeps at 1000hz for 7ms -- you can try other frequencies and beep durations.
        }
    }
}
