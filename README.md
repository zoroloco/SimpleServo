# SimpleServo
Forget the delays(), use this library to run 1 or more servos asynchronously and free your even loop.

Your loop method can have logic or accept serial input that changes the angle of the servo.  You change the angle by calling setAngle(x). The loop() should always call the move() method that will move the servo until it reaches the target angle.  The target angle is the last angle you set.  

move() will return the current angle you are at and will return -1 once the target angle is reached.

The setSpeed(n) method will accept a speed value from 1-10.  1 being slowest and 10 being fastest speed.  A speed of 10 would only give a gap of 10ms between degree changes.  A speed of 1 will change the degree once every 100ms.  


# Example

```cpp


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
```
