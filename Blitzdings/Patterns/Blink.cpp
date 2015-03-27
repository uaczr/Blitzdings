/*
 * Blink.cpp
 *
 *  Created on: 25.03.2015
 *      Author: Christoph
 */

#include "Blink.h"


//globale Variablen
extern uint16_t NUM_LEDS;
extern CRGB *leds;
extern uint8_t bpm;
extern uint8_t *firstColor;
extern uint8_t *secondColor;
extern uint16_t Pattern;
extern uint8_t Events;

void blinkAll(){
	for(int i = 0; i<NUM_LEDS; i++){
		leds[i] = CRGB(firstColor[0],firstColor[1],firstColor[2]);
	}
}
