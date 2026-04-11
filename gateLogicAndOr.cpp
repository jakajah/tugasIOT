int pinled =12;
int inputA =34;
int inputB =22;
int A = 0;
int B = 0;
int hitung =0;

void setup() {
    pinMode(pinled, OUTPUT);
    pinMode(inputA, INPUT);
    pinMode(inputB, INPUT);
    Serial.begin(115200);
    delay(1000);
}

void loop() {
    A = digitalRead(inputA);
    B = digitalRead(inputB);
    hitung = A || B;
    digitalWrite(pinled,!hitung);
    Serial.print("(A=");
    Serial.print(A);
    Serial.print(" B=");
    Serial.print(B);
    Serial.print(") hasil=(");
    Serial.print(A);
    Serial.print(" NOT ");
    Serial.print(B);
    Serial.print(")=");
    Serial.println(!hitung);
    delay(500);
}