int redPin=3;
int bright1=20;
int bright2=80;
int bright3=140;
int bright4=200;
int bright5=255;
int bright6=0;

void setup() {
pinMode(redPin, OUTPUT);
}

void loop() {
analogWrite(redPin, bright1);
delay(1000);

analogWrite(redPin, bright2);
delay(1000);

analogWrite(redPin, bright3);
delay(1000);

analogWrite(redPin, bright4);
delay(1000);

analogWrite(redPin, bright5);
delay(1000);

analogWrite(redPin, bright6);
delay(1000);
}
