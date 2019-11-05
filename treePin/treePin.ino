
int pin=13;
int pin2=8;
int pin3=10;
void setup() {
  pinMode(pin,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
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

  digitalWrite(pin3,HIGH);
  delay(500);
  digitalWrite(pin3,LOW);
  delay(1000);
 //three pins: one high,and other two low
}
