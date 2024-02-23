#include <ESP32Servo.h>

Servo myservo;
void setup() {
  Serial.begin(115200);
  myservo.attach(7);
}

void loop() {
  for (int pos = 0; pos <= 90; pos += 1) {
    myservo.write(pos);
    delay(15);
  }
  for (int pos = 90; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
}
// brown - grd
// red -vcc
// orange - signal