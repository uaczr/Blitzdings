/*
 * Communication.h
 *
 *  Created on: 25.03.2015
 *      Author: Christoph
 */

#ifndef COMMUNICATION_COMMUNICATION_H_
#define COMMUNICATION_COMMUNICATION_H_

#include <Arduino.h>
#include <FastLED.h>


//Defines


//import globale variabeln



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
 * 		16-31	-> Patterns
 *
 ***************************************************************************/

//funktionen

extern void initSerialReader();
extern void serialReader();







#endif /* COMMUNICATION_COMMUNICATION_H_ */
