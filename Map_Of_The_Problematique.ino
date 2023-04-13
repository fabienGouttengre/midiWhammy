#include "./src/song.h"
#include "config.h"

void Map_Of_The_Problematique() {
	Song* song = new Song(125);
	long delayA = 3400;


	song->nextNote(Song::WholeNote, 1);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_3(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_3(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_3(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_3(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_3(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_4(song, delayA);
	sequence_4(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_2(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);
	sequence_1(song, delayA);

	//todo minimize code
	song->sendProgrameTread(8, TREAD_VALUE_MIN);
	song->nextNote(Song::WholeNote, 30);

	delete song;
}
void sequence_1(Song* &song, long delayA) {

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);


	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

}

void sequence_2(Song* &song, long delayA) {

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);


	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);;

}

void sequence_3(Song*& song, long delayA) {

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);


	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);
}

void sequence_4(Song*& song, long delayA) {

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);


	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);

	song->playNote(Song::EighthNote, 8, TREAD_VALUE_MAX);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN);

	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MAX, delayA);
	song->playNote(Song::EighthNote, 1, TREAD_VALUE_MIN, delayA);
}
