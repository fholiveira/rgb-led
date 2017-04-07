#include <Arduino.h>
#include <RGBLed.h>

auto led = RGBLed(ANODE, 9, 10, 11);

void setup() {
    led.setup();
}

void loop() {
    led.blink(Color(0, 255, 0), 500);
}
