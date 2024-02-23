//int ir_sensor = 7;
int ldr = 7;
void setup() {
  //pinMode(ir_sensor,INPUT);
  pinMode(ldr,INPUT);
  pinMode(42,OUTPUT);
}

void loop() {
  //int data = digitalRead(ir_sensor);
  int data = digitalRead(ldr);
  if (data == 0)
  {
    digitalWrite(42,HIGH);
    Serial.println("Not Detecting");
  }
  else if(data == 1)
  {
    digitalWrite(42,LOW);
    Serial.println("Detecting");
  }
  //Serial.println(data);
}
