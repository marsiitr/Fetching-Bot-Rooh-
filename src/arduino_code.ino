#include <Servo.h>
Servo metalservo;
Servo servoleft;
Servo servoright;
int posmetal = 0;
int posleft = 0;
int posright = 0;
int dir1= 4;
int pwm1 = 9;
int dir2 = 5;
int pwm2 = 10;

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

// Defines Tirg and Echo pins of the Ultrasonic Sensor
const int trigPin = 11;
const int echoPin = 12;

// Variables for the duration and the distance
long duration;
int distance;

void setup() {
  	pinMode(dir1, OUTPUT);
	pinMode(pwm1, OUTPUT);
	pinMode(dir2, OUTPUT);
	pinMode(pwm2, OUTPUT);
	pinMode(trigPin, OUTPUT); 
	pinMode(echoPin, INPUT);
	Serial.begin(9600);
	metalservo.attach(6);
	servoleft.attach(7);
	servoright.attach(8);
}

void loop() {

//  if(){
//  	motorrotate();                      // rotate(condition required)
//  }

distance = calculateDistance();

	if (distance > 9){
		motorfwd();                    // move forward                                                       
	}

	else if (distance < 9){
		motorstop();                    // stop

		//Lifting the arms
		for (posmetal = 0; posmetal <= 180; posmetal += 1){ // goes from 0 degrees to 180 degrees
		  // in steps of 1 degree
		  metalservo.write(posmetal);              // tell servo to go to position in variable 'pos'
		  delay(15);                       // waits 15ms for the servo to reach the position
		}                                                       
	}

}


// Function for calculating the distance measured by the Ultrasonic sensor
int calculateDistance(){ 
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance= duration*0.034/2;
  return distance;
}  

void motorfwd(){
  for(int i= 0; i<= 50; i++){
  digitalWrite(dir1, HIGH);
  analogWrite(pwm1, i);
  digitalWrite(dir2, HIGH);
  analogWrite(pwm2, i);
  }
}

void motorstop(){
  for(int i= 0; i<= 50; i++){
  digitalWrite(dir1, HIGH);
  analogWrite(pwm1, 0);
  }
  for(int i= 0; i<= 50; i++){
  digitalWrite(dir2, HIGH);
  analogWrite(pwm2, 0);
  }
}

void motorrotate(){
  for(int i= 0; i<= 10; i++){
  digitalWrite(dir1, HIGH);
  analogWrite(pwm1, i);
  }
  for(int i= 0; i<= 10; i++){
  digitalWrite(dir2, LOW);
  analogWrite(pwm2, i);
  }
}
