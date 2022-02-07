int sensorPin = A2;

void setup() {
  Serial.begin(9600);
}

int getDistance() {
  return analogRead(sensorPin);
}

void print_range(){
Serial.print("distance = ");
Serial.print(getDistance());
Serial.println("cm");
}

void loop() {
  print_range();
  if(getDistance() < 30) {
    digitalWrite(17, HIGH);
    delay(250);
    digitalWrite(17, LOW);
    delay(250);
  }
}
