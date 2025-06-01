/*
Test step motor L298N *** Use for test

Nema 17

Driver > DM542 


*/
// Include the Arduino Stepper Library
#include <Stepper.h>

// Number of steps per output rotation
const int stepsPerRevolution = 400;  //Set 400

// Create Instance of Stepper library
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);//IN1,IN2,IN3,IN4  


void setup()
{
  // set the speed at 60 rpm: Not ok 
  myStepper.setSpeed(100);//Set 100
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() 
{
  // step one revolution in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(5000);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(5000);
}
