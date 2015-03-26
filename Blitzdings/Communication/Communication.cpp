/*
 * Communication.cpp
 *
 *  Created on: 25.03.2015
 *      Author: Christoph
 */

#include "Communication.h"

void serialReader(){

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
			Pattern = Serial.read() << 8;
			Pattern = Pattern | Serial.read();
		}

	}

}
