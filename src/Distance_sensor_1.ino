#include "sensor.h"


// Light sensor input
int temt6000Pin = A3;



void setup() {
  Serial.begin(9600);
};

void loop() {
  Sensor s2 = Sensor(A2);
  s2.printData();
  /*Sensor s1 = Sensor(A1);
  Sensor s2 = Sensor(A2);
  int value = analogRead(temt6000Pin);
  s0.blinkSensor(); */
};
