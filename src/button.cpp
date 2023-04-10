// 
// 
// 

#include <Arduino.h>
#include "button.h"
#include "../config.h"

void Button::SetPin() {
	pinMode(BUTTON_START, INPUT);
	pinMode(BUTTON_UP, INPUT);
	pinMode(BUTTON_DOWN, INPUT);
}
 
bool Button::Check(const int numBtn) {
	bool butotnActif = false;
	while (digitalRead(numBtn)) {
		delay(TIME_CHECK_BUTTON);
		butotnActif = true;
	}
	return butotnActif;
}
