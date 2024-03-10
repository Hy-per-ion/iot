int soundPin = 7;
void setup() {
  pinMode(soundPin,INPUT);
  pinMode(A0,INPUT);
  pinMode(42,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int soundRead = digitalRead(soundPin);
  int soundAnalog = analogRead(A0);
  if(soundRead == 1)
  {
    digitalWrite(42,HIGH);
    digitalWrite(6,LOW);
    Serial.println(soundRead);
    Serial.println(soundAnalog);
    delay(500);
  }
  else if(soundRead == 0)
  {
    digitalWrite(42,LOW);
    digitalWrite(6,HIGH);
    Serial.println(soundRead);
    Serial.println(soundAnalog);
    delay(500);
  }
}

// 0 1 8