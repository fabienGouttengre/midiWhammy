// song.cpp
// 
// 


// pas min = 62.5ns
#include <Arduino.h>
#include "song.h"
#include "midi.h"
#include "led.h"
#include "../config.h"

Song::Song(int bpm) :
    bpm(bpm),
    startTime(micros())
{
}

void Song::playNote(NoteType note, int numberProgram = -1, int treadValue = -1, int delaySlide = 0) {
    if (numberProgram != -1 || numberProgram != lastPtogram) {
        Midi::SendPrograme(numberProgram);
    }
    if (treadValue != -1 && treadValue != lasTreadValue) {
        if (delaySlide != 0) {
            treadSlide(delaySlide, lasTreadValue, treadValue);
        }
        else
        {
            lasTreadValue = treadValue;
            Midi::SendTreadValue(treadValue);
        }
    }
    nextNote(note);
}

void Song::nextNote(NoteType note, int repetition = 1) {
    if (repetition <= 0) {
        return;
    }
    switch (note) {
    case NoteType::WholeNote:
        nextNote(NoteType::HalfNote, 2 * repetition);
        break;
    case NoteType::HalfNote:
        nextNote(NoteType::QuarterNote, 2 * repetition);
        break;
    case NoteType::QuarterNote:
        nextNote(NoteType::EighthNote, 2 * repetition);
        break;
    case NoteType::EighthNote:
        nextNote(NoteType::SixteenthNote, 2 * repetition);
        break;
    case NoteType::SixteenthNote:
        nextNote(NoteType::ThirtySecondNote, 2 * repetition);
        break;
    case NoteType::ThirtySecondNote:
        nextNote(NoteType::SixtyFourthNote, 2 * repetition);
        break;
    case NoteType::SixtyFourthNote:
        nextNote(NoteType::HundredTwentyEighthNote, 2 * repetition);
        break;
    case NoteType::HundredTwentyEighthNote:
        for (int i = 0; i < repetition; i++) {
            long delaySong = ((60000000 / (bpm * 32)) * numberHundredTwentyEighthNote);
            if ((micros() - startTime) < delaySong) {
                int breakTime = delaySong - (micros() - startTime);
                delay(breakTime / 1000);
                delayMicroseconds(breakTime % 1000);
          
            }
            noteUpHundredTwentyEighth();
        }
        break;
    }
}

void Song::treadSlide(int time, int valueStart ,int valueEnd) {
	int rep = (time / TIME_RUN_FOR_TREAD);
	int decal = (valueStart > valueEnd ? (valueStart - valueEnd) : (valueEnd - valueStart));
	if (rep > decal) {
		rep = decal;
	}
	int pas = decal / rep;
	int breakTime = ((time / rep) == 0 ? (time / rep) - TIME_RUN_FOR_TREAD : 0);
	if (valueStart < valueEnd) {
		for (int i = valueStart; i < valueEnd; i += pas) {
            Serial.write((uint8_t)0xB0);
            Serial.write((uint8_t)0x0B);
            Serial.write((uint8_t)i);
            delayMicroseconds(breakTime);
		}
	}
	else {
		for (int i = valueStart; i > valueEnd; i -= pas) {
            Serial.write((uint8_t)0xB0);
            Serial.write((uint8_t)0x0B);
            Serial.write((uint8_t)i);
            delayMicroseconds(breakTime);
		}
	}
    lasTreadValue = valueEnd;
	Midi::SendTreadValue(valueEnd);

}

void Song::noteUpHundredTwentyEighth() {
    numberHundredTwentyEighthNote++;
    if (numberHundredTwentyEighthNote % 32 == 0) {
        Led::Metronome(numberHundredTwentyEighthNote);
    }
}

void Song::sendProgrameTread(int numberProgram, int treadValue) {
	Midi::SendPrograme(numberProgram);
	Midi::SendTreadValue(treadValue);
}

