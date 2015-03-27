/*
 * Caller.cpp
 *
 *  Created on: 26.03.2015
 *      Author: Christoph
 */

#include "Caller.h"


//globale Variablen
extern uint16_t NUM_LEDS;
extern CRGB *pleds;
extern uint8_t bpm;
extern uint8_t *pfirstColor;
extern uint8_t *psecondColor;
extern uint16_t Pattern;
extern uint8_t Events;

void callPatterns(){
/*
 * Calls Patterns depending on the Patternsbitcode
 *
 * 	Bits:
 *
 * 		0	->Blink
 * 		1	->
 * 		2	->
 * 		3	->
 * 		4	->
 * 		5	->
 * 		6	->
 * 		7	->
 * 		8	->
 * 		9	->
 * 		10	->
 * 		11	->
 * 		12	->
 * 		13	->
 * 		14	->
 * 		15	->
 *
 */
	if((Pattern >> 0)%2)
	{
		//call funktion 1

		blinkAll();
	}
	if((Pattern >> 1)%2)
	{
		//call funktion 2
		shot();
	}
	if((Pattern >> 2)%2)
	{
		//call funktion 3
	}
	if((Pattern >> 3)%2)
	{
		//call funktion 4
	}
	if((Pattern >> 4)%2)
	{
		//call funktion 5
	}
	if((Pattern >> 5)%2)
	{
		//call funktion 6
	}
	if((Pattern >> 6)%2)
	{
		//call funktion 7
	}
	if((Pattern >> 7)%2)
	{
		//call funktion 8
	}
}


