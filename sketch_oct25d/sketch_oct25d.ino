float pin=A5;

void setup() {
   pinMode(pin,INPUT);
   Serial.begin(9600);

}

void loop() {
  float voltage=analogRead(pin);
  float cel=(voltage-0.5)*100;
  Serial.println("The Temp is");
  Serial.print(cel);
  delay(200);

}
