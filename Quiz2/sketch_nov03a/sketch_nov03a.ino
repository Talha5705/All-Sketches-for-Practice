int pin=3;
//Quiz
void setup() {
  int i;
  pinMode(pin,OUTPUT);
  
  for(i=0;i<2;i++){
    
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(1000);  
    
    }
}

void loop() {
  

}
