int readPin=A1;
int readVal;
float voltage2=0;
int delayTime=2000;

void setup() {
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {
readVal=analogRead(readPin);
voltage2=(5./1023.)*readVal;
Serial.println(voltage2);
delay(delayTime);
}
