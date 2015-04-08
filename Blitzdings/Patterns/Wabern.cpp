/*
 * Wabern.cpp
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */

#include "Wabern.h"

Wabern::Wabern(CRGB *colors, CRGB *leds, uint16_t length, uint8_t * parameter) {
	// TODO Auto-generated constructor stub

}
Wabern::Wabern(){

}

Wabern::~Wabern() {
	// TODO Auto-generated destructor stub
}

void Wabern::eventDetected(){
	switch (P1_TYPE)
	{
	case 0:
		//standard Waveform

		//berechne Abfallgeschwindigkeit
		vAbfallr = ptrColors[P1_COLOR].r/(float)P1_TIME*(60000/(float)BPM);
		vAbfallg = ptrColors[P1_COLOR].g/(float)P1_TIME*(60000/(float)BPM);
		vAbfallb = ptrColors[P1_COLOR].b/(float)P1_TIME*(60000/(float)BPM);

		//speichere Startfarbe um nicht zu viel Abfall zu erzeugen
		farbwert = ptrColors[P1_COLOR];

		//setze Farbwert
		for(i = 0; i < numLeds; i++)
		{
			qadd8(ptrleds[i].r, farbwert.r);
			qadd8(ptrleds[i].g, farbwert.g);
			qadd8(ptrleds[i].b, farbwert.b);
		}

		break;
	case 1:
		//Rectangle
		break;
	case 2:
		//Dreieck
		break;
	}
}

void Wabern::eventFade(long *deltaT){
	switch (P1_TYPE)
	{
	case 0:
		//standard Waveform
		standardWave(deltaT);
		break;
	case 1:
		//Rectangle
		break;
	case 2:
		//Dreieck
		break;
	}
}

void Wabern::standardWave(long *deltaT)
{
	//berechne Schrittabfall
	dFarber = (*deltaT) * vAbfallr;
	dFarbeg = (*deltaT) * vAbfallg;
	dFarbeb = (*deltaT) * vAbfallb;

	//berechen neue Ledmatrix
	for(i=0; i < numLeds; i++){
		//teste ob Abfall größer 1 und nicht schon Verlust der gesamten Farbintensität erzielt
		if(dFarber >= 1 && farbwert.r != 0){
			qsub8(ptrleds[i].r, dFarber);
			qsub8(farbwert.r, dFarber);
		}

		if(dFarbeg >= 1 && farbwert.g != 0){
			qsub8(ptrleds[i].g, dFarbeg);
			qsub8(farbwert.g, dFarbeg);
		}

		if(dFarbeb >= 1 && farbwert.b != 0){
			qsub8(ptrleds[i].b, dFarbeb);
			qsub8(farbwert.b, dFarbeb);
		}

	}

}

void Wabern::rectangleWave(long *deltaT){

}
