#include <Arduino.h>
#include <RGBLed.h>

auto led = RGBLed(ANODE, 9, 10, 11);

Color colors[2] = { Color(0, 255, 0), Color(0, 0, 0) };

void setup() {
    led.setup();
}

void loop() {
    led.blink(colors, 500);
}
