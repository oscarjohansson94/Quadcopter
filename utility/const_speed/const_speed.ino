
/*
 * Oscar Johansson
 * 
 * A simple esc test
 * It will  test a esc controller motor by looping through different speeds
 * Suitible to use to determine speed limits and to verify that the hardware works
 */


#include <Servo.h>

Servo ESC1; // Define the escs 
Servo ESC2; // Define the escs 
Servo ESC3; // Define the escs 
Servo ESC4; // Define the escs 

void esc_setup(){
  setSpeed(0);
  delay(10000);
}

void setSpeed(int speed){
  ESC1.write(speed);
  ESC2.write(speed);
  ESC3.write(speed);
  ESC4.write(speed);
}

void setup() {
 pinMode(8, OUTPUT);
 ESC1.attach(4);
 ESC2.attach(5);
 ESC3.attach(6);
 ESC4.attach(7);//Adds ESC to certain pin
 esc_setup();
}

void loop() {
  digitalWrite(8,HIGH);
  setSpeed(100);
}
