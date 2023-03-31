/*
  Ultrasonic Sensor HC-SR04 and Arduino Tutorial

  by Dejan Nedelkovski,
  www.HowToMechatronics.com

*/
// defines pins numbers
const int trigPin = 5;
const int echoPin = 6;

const int trigPin2 = 6;
const int echoPin2 = 7;

// defines variables
long duration;
long duration2;

int distance = 5;
int distance2;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  //digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
//  digitalWrite(trigPin2, HIGH);  
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
//  digitalWrite(trigPin2, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);

//  duration2 = pulseIn(echoPin2, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  //distance2 = duration2 * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("\nDistance: ");
  Serial.println(distance);

 // Serial.print("\nDistance2: ");
  //Serial.println(distance2);
}
