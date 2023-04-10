/*
 Name:		midiWhammy.ino
 Created:	21/03/2023 03:10:34
 Author:	fabien goutttenegre
*/

// the setup function runs once when you press reset or power the board
#include "song.h"
#include "midi.h"
#include "button.h"
#include "led.h"
#include <Arduino.h>

#include "config.h"


int programeSelecte = 1;
void demarragepgrm();
void Whammy_Preset();


void setup() {

    Midi::SetMidi();
	Led::SetPinModeBoard();
	Button::SetPin();

	Led::Loop(0);
}

// the loop function runs over and over again until power down or reset
void loop() {
    if (Button::Check(BUTTON_START)) {
        demarragepgrm();
    }
    else if (Button::Check(BUTTON_UP)) {
        Led::ProgrammeOff(programeSelecte);
        if (programeSelecte == 10) {
            programeSelecte = 1;
        }else{
            programeSelecte ++;
        }
    }
    else if (Button::Check(BUTTON_DOWN)) {
        Led::ProgrammeOff(programeSelecte);
        if (programeSelecte == 1) {
            programeSelecte = 10;
        }
        else {
            programeSelecte -- ;
        }
    }
    // led correspondante au programme 
    Led::ProgrammeOn(programeSelecte);
}

void demarragepgrm() {
    switch (programeSelecte) {
    case 1:
        Whammy_Preset();
        break;
    case 2:
        MUSIC_1();
        break;
    case 3:
        MUSIC_2();
        break;
    case 4:
        MUSIC_3();
        break;
    case 5:
        MUSIC_4();
        break;
    case 6:
        MUSIC_5();
        break;
    case 7:
        MUSIC_6();
        break;
    case 8:
        MUSIC_7();
        break;
    case 9:
        MUSIC_8();
        break;
    case 10:
        MUSIC_9();
        break;
    default:
        for (int i = 0; i < 3; i++) {
            Led::AllOn();
            delay(100);
            Led::AllOff();
            delay(100);
        }
    }
}
void Whammy_Preset() {
    int program = 0;
    while (true) {
        Led::ProgrammeSelect(program + 1);
        if (Button::Check(BUTTON_START)) {
            break;
        }
        if (Button::Check(BUTTON_UP)) {
            if (program == MAXPROGRAME - 1) {
                program = 1;
            }
            else {
                program++;
            }
            Midi::SendPrograme(program);
        }
        else if (Button::Check(BUTTON_DOWN)) {
            if (program == 0) {
                program = MAXPROGRAME - 1;
            }
            else {
                program--;
            }
            Midi::SendPrograme(program);
        }
    }
    Led::AllProgrammeOff();
}
