// song.cpp
// 
// 


// pas min = 62.5ns
#include <Arduino.h>
#include "song.h"
#include "midi.h"

Song::Song(int bpm) : bpm(bpm), timeSongInSegond(timeSongInSegond)
{
}

void Song::setStartTime() {
	startTime = micros();
}

void Song::noteUp() {
	noteNumber ++;
}
void Song::noteNexte(int repetition = 1) {
	for (int i = 0; i < repetition; i++)
	{
		if ((micros() - timeSongInSegond) < ((60000000 / bpm) * (noteNumber++))) {
			delayMicroseconds(((60000000 / bpm) * (noteNumber++)) - (micros() - timeSongInSegond));
		}
		noteUp();
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
		for (int i = valueStart; i < valueEnd; i += pas, delayMicroseconds(breakTime)) {
			Midi::SendTreadValue(i);
		}
	}
	else {
		for (int i = valueStart; i > valueEnd; i -= pas, delayMicroseconds(breakTime)) {
			Midi::SendTreadValue(i);
		}
	}
	Midi::SendTreadValue(valueEnd);
}
void Song::sendProgrameTread(int nuberPrograme , int valueTread) {
	Midi::SendPrograme(nuberPrograme);
	Midi::SendTreadValue(valueTread);
}


