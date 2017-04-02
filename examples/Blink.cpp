#include <Arduino.h>
#include <RGBLed.h>

auto led = RGBLed(0, 1, 2);
const static Color red = Color(255,10,100);

void setup() {
    led.setup();
}

void loop() {
    led.on(red);
}
