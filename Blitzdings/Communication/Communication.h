/*
 * Communication.h
 *
 *  Created on: 25.03.2015
 *      Author: Christoph
 */

#ifndef COMMUNICATION_COMMUNICATION_H_
#define COMMUNICATION_COMMUNICATION_H_

#include "Arduino.h"

extern int bpm;


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
 * 		0 		-> Message Type
 * 		1-24 	-> First significant color
 * 		25-50 	-> Second significant color
 *
 * 	Event-Message:
 *
 * 		bits:
 *
 * 		0		-> Message Type
 * 		1-8		-> bpm
 * 		9-25	-> Patterns
 *
 ***************************************************************************/








#endif /* COMMUNICATION_COMMUNICATION_H_ */
