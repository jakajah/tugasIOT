int pinLed =4;
int pinInput = 0;
int periksa = 0;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinInput, INPUT);
}

void loop() {
  periksa = digitalRead(pinInput);

  if (periksa == HIGH) {
    digitalWrite(pinLed, HIGH);
    delay(100);
  } else {
    digitalWrite(pinLed, LOW)
    delay(100);
  }
}
