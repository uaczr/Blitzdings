/*
 * Control.h
 *
 *  Created on: 01.04.2015
 *      Author: Christoph
 */


#ifndef CONTROLLER_CONTROL_H_
#define CONTROLLER_CONTROL_H_

//Wichtige Defines
#define NUM_LEDS 100
#define DATA_PIN 12
#define BAUDRATE 115200

//Assembler Defines
#define NOP2 __asm__ __volatile__ ("rjmp .+0");


class Controller {
private:

	uint16_t i;					//Generalzähler

//Communicationsvariabeln:
	uint8_t buf[64];			//Zwischenspeicher für Incoming Messages
	uint8_t available;			//Anzahl der Zwischengespeicherten Bytes

	uint8_t events; 			//1
	uint8_t patterns;			//2
	uint8_t parameter[5];		//3 bpm - 4 mood - 5 .. - 6 .. - 7 ..
	CRGB colorBuf[3];			//8-16 Zwischenspeicher für gesendete Farben
	uint8_t colorChange;		//Colorchange > 3 = Farbwechesel

//Felder:
	CRGB colors[3];				//Farben für Patterns
	CRGB leds[NUM_LEDS];		//RGB-Matrix

public:
	Controller();
	virtual ~Controller();
	void listenSerial();
	void callPatterns();
};

#endif /* CONTROLLER_CONTROL_H_ */
