#include "Blitzdings.h"
//globale Variabeln

// Define the array of leds


void setup() {

}

void loop() {
	interrupts();
	controller.listenSerial();
	noInterrupts();
	controller.callPatterns();
}
