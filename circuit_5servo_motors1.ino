// C++ code
//
#include <Servo.h>

Servo base, shoulder, elbow, wrist, gripper;

void setup()
{
  base.attach(11);
  shoulder.attach(5);
  elbow.attach(6);
  wrist.attach(10);
  gripper.attach(9);
}

void loop()
{
  base.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  shoulder.write(90);
  delay(1000);
  elbow.write(90);
  delay(1000);
  wrist.write(90);
  delay(1000);
  gripper.write(90);
  delay(1000);
}