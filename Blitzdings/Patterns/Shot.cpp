/*
 * Shot.cpp
 *
 *  Created on: 27.03.2015
 *      Author: Christoph
 */

#include "Shot.h"

extern uint16_t NUM_LEDS;
extern CRGB *pleds;
extern uint8_t bpm;
extern uint8_t *pfirstColor;
extern uint8_t *psecondColor;
extern uint16_t Pattern;
extern uint8_t Events;
extern unsigned long deltaT;

void shot(){
	static uint8_t position = 0;
	static float incrementer = 0;
	static uint8_t run = 0;
	static CRGB old = pleds[0];

	if((Events >> 1)%2)
		run = 0;


	float time = 1/(float)bpm*(float)60*1000/NUM_LEDS*0.3f;

	incrementer += (float)deltaT;
	if(incrementer >= time)
	{
		incrementer = 0;
		if(position < NUM_LEDS-1 && run == 0)
		{
			position++;
			pleds[position-1] = old;
			pleds[position] = CRGB(psecondColor[0],psecondColor[1], psecondColor[2]);
		}
		else if(run == 0 && position == NUM_LEDS-1)
		{
			pleds[position] = old;
			position = 0;
			run = 1;
		}

	}




}
