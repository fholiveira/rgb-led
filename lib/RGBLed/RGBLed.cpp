#include "RGBLed.h"
#include <Arduino.h>

Color::Color(uint8_t red, uint8_t green, uint8_t blue) :
    red(red), green(green), blue(blue) { }

RGBLed::RGBLed(uint8_t redPin, uint8_t greenPin, uint8_t bluePin) :
    RED(redPin), GREEN(greenPin), BLUE(bluePin) { }

void RGBLed::setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
}

void RGBLed::change(Color color) {
    analogWrite(RED, color.red);
    analogWrite(GREEN, color.green);
    analogWrite(BLUE, color.blue);
}

void RGBLed::on(Color color) {
    change(color);
}

void RGBLed::off() {
    change(Color(0,0,0));
}

void RGBLed::blink(Color colors[], int interval) {
    int length = sizeof(colors) / sizeof(colors[0]);
    for (int i = 0; i < length; i++) {
        change(colors[i]);
	delay(interval);
    }
}

void RGBLed::blink(Color colors[], int interval, int times) {
    for (int i = 0; i < times; i++)
	blink(colors, interval);
}
