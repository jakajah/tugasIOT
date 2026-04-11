#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  display.clearDisplay();
  
  display.setTextSize(1);
  display.setCursor(20, 0);
  display.print("Selamat datang");
  
  display.setCursor(20, 15);
  display.print("sibermu.ac.id");
  
  display.setCursor(10, 35);
  display.print("Innovate Every day");
  
  display.display();
  delay(2000);

  display.clearDisplay();
  
  display.setTextSize(2);
  display.setCursor(15, 0);
  display.print("Tutorial");
  
  display.setCursor(20, 25);
  display.print("Arduino");
  
  display.setCursor(8, 45);
  display.print("Untuk IoT");
  
  display.display();
  delay(2000);
}