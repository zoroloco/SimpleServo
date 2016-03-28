
/*
  This example sketch will rotate a servo 180 degrees.
*/


#include<SimpleServo.h>
#include<Servo.h>

const int servoPin = 9;

SimpleServo servo(servoPin);

void setup()
{
  servo.attachPin(servoPin);
  servo.setSpeed(8);
  servo.setAngle(0);
}


void loop()
{  
  servo.setAngle(180);

  int moveVal = servo.move();//this must be called in the loop.

  if(servo.isMoving()){
	//you can blink some activity LED here if you want.
  }
}