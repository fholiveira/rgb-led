#include <Arduino.h>
#include <RGBLed.h>

auto led = RGBLed(0, 1, 2);

void setup() {
    led.setup();
}

void loop() {
    led.on(Color(255,10,100));
}
