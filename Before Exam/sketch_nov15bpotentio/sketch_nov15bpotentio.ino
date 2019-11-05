int led=3;
int ana=A0;
int val=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(ana,INPUT);

}

void loop() {
  val=analogRead(ana);
  analogWrite(led,val/4);

}
