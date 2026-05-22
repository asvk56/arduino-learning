int potVal;
int tme=2000;
int potPin=A0;
int redPin=7;

void setup() {
pinMode(potPin, INPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(tme);

while(potVal>1000){
  digitalWrite(redPin, HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(tme);
  }
digitalWrite(redPin, LOW);
}
