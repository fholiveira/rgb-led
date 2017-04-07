#include "RGBLed.h"
#include <Arduino.h>

Color::Color(uint8_t red, uint8_t green, uint8_t blue) :
    red(red), green(green), blue(blue) { }

RGBLed::RGBLed(Type type, uint8_t redPin, uint8_t greenPin, uint8_t bluePin) :
    RED(redPin), GREEN(greenPin), BLUE(bluePin), OFFSET(type == ANODE ? 255 : 0) { }

void RGBLed::setup() const {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
}

void RGBLed::on(Color color) const {
    analogWrite(RED, abs(color.red - OFFSET));
    analogWrite(GREEN, abs(color.green - OFFSET));
    analogWrite(BLUE, abs(color.blue - OFFSET));
}

void RGBLed::off() {
    on(Color(0,0,0));
}

void RGBLed::blink(Color colors[], int interval) {
    int length = sizeof(colors);
    for (int i = 0; i < length; i++) {
        on(colors[i]);
	delay(interval);
    }
}

void RGBLed::blink(Color colors[], int interval, int times) {
    for (int i = 0; i < times; i++)
	blink(colors, interval);
}
