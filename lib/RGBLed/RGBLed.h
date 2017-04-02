#ifndef RgbLed_h
    #define RgbLed_h

    #include "Arduino.h"

    struct Color {
  	const uint8_t red;
  	const uint8_t green;
  	const uint8_t blue;

	Color(uint8_t red, uint8_t green, uint8_t blue);
    };

    class RGBLed
    {
    	public:
            RGBLed(uint8_t redPin, uint8_t greenPin, uint8_t bluePin);

	    void blink(Color colors[], int interval, int times);
	    void blink(Color colors[], int interval);
	    void on(Color color);
	    void off();

    	private:
            const uint8_t RED;
            const uint8_t GREEN;
            const uint8_t BLUE;

	    void change(Color color);
    };

#endif
