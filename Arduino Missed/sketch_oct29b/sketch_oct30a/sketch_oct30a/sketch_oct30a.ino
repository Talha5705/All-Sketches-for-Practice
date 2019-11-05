void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  digitalWrite(3,LOW);
 
  Serial.begin(9600);
  Serial.print("Calibrating sensor..");
  for(int i=0;i<5;i++)
  {
    Serial.print("");
    delay(500);
  }
  Serial.println("Sensor activate");

}

void loop() {
  // put your main code here, to run repeatedly:
  int i=digitalRead(3);
  
  if(i==HIGH){
    digitalWrite(4,HIGH);
   
  }else{
  digitalWrite(4,LOW);
   \
  }
    

}
