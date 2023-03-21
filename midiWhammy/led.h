// led.h

#ifndef _LED_h
#define _LED_h

class Led
{
private:
	int board[2][10] = { 0 };

public:
	Led();
	void SetBoard(const int ledProgram[10], const int ledPrgm[10]);
	void SetPinModeBoard();

	void AllMode(int);
	void AllPrograme(int);
	void AllProgrameOff();
	void AllModeOff();
	void AllProgrameOn();
	void AllModOn();
	void AllOff();
	void AllOn();

	void Loop(int );
	void ProgrameSelect(int);

};


#endif

