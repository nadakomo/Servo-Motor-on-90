#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;

int servoAngle=90;

void setup() {
  
  Servo1.attach(5);
  Servo2.attach(6);
  Servo3.attach(7);
  Servo4.attach(8);
  Servo5.attach(9);
}

void loop() {
  
  Servo1.write(servoAngle);
  Servo2.write(servoAngle);
  Servo3.write(servoAngle);
  Servo4.write(servoAngle);
  Servo5.write(servoAngle);
}
