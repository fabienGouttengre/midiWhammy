/*
 Name:		midiWhammy.ino
 Created:	21/03/2023 03:10:34
 Author:	fabien goutttenegre
*/

// the setup function runs once when you press reset or power the board
#include <Arduino.h>
#include "config.h"
#include "led.h"

void setup() {
	Serial.begin(31250);

	pinMode(START, INPUT);
	pinMode(UP, INPUT);
	pinMode(DOWN, INPUT);

	Led::SetPinModeBoard();
	Led::Loop(3);
}

// the loop function runs over and over again until power down or reset
void loop() {
  delay(800);
}