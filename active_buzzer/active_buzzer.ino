int potVal;
int potPin=A3;
int buzzPin=8;
int dt=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
Serial.println(potVal);
delay(1000);
while (potVal>1000){
  digitalWrite(buzzPin, HIGH);
  delay(dt);
  potVal=analogRead(potPin);
  Serial.println(potVal);
}
digitalWrite(buzzPin, LOW);
}
