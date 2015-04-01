/*
 * Wabern.h
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */

#ifndef PATTERNS_WABERN_H_
#define PATTERNS_WABERN_H_

#include "Pattern.h"

class Wabern: public Pattern {
protected:
	uint8_t bpm = 0;
	uint8_t mood = 0;
	uint8_t param3 = 0;
	uint8_t param4 = 0;
	uint8_t param5 = 0;

public:
	Wabern(CRGB *colors, CRGB *leds, uint16_t length);
	Wabern();
	virtual ~Wabern();
	void  eventDetected( uint8_t * parameters);
	void  eventFade(long *deltaT, uint8_t * parameters);
};

#endif /* PATTERNS_WABERN_H_ */
