  //speed of sound = 340m/s = 0.034 micro seconds
//time = 10/0.034
//distance = speed * time
const int trigPin=7;
const int echoPin=8;
long duration;
int   distance;
void setup() {
  pinMode(trigPin,OUTPUT); // sets the tisgPin as an Output
  pinMode(echoPin,INPUT); // sets the echoPin as an Input
  Serial.begin(9600);
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration=pulseIn(echoPin,HIGH);
  // Calculating the distance
  distance = duration * 0.034/2;
  // Prints the distance on the serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(1000);
}
