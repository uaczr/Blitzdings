// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _Blitzdings_H_
#define _Blitzdings_H_

//add your includes for the project Blitzdings here
#include "Arduino.h"
#include "FastLED.h"
//end of add your includes here
#define NUM_LEDS 1
#define DATA_PIN 3
#define CLOCK_PIN 13


CRGB leds[NUM_LEDS];
int bpm = 0;


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
