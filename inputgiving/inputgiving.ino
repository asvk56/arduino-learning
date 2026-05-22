int numBlinks;
String msg="How Many Blinks Do You Want? ";
int j;
int bt=1000;
int redPin=2;

void setup() {
Serial.begin(9600);
pinMode(redPin, OUTPUT);  
}

void loop() {
Serial.println(msg);
while(Serial.available()==0){

}
numBlinks=Serial.parseInt();
for(j=1;j<=numBlinks;j++){
  digitalWrite(redPin, HIGH);
  delay(bt);
  digitalWrite(redPin, LOW);
  delay(bt);
}
}
