# ESP32 LCD 16x2 Display Project

## Project Overview
This project demonstrates how to interface a 16x2 LCD display with an ESP32 microcontroller. LCD displays are widely used for various applications to provide a simple and effective way to display information.

## Components Needed
- ESP32 Microcontroller
- 16x2 LCD Display
- Jumper Wires
- Breadboard
- Potentiometer (optional, for contrast adjustment)

## Block diagram


## Circuit Setup
1. **Connecting the 16x2 LCD Display to ESP32:**
   - **RS (Register Select):** Connect to GPIO pin 12 on the ESP32.
   - **EN (Enable):** Connect to GPIO pin 14 on the ESP32.
   - **D4:** Connect to GPIO pin 26 on the ESP32.
   - **D5:** Connect to GPIO pin 25 on the ESP32.
   - **D6:** Connect to GPIO pin 33 on the ESP32.
   - **D7:** Connect to GPIO pin 32 on the ESP32.
   - **VSS (Ground):** Connect to GND.
   - **VDD (Power):** Connect to 5V.
   - **V0 (Contrast):** Connect to the middle pin of the potentiometer. Connect the other two pins of the potentiometer to 5V and GND.

## Instructions
1. **Setup:**
   - Include the `LiquidCrystal` library in your sketch to manage the LCD.
   - Define the LCD pin mappings to ESP32 GPIO pins.
   - Initialize the LCD with 16 columns and 2 rows in the `setup()` function.
   - Print a static message "Hello, ESP32!" to the LCD in the `setup()` function.

2. **Operation:**
   - In the `loop()` function:
     - Set the cursor to the beginning of the second row using `lcd.setCursor(0, 1)`.
     - Print the number of seconds since the ESP32 was reset using `millis()` divided by 1000.
     - Add a delay of 1 second before updating the time again.

3. **Considerations:**
   - **Contrast Adjustment:** Use the potentiometer to adjust the LCD contrast for optimal visibility.
   - **Power Supply:** Ensure the LCD is properly powered for stable operation.
   - **Debugging:** Monitor the serial output to troubleshoot any issues with the display.

## Applications
- **Information Display:** Display messages, sensor readings, or status updates in various projects.
- **User Interface:** Create simple menus or interfaces for user interaction.
- **Timers and Counters:** Show elapsed time, countdowns, or other time-related information.

## Notes
- **Library Reference:** The `LiquidCrystal` library simplifies interfacing with LCD displays, providing easy-to-use functions for common tasks.
- **Serial Output:** Utilize the Serial Monitor for real-time debugging and monitoring of the displayed information.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 LCD 16x2 Display](https://projectslearner.com/learn/esp32-lcd-16x2-display)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner