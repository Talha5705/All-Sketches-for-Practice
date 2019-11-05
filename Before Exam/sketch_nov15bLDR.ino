int ldr=A0;
int val=0;
int led=3;
void setup() {
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val=analogRead(ldr);
  
  Serial.println(val);
  delay(200);

  if(val<200)
  {digitalWrite(led,HIGH);}
  else {digitalWrite(led,LOW);}
  

}
