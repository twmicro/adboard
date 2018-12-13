#include <ADBoard.h>
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void Board::onLed(int pin)
{
	digitalWrite(pin, 1);
} 
void Board::offLed(int pin)
{
	digitalWrite(pin, 0);
}
void Board::analogTurn(int pin, int anlg)
{
	analogWrite(pin, anlg);
}
void Board::lcdTo(int charIndex, int lineIndex)
{
	lcd.setCursor(charIndex, lineIndex);
}
void Board::lcdInit()
{
	lcd.init();
	lcd.backlight();
	lcd.begin(16, 2);
}
void Board::lcdPrint(char* text)
{
	lcd.print(text);
}
int Board::getButton1()
{
	return digitalRead(BUTTON1);
}
int Board::getButton2()
{
	return digitalRead(BUTTON2);
}
int Board::getButton3()
{
	return digitalRead(BUTTON3);
}
int Board::pt_map()
{
	return map(POTENCIOMETER, 0, 1023, 0, 255);
}
void Board::modeOutput(int* pins)
{
	for(int i=0;i < sizeof(pins);i++)
		pinMode(pins[i], OUTPUT);
}
void Board::buzzer(int note, int time)
{
	tone(BUZZER, note, time);
	delay(time);
	noTone(BUZZER);
}