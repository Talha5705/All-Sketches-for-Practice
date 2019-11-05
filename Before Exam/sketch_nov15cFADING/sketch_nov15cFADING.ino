int led=3;

void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  int i;
  for(i=0;i<=255;i++){     //increasing
    analogWrite(led,i);
    delay(100);
    }

    for(i=255;i>=0;i--)
    {
      analogWrite(led,i);
      delay(100);
      }

}
