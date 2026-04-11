#define LED1 0
#define LED2 2
#define LED3 15
#define LED4 13

void setup() {
    pinMode (LED1, OUTPUT);
    pinMode (LED2, OUTPUT);
    pinMode (LED3, OUTPUT);
    pinMode (LED4, OUTPUT);
}

void loop() {
    int k;
    for(k=1; k<5; k++){
        if(k=1){
           digitalWrite (LED1, HIGH);
           digitalWrite (LED2, LOW);
           digitalWrite (LED3, LOW);
           digitalWrite (LED4, LOW);
           delay(1000); 
        }
        if(k=2){
            digitalWrite (LED1, LOW);
            digitalWrite (LED2, HIGH);
            digitalWrite (LED3, LOW);
            digitalWrite (LED4, LOW);
            delay(1000);
        }
        if(k=3){
            digitalWrite (LED1, LOW);
            digitalWrite (LED2, LOW);
            digitalWrite (LED3, HIGH);
            digitalWrite (LED4, LOW);
            delay(1000);
        }
        if(k=4){
            digitalWrite (LED1, LOW);
            digitalWrite (LED2, LOW);
            digitalWrite (LED3, LOW);
            digitalWrite (LED4, HIGH);
            delay(1000);
        }
    }
    digitalWrite (LED1, HIGH);
    digitalWrite (LED2, HIGH);
    digitalWrite (LED3, HIGH);
    digitalWrite (LED4, HIGH);
    delay(4000);
}