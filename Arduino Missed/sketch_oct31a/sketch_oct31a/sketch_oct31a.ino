
#include<Servo.h>
int Servopin=3;
Servo Servo1;

void setup()
{
  Servo1.attach(Servopin);
}
void loop()
{
  Servo1.write(0);
  delay(2000);
  Servo1.write(180);
  delay(2000);
}
