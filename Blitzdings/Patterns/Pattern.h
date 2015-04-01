/*
 * Pattern.h
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */

#ifndef PATTERNS_PATTERN_H_
#define PATTERNS_PATTERN_H_

class Pattern {
protected:

public:
	Pattern(CRGB *colors, CRGB *leds, uint16_t length);
	virtual ~Pattern();
	virtual void  eventDetected( uint8_t * parameters) = 0;
	virtual void  eventFade(long *deltaT, uint8_t * parameters) = 0;

	CRGB *ptrColors;
	CRGB *ptrleds;
	uint16_t numLeds;
};

#endif /* PATTERNS_PATTERN_H_ */
