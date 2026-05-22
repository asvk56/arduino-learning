int redPin=12;
int greenPin=11;
int yellowPin=10;
String myColor;
String msg="What Color LED?";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){

}
myColor=Serial.readString();
if(myColor=="red" || myColor=="Red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
}
if(myColor=="green" || myColor=="Green"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
}
if(myColor=="yellow" || myColor=="Yellow"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
}
}
