int ana=A0;
int led=3;
int val;
int temp;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(ana,INPUT);
  Serial.begin(9600);

}

void loop() {
  val=analogRead(ana);
  
  temp = val * 0.48828125;
  Serial.println(temp);
  delay(200);


  if (temp<10){

    digitalWrite(led,HIGH);

  }else
  {
    digitalWrite(led,LOW);
  }
  }
