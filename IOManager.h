#ifndef IOManager_h
#define IOManager_h

#include "Arduino.h"

class IOManager {
public:
	IOManager();
	void addInputs(int *pin);
	void addOutputs(int *pin);
};

#endif
