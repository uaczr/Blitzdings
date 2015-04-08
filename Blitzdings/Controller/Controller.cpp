/*
 * Control.cpp
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */



#include "Controller.h"

Controller::Controller() {

//Initialisiere recbuffer
	for(i = 0; i< 64;i++)
		recbuf[i] = 0;
	i = 0;
	available = 0;

//Definition der Startwerte
	EVENTS = 0;
	PATTERNS = 0;			//2

	for(i = 0; i < 232; i++)
		parameter[i] = 0;

	for(i = 0; i < 8; i++)
	{
		colorsbuf[i] = CRGB(0,0,0);
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

//initialisere PATTERNS
	pattern1.init(colors, leds, numLeds, parameter);


	//TODO EEPROM Überprüfung für gespeicherte Werte


}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

void Controller::listenSerial(){
	//Hört den Serialport auf die vordefinierten Signale ab

	//Sendet Bereitschaftssignal
	Serial.write(1);

	//Warte auf Antwort des PCs -- Wartezeit ca. 0.5ms -- 500µs
	//TODO Calibrieren bzw testen mit Max/Msp und Python etc
	for(i = 0; i < 400; i++){
		NOP;
	}
	//Lese den seriellen recbuffer aus wenn Daten angekommen sind
	timeoutControll = 0;
	available = 0;
	while(Serial.available()>0 && timeoutControll == 0)
	{
		//Wenn ein Tupel aus Parameternr und Parameter vorhanden auslesen
		if(Serial.available() > 1)
		{
			recbuf[available] = Serial.read();
			recbuf[available+1] = Serial.read();
			available += 2;
		}
		//Wenn kein Tuple warten für 125µs -- entspricht bei 115200 byte/s ca 13 Zeichen
		else
		{
			for(i = 0; i < 100; i++){
				NOP;
			}
			//Timeout wenn keine neuen Tuple angekommen sind
			if(Serial.available()<2)
			{
				timeoutControll=1;
			}
		}
	}

	//Übertrage die gelesenen Daten in die lokalen Variabeln
	for(i = 0; i < available; i += 2)
	{
		switch(recbuf[i]){
		case 1:
			EVENTS = recbuf[i + 1];
			break;
		case 2:
			PATTERNS = recbuf[i + 1];
			break;
		case 3:
			BPM = recbuf[i+1];
			break;
		case 4:
			GPARAM3 = recbuf[i+1];
			break;
		case 5:
			P1_TYPE = recbuf[i+1];
			break;
		case 6:
			P1_TIME = recbuf[i+1];
			break;
		case 7:
			P1_COLOR = recbuf[i+1];
			break;
		case 8:
			P2_PARAM1 = recbuf[i+1];
			break;
		case 9:
			P2_PARAM2 = recbuf[i+1];
			break;
		case 10:
			P2_PARAM3 = recbuf[i+1];
			break;
		case 11:
			P3_PARAM1 = recbuf[i+1];
			break;
		case 12:
			P3_PARAM2 = recbuf[i+1];
			break;
		case 13:
			P3_PARAM3 = recbuf[i+1];
			break;
		case 14:
			P4_PARAM1 = recbuf[i+1];
			break;
		case 15:
			P4_PARAM2 = recbuf[i+1];
			break;
		case 16:
			P4_PARAM3 = recbuf[i+1];
			break;
		case 17:
			P5_PARAM1 = recbuf[i+1];
			break;
		case 18:
			P5_PARAM2 = recbuf[i+1];
			break;
		case 19:
			P5_PARAM3 = recbuf[i+1];
			break;
		case 20:
			P6_PARAM1 = recbuf[i+1];
			break;
		case 21:
			P6_PARAM2 = recbuf[i+1];
			break;
		case 22:
			P6_PARAM3 = recbuf[i+1];
			break;
		case 23:
			P7_PARAM1 = recbuf[i+1];
			break;
		case 24:
			P7_PARAM2 = recbuf[i+1];
			break;
		case 25:
			P8_PARAM1 = recbuf[i+1];
			break;
		case 26:
			P8_PARAM2 = recbuf[i+1];
			break;
		case 27:
			P8_PARAM3 = recbuf[i+1];
			break;
		case 28:
			colors[0].r = recbuf[i+1];
			colorChange ++;
			break;
		case 29:
			colorsbuf[0].g = recbuf[i+1];
			colorChange ++;
			break;
		case 30:
			colorsbuf[0].b = recbuf[i+1];
			colorChange ++;
			break;
		case 31:
			colorsbuf[1].r = recbuf[i+1];
			colorChange ++;
			break;
		case 32:
			colorsbuf[1].g = recbuf[i+1];
			colorChange ++;
			break;
		case 33:
			colorsbuf[1].b = recbuf[i+1];
			colorChange ++;
			break;
		case 34:
			colorsbuf[2].r = recbuf[i+1];
			colorChange ++;
			break;
		case 35:
			colorsbuf[2].g = recbuf[i+1];
			colorChange ++;
			break;
		case 36:
			colorsbuf[2].b = recbuf[i+1];
			colorChange ++;
			break;
		}
	}

	//Farbabgleich
	if(colorChange > 3)
	{
		for(i = 0; i < 3; i++){
			colors[i] = colorsbuf[i];
		}
		colorChange = 0;
	}
}


void Controller::callPatterns(){

//Ruft die aktuellen PATTERNS auf
	timeDelta = millis()-timeOld;

//First check if pattern active then check if event or fade
	if(PATTERNS%2){
		if(EVENTS%2){
			pattern1.eventDetected();
		}
		else
		{
			pattern1.eventFade(&timeDelta);
		}
	}
	if((PATTERNS >> 1)%2){
		if((EVENTS >> 1)%2){
			//pattern2
		}
		else
		{
			//pattern2
		}
	}
	if((PATTERNS >> 2)%2){
		if((EVENTS >> 2)%2){
			//pattern3
		}
		else
		{
			//pattern3
		}
	}
	if((PATTERNS >> 3)%2){
		if((EVENTS >> 3)%2){
			//pattern4
		}
		else
		{
			//pattern4
		}
	}
	if((PATTERNS >> 4)%2){
		if((EVENTS >> 4)%2){
			//pattern5
		}
		else
		{
			//pattern5
		}
	}
//Reset EVENTS to zero
	EVENTS = 0;
}
