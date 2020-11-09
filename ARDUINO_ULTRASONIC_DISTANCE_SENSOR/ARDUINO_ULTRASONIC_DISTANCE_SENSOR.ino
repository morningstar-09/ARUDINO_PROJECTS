//Code downloaded from https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR
#define echoPin 2 
#define trigPin 3 
long duration; 
int distance;
//Code downloaded from https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); 
  Serial.println("with Arduino UNO R3");
}
//Code downloaded from https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR
void loop() { 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);  
  distance = duration * 0.034 / 2;   
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
//Code downloaded from https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR
