// midi.cpp
// 
// 

#include "midi.h"

#include <Arduino.h>
void Midi::SetMidi() {
	Serial.begin(31250);
}

void Midi::SendTreadValue(int treadValue) {
		Serial.write((uint8_t)0xB0); //TYPE: control change
		Serial.write((uint8_t)0x0B); //CONTROLLER NUMBER 11: expression pedal
		Serial.write((uint8_t)treadValue);
}

void Midi::SendPrograme(int numPrograme) {

	Serial.write((uint8_t)0xC0);
	Serial.write((uint8_t)numPrograme);
}

