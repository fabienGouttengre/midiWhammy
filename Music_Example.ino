#include "./src/song.h"
#include "config.h"

void Music_Example() {

	//initialisation
	int bpm = 125;
	Song* song = new Song(bpm);


	/*
	list of the NoteType :
		NoteType::WholeNote
		NoteType::HalfNote
		NoteType::QuarterNote
		NoteType::EighthNote
		NoteType::SixteenthNote
		NoteType::ThirtySecondNote
		NoteType::SixtyFourthNote
		NoteType::HundredTwentyEighthNote
	*/
	 
	/*
	TREAD VALUE
	  you can take all values between TREAD_VALUE_MIN and TREAD_VALUE_MAX
	  default is 0 and 127
	*/


	//goes to the next note with no effect
	//song->playNote({[NoteType]);
	song->playNote(Song::QuarterNote);
  
	//transmit only the program
	//song->playNote({[NoteType], [programNumber]);
	song->playNote(Song::QuarterNote, 8);

	//transmits to the effect pedal the program and the TREAD VALUE
	//song->playNote({[NoteType], [programNumber], [TREAD VALUE]);
	song->playNote(Song::QuarterNote, 8, TREAD_VALUE_MAX);

	//make a transition with a delay between the previous value and the current value
	//song->playNote({[NoteType], [programNumber], [TREAD VALUE], [delay]);
	song->playNote(Song::QuarterNote, 8, TREAD_VALUE_MAX, 454);

	
	//todo completer
}