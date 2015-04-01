/*
 * Pattern.cpp
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */
#include <Arduino.h>
#include <FastLED.h>
#include "Pattern.h"

Pattern::Pattern(CRGB *colors, CRGB *leds, uint16_t length) {
	// Konstruktor für neues Pattern

	ptrColors = colors;
	ptrleds = leds;
	numLeds = length;

}

Pattern::~Pattern() {

}

