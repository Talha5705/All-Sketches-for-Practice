
int pin=13;
int pin2=8;
void setup() {
  pinMode(pin,OUTPUT);
  pinMode(pin2,OUTPUT);

}

void loop() {
  digitalWrite(pin,HIGH);
  delay(500);
  digitalWrite(pin,LOW);
  delay(1000);

  digitalWrite(pin2,HIGH);
  delay(500);
  digitalWrite(pin2,LOW);
  delay(1000);
 //two pins one high,and other one low
}
