int ledpin=3;
void setup() {
  
  pinMode(ledpin,OUTPUT);
}

void loop() {
  int i;
  for(i=0; i<=255; i++){
    analogWrite(ledpin,i);
    delay(10);
    }

    //fadeOut
    for(i=255; i<=0; i--){
    analogWrite(ledpin,i);
    delay(10);
    }
  

}
