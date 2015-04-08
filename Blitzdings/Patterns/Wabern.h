/*
 * Wabern.h
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */
#include <arduino.h>
#include <FastLED.h>
#include "../defines.h"
#ifndef PATTERNS_WABERN_H_
#define PATTERNS_WABERN_H_

#include "Pattern.h"

class Wabern: public Pattern {
private:
	void standardWave(long *deltaT);
	void rectangleWave(long *deltaT);
	void leaveOneOut();

protected:
	uint8_t bpm = 0;
	uint8_t mood = 0;
	uint8_t param3 = 0;
	uint8_t param4 = 0;
	uint8_t param5 = 0;
	float vAbfallr = 0;
	float vAbfallg = 0;
	float vAbfallb = 0;
	float dFarber = 0;				//Generalzähler
	float dFarbeg = 0;
	float dFarbeb = 0;
	CRGB farbwert;
	uint32_t time = 0;
	uint32_t dtime = 0;

public:
	Wabern(CRGB *colors, CRGB *leds, uint16_t length, uint8_t * parameter);
	Wabern();
	virtual ~Wabern();
	void  eventDetected();
	void  eventFade(long *deltaT);
};

#endif /* PATTERNS_WABERN_H_ */
