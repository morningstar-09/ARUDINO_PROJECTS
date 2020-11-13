//Code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Temperature%20Sensor%20Using%20Thermistor
int ThermistorPin = 0;
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
//Code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Temperature%20Sensor%20Using%20Thermistor
void setup() {
Serial.begin(9600);
}
//Code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Temperature%20Sensor%20Using%20Thermistor
void loop() {
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15;
  Serial.print("Temperature: "); 
  Serial.print(T);
  Serial.println(" degree centigrade"); 
  delay(500);
}
//Code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Temperature%20Sensor%20Using%20Thermistor
