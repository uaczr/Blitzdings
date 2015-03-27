#include "Blitzdings.h"
//globale Variabeln
uint16_t NUM_LEDS = NUMLEDS;
CRGB leds[NUMLEDS];
uint8_t bpm = 0;
uint8_t firstColor[3] = {0,0,0};
uint8_t secondColor[3] = {0,0,0};
uint16_t Pattern = 0;
uint8_t Events = 0;
unsigned long deltaT = 0;
unsigned long altT = 0;

// Define the array of leds


void setup() {
	initSerialReader();
    FastLED.addLeds<WS2811, DATAPIN, RGB>(leds, NUM_LEDS);
    altT = millis();
}

void loop() {
	Events = 0;
	deltaT = millis() - altT;
	altT = millis();

	serialReader();
	callPatterns();
	FastLED.show();
}
