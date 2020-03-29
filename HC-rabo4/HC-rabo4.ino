#include <NewPing.h>

#define TRIGGER_PIN 12

#define ECHO_PIN 15

#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // Настройка пинов и максимального расстояния.

void setup() {

Serial.begin(9600);

}

void loop() {

delay(50);

unsigned int uS = sonar.ping_cm();
Serial.print("CM ");
Serial.println(uS);



}
