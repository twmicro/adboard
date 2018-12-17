#include <Arduino.h>
#include <ADBoard.h>

Board b;
int pins[] = {b.LED1, b.LED2, b.LED3, b.LED4, b.LED5};
void setup() {
  b.modeOutput(pins);
}

void loop() {
  for(int i = 0;i < sizeof(pins);i++)
  {
    for(int j = 0;j < 255;j++)
    {
      b.analogTurn(pins[i], j);
      delay(10);
    }
  }
}