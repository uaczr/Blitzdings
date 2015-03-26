// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _Blitzdings_H_
#define _Blitzdings_H_

//add your includes for the project Blitzdings here
#include <Arduino.h>
#include <FastLED.h>
#include "Communication/Communication.h"
#include "Patterns/Caller.h"
//end of add your includes here

//defines
#define NUM_LEDS 1
#define DATA_PIN 3
#define CLOCK_PIN 13

//globale Variabeln
CRGB leds[NUM_LEDS];
extern uint8_t bpm = 0;
extern uint8_t firstColor[3] = {0,0,0};
extern uint8_t secondColor[3] = {0,0,0};
extern uint16_t Pattern = 0;



#ifdef __cplusplus
extern "C" {
#endif
void loop();
void setup();

#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project Blitzdings here




//Do not add code below this line
#endif /* _Blitzdings_H_ */
