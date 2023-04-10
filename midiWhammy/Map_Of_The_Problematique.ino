#include "song.h"

void Map_Of_The_Problematique() {
	Song* song = new Song(125);

	song->nextNote(Song::WholeNote, 1);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_3(song);
	sequence_1(song);
	sequence_2(song);
	sequence_3(song);
	sequence_1(song);
	sequence_2(song);
	sequence_3(song);
	sequence_1(song);
	sequence_2(song);
	sequence_3(song);
	sequence_1(song);
	sequence_2(song);
	sequence_3(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_4(song);
	sequence_4(song);
	sequence_1(song);
	sequence_1(song);
	sequence_2(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);
	sequence_1(song);

	//todo minimize code
	song->sendProgrameTread(8, TREAD_VALUE_MIN);
	song->nextNote(Song::WholeNote, 30);

	delete song;
}
void sequence_1(Song* &song) {
	int delayA = 424;

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

void sequence_2(Song* &song) {
	int delayA = 424;

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

void sequence_3(Song*& song) {
	int delayA = 424;

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

void sequence_4(Song*& song) {
	int delayA = 424;

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
