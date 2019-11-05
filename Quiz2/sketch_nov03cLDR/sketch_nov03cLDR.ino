int pin=A0;
int ldr_val;
void setup() {
  Serial.begin(9600);
  pinMode(pin,INPUT);
}

void loop() {
  ldr_val=analogRead(pin);
  Serial.println(ldr_val);
  delay(200);

}
