/*
 * Control.cpp
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */


#include <FastLED.h>
#include <Arduino.h>
#include "../Patterns/Wabern.h"
#include "Controller.h"

Controller::Controller() {

//Initialisiere buffer
	for(i = 0; i< 64;i++)
		buf[i] = 0;
	i = 0;
	available = 0;

//Definition der Startwerte
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



//inititialisere Leds
	FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
	FastLED.show();

//intitialisiere RGB-Matrix
	for(i = 0; i< NUM_LEDS;i++)
		leds[i] = CRGB(0,0,0);




//intialisiere Seriellen Port
	Serial.begin(BAUDRATE);

//initialisiere Zeitmessung
	timeOld = millis();
	timeDelta = 0;

//initialisere Patterns
	pattern1.init(colors, leds, NUM_LEDS);


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
			parameter[5] = buf[i+1];
			break;
		case 8:
			parameter[6] = buf[i+1];
			break;
		case 9:
			parameter[7] = buf[i+1];
			break;
		case 10:
			parameter[8] = buf[i+1];
			break;
		case 11:
			parameter[9] = buf[i+1];
			break;
		case 12:
			parameter[10] = buf[i+1];
			break;
		case 13:
			parameter[11] = buf[i+1];
			break;
		case 14:
			parameter[12] = buf[i+1];
			break;
		case 15:
			parameter[13] = buf[i+1];
			break;
		case 16:
			parameter[14] = buf[i+1];
			break;
		case 17:
			parameter[15] = buf[i+1];
			break;
		case 18:
			parameter[16] = buf[i+1];
			break;
		case 19:
			parameter[17] = buf[i+1];
			break;
		case 20:
			parameter[18] = buf[i+1];
			break;
		case 21:
			parameter[19] = buf[i+1];
			break;
		case 22:
			parameter[20] = buf[i+1];
			break;
		case 23:
			parameter[21] = buf[i+1];
			break;
		case 24:
			parameter[22] = buf[i+1];
			break;
		case 25:
			parameter[23] = buf[i+1];
			break;
		case 26:
			colors[0].r = buf[i+1];
			colorChange ++;
			break;
		case 27:
			colorBuf[0].g = buf[i+1];
			colorChange ++;
			break;
		case 28:
			colorBuf[0].b = buf[i+1];
			colorChange ++;
			break;
		case 29:
			colorBuf[1].r = buf[i+1];
			colorChange ++;
			break;
		case 30:
			colorBuf[1].g = buf[i+1];
			colorChange ++;
			break;
		case 31:
			colorBuf[1].b = buf[i+1];
			colorChange ++;
			break;
		case 32:
			colorBuf[2].r = buf[i+1];
			colorChange ++;
			break;
		case 33:
			colorBuf[2].g = buf[i+1];
			colorChange ++;
			break;
		case 34:
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
	timeDelta = millis()-timeOld;

//First check if pattern active then check if event or fade
	if(patterns%2){
		if(events%2){
			pattern1.eventDetected(parameter);
		}
		else
		{
			pattern1.eventFade(&timeDelta, parameter);
		}
	}
	if((patterns >> 1)%2){
		if((events >> 1)%2){
			//pattern2
		}
		else
		{
			//pattern2
		}
	}
	if((patterns >> 2)%2){
		if((events >> 2)%2){
			//pattern3
		}
		else
		{
			//pattern3
		}
	}
	if((patterns >> 3)%2){
		if((events >> 3)%2){
			//pattern4
		}
		else
		{
			//pattern4
		}
	}
	if((patterns >> 4)%2){
		if((events >> 4)%2){
			//pattern5
		}
		else
		{
			//pattern5
		}
	}
//Reset events to zero
	events = 0;
}
