int led=4;
int button=6;
int btnStatus=0;


void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);

}

void loop() {
  btnStatus=digitalRead(button);

  if (btnStatus==HIGH){
    digitalWrite(led,HIGH); 
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
  }
  else{
    digitalWrite(led,LOW);
  }
  }
