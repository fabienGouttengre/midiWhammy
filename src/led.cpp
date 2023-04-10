// led.cpp
#include <Arduino.h>
#include "led.h"
#include "../config.h"

 int Led::board[2][10] = { 
		LED_PROGRAMME_1 ,
		LED_PROGRAMME_2 ,
		LED_PROGRAMME_3 ,
		LED_PROGRAMME_4 ,
		LED_PROGRAMME_5 ,
		LED_PROGRAMME_6 ,
		LED_PROGRAMME_7 ,
		LED_PROGRAMME_8 ,
		LED_PROGRAMME_9 ,
		LED_PROGRAMME_10 ,

		LED_MODE_1 ,
		LED_MODE_2 ,
		LED_MODE_3 ,
		LED_MODE_4 ,
		LED_MODE_5 ,
		LED_MODE_6 ,
		LED_MODE_7 ,
		LED_MODE_8 ,
		LED_MODE_9 ,
		LED_MODE_10
	 };
    
 void Led::Metronome(int numberHundredTwentyEighthNote) {
	 analogWrite(Led::board[1][(((numberHundredTwentyEighthNote / 32)-1) % 10)], 0);
	 analogWrite(Led::board[1][((numberHundredTwentyEighthNote / 32) % 10)], 255);
}

 void Led::SetPinModeBoard() {
	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 10; j++) {
			 pinMode(board[i][j], OUTPUT);
		 }
	 }
 }

 void Led::AllMode(const int valueLed) {
	 for (int i = 0; i < 10; i++) {
		 analogWrite(Led::board[0][i], valueLed);
	 }
 }
 void Led::AllProgramme(const int valueLed) {
	 for (int i = 0; i < 10; i++) {
		 analogWrite(Led::board[1][i], valueLed);
	 }
 }

 void Led::AllProgrammeOff() {
	 Led::AllProgramme(0);
 }
 void Led::AllModeOff() {
	 Led::AllMode(0);
 }
 void Led::AllProgrammeOn() {
	 Led::AllProgramme(255);
 }
 void Led::AllModOn() {
	 Led::AllMode(255);
 }
 void Led::AllOff() {
	 Led::AllModeOff();
	 Led::AllProgrammeOff();
 }
 void Led::AllOn() {
	 Led::AllModOn();
	 Led::AllProgrammeOn();
 }

 void Led::Loop(const int nLoop) {
	 Led::AllOff();
	 for (int j = 0; j < nLoop; j++) {
		 for (int i = 0; i < 10; i++) {
			 analogWrite(Led::board[0][i], 255);
			 delay(DLY_LED_LOOP);
			 analogWrite(Led::board[0][i], 0);
		 }
		 for (int i = 10; i > 0; i--) {
			 analogWrite(Led::board[1][i - 1], 255);
			 delay(DLY_LED_LOOP);
			 analogWrite(Led::board[1][i - 1], 0);
		 }
	 }
 }

 void Led::ProgrammeSelect(const int NumProgramme) {

	 for (int i = 9; i >= 0; i--) { // 8 bits
		 if (NumProgramme & (1 << i)) { // si bit est 1
			 analogWrite(Led::board[1][i], 255);// affichage binaire
			 // allumer LED correspondante
		 }
		 else {
			 analogWrite(Led::board[1][i], 0);
			 // �teindre LED correspondante
		 }
	 }
 }

 void Led::ProgrammeOn(int numPrograme) {
	 analogWrite(Led::board[0][numPrograme - 1], 255);
 }
 void Led::ProgrammeOff(int numPrograme) {
	 analogWrite(Led::board[0][numPrograme - 1], 0);
 }