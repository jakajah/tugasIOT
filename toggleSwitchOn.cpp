const int buttonPin = 14;
const int ledPin = 4; 
bool lastButtonState = LOW;
bool ledState = LOW;

void setup() {
  
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  
  if (buttonState != lastButtonState) {
   
    if (buttonState == LOW) {
      ledState = !ledState;        
      digitalWrite(ledPin, ledState);
    }
    delay(50);
  }
  lastButtonState = buttonState;
}