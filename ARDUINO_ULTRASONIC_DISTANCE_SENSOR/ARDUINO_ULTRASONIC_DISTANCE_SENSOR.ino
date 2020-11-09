//code link: https://github.com/morningstar-09/ARUDINO_PROJECTS/blob/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR/ARDUINO_ULTRASONIC_DISTANCE_SENSOR.ino
#define echoPin 2 
#define trigPin 3 
long duration; 
int distance;
//code link: https://github.com/morningstar-09/ARUDINO_PROJECTS/blob/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR/ARDUINO_ULTRASONIC_DISTANCE_SENSOR.ino
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}
//code link: https://github.com/morningstar-09/ARUDINO_PROJECTS/blob/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR/ARDUINO_ULTRASONIC_DISTANCE_SENSOR.ino
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
//code link: https://github.com/morningstar-09/ARUDINO_PROJECTS/blob/master/ARDUINO_ULTRASONIC_DISTANCE_SENSOR/ARDUINO_ULTRASONIC_DISTANCE_SENSOR.ino
