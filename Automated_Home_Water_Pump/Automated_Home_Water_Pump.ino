/* Project made by Tushar Gupta (ECE Undergraduate, IIIT Bhopal)
 *  Instagram: https://www.instagram.com/tushartg12/?hl=en
 *  Facebook: https://www.facebook.com/tusharguptatg515
 *  LinkedIn: https://www.linkedin.com/in/tushar-gupta-18015a1b4
 *  Email: tushartg600@gmail.com
 *  Contact Number: (+91) 8005791568
 */
//code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Automated_Home_Water_Pump

const int TRIG_PIN  = 7; 
const int ECHO_PIN  = 6; 
const int RELAY_PIN = 2; 


float duration_us, distance_cm;
//code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Automated_Home_Water_Pump

void setup() {
  Serial.begin (9600);        
  pinMode(TRIG_PIN, OUTPUT);  
  pinMode(ECHO_PIN, INPUT);   
  pinMode(RELAY_PIN, OUTPUT); 
}
void dis(){
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
   //code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Automated_Home_Water_Pump
 
    duration_us = pulseIn(ECHO_PIN, HIGH);
 //code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Automated_Home_Water_Pump
   
    distance_cm = 0.017 * duration_us;
    Serial.print("distance: ");
    Serial.print(distance_cm);
    Serial.println(" cm");
    delay(500);
  }
  /* Project made by Tushar Gupta (ECE Undergraduate, IIIT Bhopal)
 *  Instagram: https://www.instagram.com/tushartg12/?hl=en
 *  Facebook: https://www.facebook.com/tusharguptatg515
 *  LinkedIn: https://www.linkedin.com/in/tushar-gupta-18015a1b4
 *  Email: tushartg600@gmail.com
 *  Contact Number: (+91) 8005791568
 */
 
void loop() {
  dis();
 while(1)
  {
   b:
   digitalWrite(RELAY_PIN,HIGH);
   delay(2000);
   dis();
   if(distance_cm<18) 
    {
     goto a;
    }
  }
 while(1)
  {
   a:
   digitalWrite(RELAY_PIN,LOW);
   delay(100);
   dis();
   if(distance_cm>70) 
    {
     goto b;
    }
  }
  //code downloaded from: https://github.com/morningstar-09/ARUDINO_PROJECTS/tree/master/Automated_Home_Water_Pump


}
/* Project made by Tushar Gupta (ECE Undergraduate, IIIT Bhopal)
 *  Instagram: https://www.instagram.com/tushartg12/?hl=en
 *  Facebook: https://www.facebook.com/tusharguptatg515
 *  LinkedIn: https://www.linkedin.com/in/tushar-gupta-18015a1b4
 *  Email: tushartg600@gmail.com
 *  Contact Number: (+91) 8005791568
 */
