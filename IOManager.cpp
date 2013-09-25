#include "Arduino.h"
#include "IOManager.h"

IOManager::IOManager(int pin)
{
  pinMode(pin, INPUT_PULLUP);
  _pin = pin;
  _state = HIGH;
  _lastState = HIGH;
  _startHold = 0;
  _holdDelay = 20;
  _allow = false;
  _dSwitch = -1;
  _aWritePin = -1;
  _aWriteValue = -1;
}

void IOManager::addInputs(int pin[])
{
}

void IOManager::addOutputs(int pin[])
{
}
