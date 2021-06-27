#include <Servo.h>

int ServoAng=90;

Servo myServo;

void setup() {
myServo.attach(9);
}

void loop() {
myServo.write(ServoAng);
}
