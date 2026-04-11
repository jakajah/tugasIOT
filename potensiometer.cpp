const int potPin =34;

int potValue =0;
int voltage =0;
void setup() {
    Serial.begin(115200);
    delay(1000);
}

void loop() {
    potValue = analogRead(potPin);
    float voltage = potValue * (5.0/4096.0);
    Serial.print(" Tegangan=");
    Serial.print(voltage);
    Serial.print("v ");
    Serial.print("potensio(ADC)=");
    Serial.println(potValue);
    delay(500);
}