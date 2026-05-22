int myVoltPin=A2;
int readVal;
float voltage2;
int delayT=1500;
int redPin=9;

void setup() {
Serial.begin(9600);
pinMode(myVoltPin, INPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
readVal=analogRead(myVoltPin);
voltage2=(5./1023.)*readVal;
Serial.println(voltage2);
if(voltage2>4.0){
  digitalWrite(redPin, HIGH);
}
if(voltage2<4.0){
  digitalWrite(redPin, LOW);
}
delay(delayT);
}
