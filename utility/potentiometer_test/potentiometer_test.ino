#include<Servo.h>

Servo ESC1;
Servo ESC2;
Servo ESC3;
Servo ESC4;

void setup() {
  ESC1.attach(9);
  ESC2.attach(8);
  ESC3.attach(7);
  ESC4.attach(6);
  ESC1.writeMicroseconds(1000);
  ESC2.writeMicroseconds(1000);
  ESC3.writeMicroseconds(1000);
  ESC4.writeMicroseconds(1000);
  Serial.begin(9600);
}

void loop() {
  int val;
  val = analogRead(A0);
  val = map(val, 0, 1023, 1000, 2000);
  ESC1.writeMicroseconds(val);
  ESC2.writeMicroseconds(val);
  ESC3.writeMicroseconds(val);
  ESC4.writeMicroseconds(val);
}

