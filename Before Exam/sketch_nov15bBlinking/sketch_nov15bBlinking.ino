int led=8;
void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(led,LOW);
  delay(200);
}
