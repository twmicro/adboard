#include <Arduino.h>
#include <ADBoard.h>

Board b;
int pins[] = {b.LED2};
void setup() {
  b.modeOutput(pins);
}

void loop() {
  int value = b.pt_map();
  b.analogTurn(pins[0], value);
}