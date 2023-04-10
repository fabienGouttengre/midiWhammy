// song.h
#ifndef _SONG_h
#define _SONG_h

class Song
{
public:

	Song(int);
		
	enum NoteType {
		WholeNote,
		HalfNote,
		QuarterNote,
		EighthNote,
		SixteenthNote,
		ThirtySecondNote,
		SixtyFourthNote,
		HundredTwentyEighthNote
	};
	enum MyEnum
	{
		test,test2,test3
	};
	void treadSlide(int, int, int );
	void noteUpHundredTwentyEighth();
	void sendProgrameTread(int, int);

	void nextNote(NoteType note, int repetition = 1);

	void playNote(NoteType note, int numberProgram = -1, int treadValue = -1, int delaySlide = 0);

private:

	int bpm = 0;
	int numberHundredTwentyEighthNote = 0;
	long startTime = 0;

	int lastPtogram = 0;
	int lasTreadValue = 0;

	long lastTimer = 0;

};




#endif

