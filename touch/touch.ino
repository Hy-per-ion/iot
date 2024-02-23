int touch = 7;
int led = 42;
int buzz = 6;

void setup() {
  pinMode(touch,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzz,OUTPUT);
}

void loop() {
  int state = digitalRead(touch);
    if (state == HIGH) {
      digitalWrite(led,!digitalRead(led));
      digitalWrite(buzz,!digitalRead(buzz));
      delay(500);
    }
}