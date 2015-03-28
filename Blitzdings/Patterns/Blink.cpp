/*
 * Blink.cpp
 *
 *  Created on: 25.03.2015
 *      Author: Christoph
 */

#include "Blink.h"


//globale Variablen
extern uint16_t NUM_LEDS;
extern CRGB *pleds;
extern uint8_t bpm;
extern uint8_t *pfirstColor;
extern uint8_t *psecondColor;
extern uint16_t Pattern;
extern uint8_t Events;
extern unsigned long deltaT;


void blinkAll(){
	static float r = 0;
	static float g = 0;
	static float b = 0;

	if(Events%2)
	{
		for(int i = 0; i<NUM_LEDS; i++){
			pleds[i] = CRGB(pfirstColor[0],pfirstColor[1],pfirstColor[2]);
		}
		r=0;
		g=0;
		b=0;
		digitalWrite(13,LOW);
	}
	else
	{
		int8_t help = 0;

		r += 1/(float)60000*deltaT*((float)bpm)*pfirstColor[0];
		g += 1/(float)60000*deltaT*((float)bpm)*pfirstColor[1];
		b += 1/(float)60000*deltaT*((float)bpm)*pfirstColor[2];
		for(int i = 0; i<NUM_LEDS; i++){

			if(r > 1 && pleds[i].r > r)
			{
				pleds[i].r -= r;

			}

			if(g > 1 && pleds[i].g > g)
			{
				pleds[i].g -= g;

			}

			if(b > 1 && pleds[i].b > b)
			{
				pleds[i].b -= b;

			}

		}
		if(r>1)
			r=0;
		if(g>1)
			g=0;
		if(b>1)
			b=0;

	}
}
