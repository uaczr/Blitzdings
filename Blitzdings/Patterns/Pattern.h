/*
 * Pattern.h
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */
#include <Arduino.h>
#include <FastLED.h>
#include "../defines.h"
#ifndef PATTERNS_PATTERN_H_
#define PATTERNS_PATTERN_H_

class Pattern {
protected:
	uint16_t i=0;
	CRGB *ptrColors;
	CRGB *ptrleds;
	uint8_t *parameter;
	uint16_t numLeds;

public:
	Pattern();
	Pattern(CRGB *colors, CRGB *leds, uint16_t length, uint8_t * parameter);
	virtual ~Pattern();
	virtual void  eventDetected() = 0;
	virtual void  eventFade(long *deltaT) = 0;
	void init(CRGB *colors, CRGB *leds, uint16_t length, uint8_t * parameter);


};

#endif /* PATTERNS_PATTERN_H_ */
