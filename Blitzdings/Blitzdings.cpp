#include "Blitzdings.h"

// Define the array of leds


void setup() {
	initSerialReader();
    FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  serialReader();
}
