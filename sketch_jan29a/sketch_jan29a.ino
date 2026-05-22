void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Light ON
  delay(1000);                        // Ruko (0.1 Second)
  digitalWrite(LED_BUILTIN, LOW);    // Light OFF
  delay(1000);                        // Ruko (0.1 Second)
}