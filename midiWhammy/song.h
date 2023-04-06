// song.h
#ifndef _SONG_h
#define _SONG_h

class Song
{
public:
	Song(int);
	void treadSlide(int, int, int );
	void setStartTime();
	void noteUp();
	void noteNexte(int repetition = 1);
	void sendProgrameTread(int, int);
private:
	int bpm = 0;
	int timeSongInSegond = 0;
	int noteNumber = 0;
	long startTime = 0;

};





#endif

