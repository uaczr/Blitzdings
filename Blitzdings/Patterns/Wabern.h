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

public:
	Wabern(CRGB *colors, CRGB *leds, uint16_t length);
	virtual ~Wabern();
	void  eventDetected( uint8_t * parameters);
	void  eventFade(long *deltaT, uint8_t * parameters);
};

#endif /* PATTERNS_WABERN_H_ */
