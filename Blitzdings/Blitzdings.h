// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section
#define NUMLEDS 10
#define DATAPIN 53
#define CLOCKPIN 13

#ifndef _Blitzdings_H_
#define _Blitzdings_H_



//add your includes for the project Blitzdings here
#include <Arduino.h>
#include <FastLED.h>
#include "Communication/Communication.h"
#include "Patterns/Caller.h"
#include "Patterns/Blink.h"
//end of add your includes here

//defines





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
