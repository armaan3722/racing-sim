#include <Arduino.h>

const int wheel = A0;
const int handbrake = A7;

void setup() {
    Serial.begin(115200);
}

void loop() {
    int wheelVal = analogRead(wheel);
    int handbrakeVal = analogRead(handbrake);

    Serial.print(wheelVal); Serial.print(", ");
    Serial.println(handbrakeVal);

    delay(8);
}