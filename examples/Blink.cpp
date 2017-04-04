#include <Arduino.h>
#include <RGBLed.h>

auto led = RGBLed(9, 10, 11);

Color colors[2] = { Color(255, 255, 0), Color(255, 255, 255) };

void setup() {
    led.setup();
}

void loop() {
    led.blink(colors, 500);
}
