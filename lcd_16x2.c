/*
    Project name : ESP32 LCD 16x2 Display
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-lcd-16x2-display
*/

#include <LiquidCrystal.h>

// Define LCD pin mapping to ESP32 GPIO pins
const int rs = 12, en = 14, d4 = 26, d5 = 25, d6 = 33, d7 = 32;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Initialize the LCD with 16 columns and 2 rows
  lcd.begin(16, 2);
  
  // Print a message to the LCD
  lcd.print("Hello, ESP32!");
}

void loop() {
  // Set the cursor to column 0, line 1
  // (Note: column 0 is the first column, line 1 is the second row)
  lcd.setCursor(0, 1);

  // Print the number of seconds since reset
  lcd.print(millis() / 1000);

  delay(1000); // Delay for 1 second
}
