#include <Arduino.h>

const int gas = A0;
const int brake = A1;

void setup() {
    Serial.begin(115200);
}

void loop() {
    int gasVal = analogRead(gas);
    int brakeVal = analogRead(brake);

    Serial.print(gasVal); Serial.print(", ");
    Serial.println(brakeVal);

    delay(8);
}