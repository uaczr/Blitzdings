/*
 * Control.h
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */


#ifndef CONTROLLER_CONTROL_H_
#define CONTROLLER_CONTROL_H_

#include <FastLED.h>
#include <Arduino.h>
#include "../defines.h"
#include "../PATTERNS/Wabern.h"

//Wichtige Defines
#define NUM_LEDS 100
#define DATA_PIN 12
#define BAUDRATE 115200

//Assembler Defines
#define NOP2 __asm__ ("rjmp .+0");		//Interruptable?


class Controller {
private:

	uint16_t i;					//Generalzähler

//Felder:
	CRGB leds[NUM_LEDS];
	uint8_t parameter[232];
	CRGB colors[8];
	CRGB colorsbuf[8];
	uint8_t recbuf[64];


//Communicationsvariabeln:
	uint8_t available;			//Anzahl der Zwischengespeicherten Bytes
	uint8_t timeoutControll = 0;
	uint8_t colorChange;		//Colorchange > 3 = Farbwechesel
	uint16_t numLeds = NUM_LEDS;
	long timeOld;
	long timeDelta;

//Pattern:
	Wabern pattern1;

public:
	Controller();
	virtual ~Controller();
	void listenSerial();
	void callPatterns();
};

#endif /* CONTROLLER_CONTROL_H_ */
