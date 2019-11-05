#include<Servo.h>
int servoPin=3;
Servo myServo;

void setup() {
  
  myServo.attach(servoPin);
  myServo.write(0);
  delay(200);
  myServo.write(180);
  delay(200);
  

}

void loop() {
  

}
