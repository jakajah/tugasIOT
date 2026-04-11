#include <liquidCrystal.h>

liquidCrystal lcd(17,16,4, 0, 2, 15);

void setup() {
    lcd.begin(16, 2);
    lcd.print("hello, Sibermu!");
    lcd.print("spirit of Sangsurya");
}

void loop() {
}