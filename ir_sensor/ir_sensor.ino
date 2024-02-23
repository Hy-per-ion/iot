int ir_sensor = 7;
void setup() {
  pinMode(ir_sensor,INPUT);
  //42 for light and 6 for sound
  pinMode(6,OUTPUT);
}

void loop() {
  int data = digitalRead(ir_sensor);
  if(data==0)
  {
    digitalWrite(6,HIGH);
    Serial.println("Detecting");
  }
  else if(data==1)
  {
    digitalWrite(6,LOW);
    Serial.println("Not Detecting");
  }
  //Serial.println(data);
}
