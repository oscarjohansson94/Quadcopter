
/*
 * Oscar Johansson
 * 
 * A simple esc test
 * It will  test a esc controller motor by looping through different speeds
 * Suitible to use to determine speed limits and to verify that the hardware works
 */


#include <Servo.h>

Servo ESC1; // Define the escs 

// Variables used to map the speed
int min_procentage = 0; // how many procent of max speed is minimum
int max_procentage = 100; // how many procent of max speed is maximum
int min_speed = 0;
int max_speed = 180;

void esc_setup(){
  setSpeed(0);
  delay(1000);
}

void setSpeed(int speed_procentage){
  int speed = map(speed_procentage, min_procentage, max_procentage, min_speed, max_speed); 
  ESC1.write(speed);

}

void setup() {
  ESC1.attach(5); //Adds ESC to certain pin
  esc_setup();

}

void loop() {

  int speed_procentage; //Implements speed variable

  for(speed_procentage = 0; speed_procentage <= 80; speed_procentage += 5) {
    setSpeed(speed_procentage); 
    delay(1000);
  }

  delay(4000); //Stays on for 4 seconds

  for(speed_procentage = 80; speed_procentage > 0; speed_procentage -= 5) { // Cycles speed down to 0% power for 1 second
    setSpeed(speed_procentage); 
    delay(1000);

   }

  setSpeed(0); //Sets speed variable to zero no matter what

  delay(1000); //Turns off for 1 second

}
