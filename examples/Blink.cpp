#include <Arduino.h>
#include <RGBLed.h>

auto led = RGBLed(0, 1, 2);

Color colors[2] = { Color(255, 0, 128), Color(0, 0, 0) };

void setup() {
    led.setup();
}

void loop() {
    led.blink(colors, 150);
}
