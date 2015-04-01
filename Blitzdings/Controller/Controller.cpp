/*
 * Control.cpp
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */


#include <FastLED.h>
#include <Arduino.h>
#include "Controller.h"

Controller::Controller() {

	//Initialisiere buffer
	for(i = 0; i< 64;i++)
		buf[i] = 0;
	i = 0;
	available = 0;

	// Definition der Startwerte
	events = 0;
	patterns = 0;			//2

	for(i = 0; i < 5; i++)
		parameter[i] = 0;

	for(i = 0; i < 3; i++)
	{
		colorBuf[i] = CRGB(0,0,0);
		colors[i] = CRGB(0,0,0);
	}
	colorChange = 0;
	//intitialisiere RGB-Matrix

	for(i = 0; i< NUM_LEDS;i++)
		CRGB leds[i] = CRGB(0,0,0);

	//inititialisere Leds
	FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
	FastLED.show();


	//intialisiere Seriellen Port
	Serial.begin(BAUDRATE);


	//TODO EEPROM Überprüfung für gespeicherte Werte


}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

void Controller::listenSerial(){
	//Hört den Serialport auf die vordefinierten Signale ab

	//Lese den seriellen Buffer aus
	while(Serial.available()>0)
	{
		if(Serial.available() > 1)
		{
			buf[available] = Serial.read();
			buf[available+1] = Serial.read();
			available += 2;
		}
		else
		{
			for(i = 0; i < 100; i++){
				NOP;
			}
		}
	}

	//Übertrage die gelesenen Daten in die lokalen Variabeln
	for(i = 0; i < available; i += 2)
	{
		switch(buf[i]){
		case 1:
			events = buf[i + 1];
			break;
		case 2:
			patterns = buf[i + 1];
			break;
		case 3:
			parameter[0] = buf[i+1];
			break;
		case 4:
			parameter[1] = buf[i+1];
			break;
		case 5:
			parameter[2] = buf[i+1];
			break;
		case 6:
			parameter[3] = buf[i+1];
			break;
		case 7:
			parameter[4] = buf[i+1];
			break;
		case 8:
			colors[0].r = buf[i+1];
			colorChange ++;
			break;
		case 9:
			colorBuf[0].g = buf[i+1];
			colorChange ++;
			break;
		case 10:
			colorBuf[0].b = buf[i+1];
			colorChange ++;
			break;
		case 11:
			colorBuf[1].r = buf[i+1];
			colorChange ++;
			break;
		case 12:
			colorBuf[1].g = buf[i+1];
			colorChange ++;
			break;
		case 13:
			colorBuf[1].b = buf[i+1];
			colorChange ++;
			break;
		case 14:
			colorBuf[2].r = buf[i+1];
			colorChange ++;
			break;
		case 15:
			colorBuf[2].g = buf[i+1];
			colorChange ++;
			break;
		case 16:
			colorBuf[2].b = buf[i+1];
			colorChange ++;
			break;
		}
	}

	//Farbabgleich
	if(colorChange > 3)
	{
		for(i = 0; i < 3; i++){
			colors[i] = colorBuf[i];
		}
		colorChange = 0;
	}
}


void Controller::callPatterns(){
	//Ruft die aktuellen Patterns auf

}
