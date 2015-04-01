#define NUMLEDS 85
#define DATAPIN 12

#define CLOCKPIN 13
#include "Blitzdings.h"


//globale Variabeln
extern uint16_t NUM_LEDS = NUMLEDS;
extern CRGB *pleds = 0;
extern uint8_t bpm = 0;
extern uint8_t* pfirstColor = 0;
extern uint8_t* psecondColor = 0;
extern uint16_t Pattern = 0;
extern uint8_t Events = 0;
extern unsigned long deltaT = 0;
extern unsigned long altT = 0;
CRGB leds[NUMLEDS];
uint8_t firstColor[3] = {0,30,7};
uint8_t secondColor[3] = {150,0,0};
// Define the array of leds


void setup() {
	for(uint8_t i = 0; i<NUM_LEDS; i++)
		leds[i] = CRGB(0,0,0);
	Pattern = 0;
	initSerialReader();
    FastLED.addLeds<WS2811, DATAPIN, RGB>(leds, NUM_LEDS);
    altT = millis();
    bpm = 0;
    pleds = leds;
    pfirstColor = firstColor;
    psecondColor = secondColor;
}

void loop() {
	Events = 0;
	deltaT = millis() - altT;
	altT = millis();
	serialReader();
	callPatterns();
	FastLED.show();


}
