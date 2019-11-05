int led=3;
int ledState=LOW;
unsigned long permili=0;

void setup() {  
pinMode(led,OUTPUT);
}

void loop() {
  unsigned long ms=millis();
  if((ms-permili)>=1000)
  {permili=ms;}
  if (ledState==LOW){
    ledState=HIGH;
  }
  else
  ledState=LOW;
  digitalWrite(led,ledState);

}
