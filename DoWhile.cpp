#define LED1 0
#define LED2 2
#define LED3 15
#define LED4 13

void setup() {
 pinMode (LED1, OUTPUT);
 pinMode (LED2, OUTPUT);
 pinMOde (LED3, OUTPUT);
 pinMode (LED4, OUTPUT);

 int k=5;
 do {
  digitalWrite (LED1, HIGH);
  digitalWrite (LED2, HIGH);
  digitalWrite (LED3, HIGH);
  digitalWrite (LED4, HIGH);
  delay(1000);
  k++;

}while(k<5);
 digitalWrite (LED1, HIGH);
 digitalWrite (LED2, LOW);
 digitalWrite (LED3, HIGH);
 digitalWrite (LED4, LOW);
 delay(4000);
}

void loop() {
}
