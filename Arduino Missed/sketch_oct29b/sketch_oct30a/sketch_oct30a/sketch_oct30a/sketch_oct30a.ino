int led=12;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("LED ON");
digitalWrite(led,HIGH);
delay(2000);
Serial.println();
Serial.print("LED OFF");
digitalWrite(led,LOW);
delay(1000);
Serial.println();
}
