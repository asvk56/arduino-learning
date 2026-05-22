int potPin=A0;
int gPin=3;
int potVal;
float LEDVal;

void setup() {
pinMode(potPin, INPUT);
pinMode(gPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
potVal=analogRead(potPin);
LEDVal=(255./1023.)*potVal;
analogWrite(gPin, LEDVal);
Serial.println(LEDVal);
delay(2000);
}
