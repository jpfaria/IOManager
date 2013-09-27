#include "Arduino.h"
#include "IOManager.h"

// returns the number of elements in the array
#define SIZE(array) (sizeof(array) / sizeof(*array))

IOManager::IOManager() {
}

void IOManager::addInputs(int *pin) {
	for (int thisPin = 0; thisPin <= SIZE(pin); thisPin++)
		pinMode(pin[thisPin], INPUT);
}

void IOManager::addOutputs(int *pin) {
	for (int thisPin = 0; thisPin <= SIZE(pin); thisPin++)
		pinMode(pin[thisPin], OUTPUT);
}
