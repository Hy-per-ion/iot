//declare
int led = BUILTIN_LED;// pin number-42
//setup
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}
//loop
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  Serial.println("Led On");
  delay(500);// 1sec
  digitalWrite(led,LOW);
  Serial.println("Led Off");
  delay(500);// 1sec
}
