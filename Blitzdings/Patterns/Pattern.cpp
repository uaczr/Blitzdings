/*
 * Pattern.cpp
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */

#include "Pattern.h"

Pattern::Pattern(CRGB *colors, CRGB *leds, uint16_t length) {
	// Konstruktor für neues Pattern

	ptrColors = colors;
	ptrleds = leds;
	numLeds = length;

}
Pattern::Pattern(){
	ptrColors = 0;
	ptrleds = 0;
	numLeds = 0;
}

void Pattern::init(CRGB *colors, CRGB *leds, uint16_t length){
	ptrColors = colors;
	ptrleds = leds;
	numLeds = length;
}

Pattern::~Pattern() {

}

