/*
 * Communication.cpp
 *
 *  Created on: 25.03.2015
 *      Author: Christoph
 */

#include "Communication.h"


//globale Variablen
extern uint16_t NUM_LEDS;
extern CRGB *leds;
extern uint8_t bpm;
extern uint8_t *firstColor;
extern uint8_t *secondColor;
extern uint16_t Pattern;
extern uint8_t Events;

void serialReader(){
	/*************************************************************************
	 *
	 * Binary Message Types
	 * 		- Initialize: first bit 0
	 * 		- Event: first bit 1
	 *
	 * Initialize-Message:
	 *
	 * 		bits:
	 *
	 * 		0-7 	-> Message Type
	 * 		8-31 	-> First significant color
	 * 		32-55 	-> Second significant color
	 *
	 * 	Event-Message:
	 *
	 * 		bits:
	 *
	 * 		0-7		-> Message Type
	 * 		8-15	-> bpm estimate
	 * 		16-23 	-> Event type
	 * 		23-39	-> Patterns
	 *
	 ***************************************************************************/




	if(Serial.available()>0)
	{
		uint8_t mType = 0;
		mType = Serial.read();

		if(mType == 0)
		{
			firstColor[0] = Serial.read();
			firstColor[1] = Serial.read();
			firstColor[2] = Serial.read();

			secondColor[0] = Serial.read();
			secondColor[1] = Serial.read();
			secondColor[2] = Serial.read();
		}
		else
		{
			bpm = Serial.read();
			Events = Serial.read();
			Pattern = Serial.read();
			Pattern = Pattern << 8;
			Pattern = Pattern | Serial.read();
		}

	}

}
void initSerialReader(){
	Serial.begin(BAUDRATE);
}
