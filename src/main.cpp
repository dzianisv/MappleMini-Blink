#include <Arduino.h>

void setup() {
    pinMode(PB1, OUTPUT);  // PB1 is the LED pin on the Maple Mini
}

void loop() {
    digitalWrite(PB1, HIGH);   // turn the LED on
    delay(500);                // wait for 500ms
    digitalWrite(PB1, LOW);    // turn the LED off
    delay(500);                // wait for 500ms
}