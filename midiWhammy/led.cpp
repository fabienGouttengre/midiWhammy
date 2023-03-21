// led.cpp

#include "led.h"
#include "config.h"
#include <Arduino.h>


Led::Led() {
	SetBoard(ledProgram, ledMode);
}

 void Led::SetBoard(const int ledProgram[10],const int ledMode[10]) {
	 for (int i = 0; i < 10; i++) {
		 board[0][i] = ledProgram[i];
	 }
	 for (int i = 0; i < 10; i++) {
		 board[1][i] = ledMode[i];
	 }
}

 void Led::SetPinModeBoard() {
	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 10; j++) {
			 pinMode(board[i][j], OUTPUT);
		 }
	 }
 }

 void Led::AllMode(int valueLed) {
	 for (int i = 0; i < 10; i++) {
		 analogWrite(this->board[0][i], valueLed);
	 }
 }
 void Led::AllPrograme(int valueLed) {
	 for (int i = 0; i < 10; i++) {
		 analogWrite(this->board[1][i], valueLed);
	 }
 }

 void Led::AllProgrameOff() {
	 this->AllPrograme(0);
 }
 void Led::AllModeOff() {
	 this->AllMode(0);
 }
 void Led::AllProgrameOn() {
	 this->AllPrograme(255);
 }
 void Led::AllModOn() {
	 this->AllMode(255);
 }
 void Led::AllOff() {
	 this->AllModeOff();
	 this->AllProgrameOff();
 }
 void Led::AllOn() {
	 this->AllModOn();
	 this->AllProgrameOn();
 }

 void Led::Loop(int nLoop) {
	 this->AllOff();
	 for (int j = 0; j < nLoop; j++) {
		 for (int i = 0; i < 10; i++) {
			 analogWrite(this->board[0][i], 255);
			 delay(DLYLED);
			 analogWrite(this->board[0][i], 0);
		 }
		 for (int i = 10; i > 0; i--) {
			 analogWrite(this->board[1][i - 1], 255);
			 delay(DLYLED);
			 analogWrite(this->board[1][i - 1], 0);
		 }
	 }
 }

 void Led::ProgrameSelect(int NumPrograme) {

	 for (int i = 9; i >= 0; i--) { // 8 bits
		 if (NumPrograme & (1 << i)) { // si bit est 1
			 analogWrite(this->board[1][i], 255);// affichage binaire
			 // allumer LED correspondante
		 }
		 else {
			 analogWrite(this->board[1][i], 0);
			 // éteindre LED correspondante
		 }
	 }
 }