// led.h

#ifndef _LED_h
#define _LED_h

class Led
{
private:
	static int board[2][10];

public:

	static void SetPinModeBoard();

	static void AllMode(int);
	static void AllProgramme(int);
	static void AllProgrammeOff();
	static void AllModeOff();
	static void AllProgrammeOn();
	static void AllModOn();
	static void AllOff();
	static void AllOn();

	static void Loop(int );
	static void ProgrammeSelect(int);

	static void ProgrammeOn(int);
	static void ProgrammeOff(int);
};


#endif

