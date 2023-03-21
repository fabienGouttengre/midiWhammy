// led.cpp

#include "led.h"
#include "config.h"


Led::Led() {
	SetBoard(ledProgram, ledMode);
}

 void Led::SetBoard(const int ledProgram[10],const int ledPrgm[10]) {
	 for (int i = 0; i < 10; i++) {
		 board[0][i] = ledProgram[i];
	 }
	 for (int i = 0; i < 10; i++) {
		 board[1][i] = ledPrgm[i];
	 }
}

 void Led::SetPinModeBoard() {
	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 10; j++) {
			 pinMode(board[i][j], OUTPUT);
		 }
	 }
 }
