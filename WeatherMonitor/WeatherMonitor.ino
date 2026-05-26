#include <Servo.h>

int servoPin=9;
int ledPin=6;
int ldrPin=A0;
int ldrVal;
int dt=1000;
Servo myServo;
String msg1="It's bright out there!";
String msg2="Weather is cloudy!";
String msg3="It's really dark!";
int oldServoAngle=0;

void setup() {
  pinMode(ldrPin,INPUT);
  pinMode(ledPin,OUTPUT);
  myServo.attach(servoPin);
  Serial.begin(9600);
  Serial.println("Weather Monitor Is Ready To Use!");
  Serial.println("Type 'Check' to get weather update.");
}

void loop() {
ldrVal=analogRead(ldrPin);
ldrVal=constrain(ldrVal, 100, 950);
int servoAngle=map(ldrVal,100,950,0,180);
//float slope=(180.0-0.0)/(950.0-100.0);
//int servoAngle=0+(slope*(ldrVal-100));

if (abs(servoAngle-oldServoAngle)>5){
  myServo.write(servoAngle);
  oldServoAngle=servoAngle;
}

if(ldrVal>=700){
  Serial.println(msg1);
  analogWrite(ledPin,0);
}
else if(ldrVal>400 && ldrVal<700){
  Serial.println(msg2);
  analogWrite(ledPin,70);
}
else{
  Serial.println(msg3);
  analogWrite(ledPin,255);
}
//Serial.println(ldrVal);
delay(dt);
}