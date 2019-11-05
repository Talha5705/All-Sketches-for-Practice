int sensor=A1;
float tempc,tempf,vout;
void setup() {
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  vout=analogRead(sensor);
  vout=(vout*500)/1023;
  tempc=vout;
  tempf=(vout*1.8)+32;
  Serial.print("in Degree c=");
  Serial.println(tempc);
   Serial.print("in Degree f=");
  Serial.println(tempf);
  delay(1000);

  // put your main code here, to run repeatedly:

}
