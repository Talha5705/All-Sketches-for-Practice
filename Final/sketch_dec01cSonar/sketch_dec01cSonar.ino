float echo=2;
float trig=3;
long duration,distance;
void setup() {
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);

}

void loop() {
    digitalWrite(trig,LOW);
    delay(2);

    
    digitalWrite(trig,HIGH);
    delay(10);

    digitalWrite(trig,LOW);

    
    duration=pulseIn(echo,HIGH);
    distance=duration*.034/2;
    Serial.println(distance );
    delay(20);
    

}
