int out=12;
void setup() {
  pinMode(out,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(out,HIGH);
  delay(1000);
  digitalWrite(out,LOW);
  delay(1000);

}
