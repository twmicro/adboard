#ifndef ADBoard_h
#define ADBoard_h
#include <Arduino.h>
class Board
{
	public:
		const int LED1 = 8;
		const int LED2 = 9;
		const int LED3 = 10;
		const int LED4 = 11;
		const int LED5 = 12;
		const int BUTTON1 = 16;
		const int BUTTON2 = 13;
		const int BUTTON3 = 17;
		const int POTENCIOMETER = 21;
		const int BUZZER = 4;
		const int MOTOR = 3;
		void onLed(int pin);
		void offLed(int pin);
		void analogTurn(int pin, int anlg);
		void lcdTo(int charIndex, int lineIndex);
		void lcdPrint(char* text);
		int getButton1();
		int getButton2();
		int getButton3();
		int pt_map();
		void lcdInit();
		void modeOutput(int* pins);
		void buzzer(int note, int time);
};
#endif