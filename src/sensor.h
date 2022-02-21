#ifndef _SENSORHEADER_H
#define _SENSORHEADER_H

class Sensor {
  private:
    int sensorPin;
  public:
    Sensor(int);
    int getDistance();
    void printData();
    void blinkSensor();
};

Sensor::Sensor(int pin) {
  this->sensorPin = pin;
}

int Sensor::getDistance() {
  return analogRead(sensorPin);
};

void Sensor::printData() {
    Serial.print("The sensor pin ");
    Serial.print(sensorPin);
    Serial.print(" distance is: ");
    Serial.print(getDistance());
    Serial.println();
};

void Sensor::blinkSensor() {
  if(getDistance() < 30) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(250);
      digitalWrite(LED_BUILTIN, LOW);
      delay(250);
  }
}

#endif
