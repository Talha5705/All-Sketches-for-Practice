int led=13;
int ldr=0;
int val=0;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val = analogRead(ldr);
  //Serial.println(val);
  if(val < 600)
  {
    Serial.println("No Light");
    digitalWrite(led,HIGH);
  }else{
  
    Serial.println("Light");
    digitalWrite(led,LOW);
  
  }
  delay(250);
}
