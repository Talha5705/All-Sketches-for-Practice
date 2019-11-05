int led=3;
int val=0;
int ana=A0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(ana,INPUT);
  Serial.begin(9600);
}

void loop() {
  val=analogRead(ana);
  Serial.println(val);
  delay(200);

  if (val<200){
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  }
