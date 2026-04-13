#include <WiFi.h>
#include <LiquidCrystal_I2C.h>

#define NTP_SERVER      "pool.ntp.org"
#define UTC_OFFSET      25200 
#define UTC_OFFSET_DST  0

const char* ssid        = "Wokwi-GUEST"; 
const char* password    = "";
LiquidCrystal_I2C lcd(0x27, 20, 4);

void printLocalTime() {
    struct tm timeinfo;
    if (!getLocalTime(&timeinfo)) {
        lcd.setCursor(0, 3);
        lcd.print("NTP Error        ");
        return;
    }
    lcd.setCursor(0, 3);
    lcd.print("Jam (WIB): ");
    char timeStr[10];
    strftime(timeStr, sizeof(timeStr), "%H:%M:%S", &timeinfo);
    lcd.print(timeStr);
}

void setup() {
    Serial.begin(115200);
    lcd.init();
    lcd.backlight(); 
    
    lcd.setCursor(0, 0);
    lcd.print("Connecting WiFi...");
    
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("WiFi Connected!");
    
    configTime(UTC_OFFSET, UTC_OFFSET_DST, NTP_SERVER);
}

void loop() {
    if(WiFi.status() == WL_CONNECTED){
        lcd.setCursor(0, 1);
        lcd.print("SSID: ");
        lcd.print(ssid);
        
        lcd.setCursor(0, 2);
        lcd.print("IP: ");
        lcd.print(WiFi.localIP());

        printLocalTime();
    } else {
        lcd.clear();
        lcd.print("Connection Lost");
    }
    delay(1000); 
}