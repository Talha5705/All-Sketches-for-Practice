int in=A0;
int led=3;
int val=0;
int cel=0;
void setup() {
  pinMode(in,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val=analogRead(in);
  cel=val*0.48828125;
  Serial.println(cel);
  delay(500);

  if (cel<30){
  digitalWrite(led,HIGH);
  
  }else{digitalWrite(led,LOW);}
  }
