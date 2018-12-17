#include <Arduino.h>
#include <ADBoard.h>

Board b; 
int pins[] = {4};
void setup() {
    b.modeOutput(pins);
}

void loop() {
    b.buzzer(330, 100);
    delay(50);
}