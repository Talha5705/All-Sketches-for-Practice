int in=A0;
int led=3;
int val=0;

void setup() {
  pinMode(in,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val=analogRead(in);
  
  Serial.println(val);
  delay(500);

  if (val<700){
  digitalWrite(led,HIGH);
  
  }else{digitalWrite(led,LOW);}
  }
