// song.h
#ifndef _SONG_h
#define _SONG_h

class Song
{
public:
	Song(int, int);
	void test(int, int, int );
	void setStartTime();
	void noteUp();
	void noteNexte(int);

private:
	int bpm = 0;
	int timeSongInSegond = 0;
	int noteNumber = 0;
	long startTime = 0;

};





#endif

