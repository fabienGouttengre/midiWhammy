// button.h

#ifndef _BUTTON_h
#define _BUTTON_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Button{
private:
	enum numButton
	{
		start,
		up,
		down,
	};
public:
	static void SetPin();
	static bool Check(int);
};



#endif

