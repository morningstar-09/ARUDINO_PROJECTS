#define echoPin 2 
#define trigPin 3 
//code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/DISTANCE_SENSOR_USING_HC_SR04_AND_ARDUINO
long duration; 
int distance; 
//code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/DISTANCE_SENSOR_USING_HC_SR04_AND_ARDUINO
void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}
//code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/DISTANCE_SENSOR_USING_HC_SR04_AND_ARDUINO
void loop() 
{
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
//code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/DISTANCE_SENSOR_USING_HC_SR04_AND_ARDUINO
