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
extern uint8_t *pfirstColor;
extern uint8_t *psecondColor;
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
		delay(20);
		uint8_t mType = 0;
		mType = Serial.read();
		//digitalWrite(13, HIGH);
		if(mType == 0)
		{
			/*for(int i = 0; i<6;i++){
				if(Serial.read() > 0)
				{
					digitalWrite(13, HIGH);
				}
				delay(100);
				digitalWrite(13,LOW);
				delay(100);

			}*/

			pfirstColor[0] = Serial.read();
			pfirstColor[1] = Serial.read();
			pfirstColor[2] = Serial.read();
			psecondColor[0] = Serial.read();
			psecondColor[1] = Serial.read();
			psecondColor[2] = Serial.read();

		}
		else
		{
			//digitalWrite(13, HIGH);
			bpm = Serial.read();
			Events = Serial.read();
			Pattern = Serial.read();
			Pattern = Pattern << 8;
			Pattern = Pattern | Serial.read();

		}

	}

}
void initSerialReader(){
	pinMode(13,OUTPUT);
	Serial.begin(BAUDRATE);
}
