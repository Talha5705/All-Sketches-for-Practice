int pin=A0;
int ldr_val=0;
int led=3;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT); 
}

void loop() {

  ldr_val=analogRead(pin);
  Serial.println(ldr_val);
  delay(200);

  if(ldr_val<=600){
        digitalWrite(led,HIGH);
    }
    else {
      digitalWrite(led,LOW);
      }
    
}
