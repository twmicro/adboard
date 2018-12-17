#include <Arduino.h>
#include <ADBoard.h>

Board b;
int pins[] = {b.BUTTON1,b.BUTTON2,b.BUTTON3};
int mode = 1;
void setup() {
  b.modeOutput(pins);
}

void loop() {
  if(digitalRead(b.BUTTON1) == 1)
    mode = 1;
  if(digitalRead(b.BUTTON2) == 1)
    mode = 2;
  if(digitalRead(b.BUTTON3) == 1)
    mode = 3;
  b.buzzer(125 * mode, 100);
  delay(50);
}