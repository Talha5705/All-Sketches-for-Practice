#include<Servo.h>
int pin=3;
Servo myServo;

void setup() {
  myServo.attach(pin);

}

void loop() {
  int i=0;
  for(i=0;i<=180;i++){
    myServo.write(i);
    delay(50);
    }
  for(i=180;i>=0;i--){
    myServo.write(i);
    delay(50);
    }
}
