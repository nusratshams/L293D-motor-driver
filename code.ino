#include <AFMotor.h>

AF_DCMotor motorA(1);
AF_DCMotor motorB(2);

void setup() 
{
  Serial.begin(9600);
  motorA.setSpeed(250);
  motorB.setSpeed(250);
}

void loop() 
{
  //Forward
  Serial.println("Forward");
  motorA.run(FORWARD);
  motorB.run(FORWARD);
  delay(1000);
  
}
