/*
  Button-Controlled LED
  
  This code controls an LED using a push button. When the button is pressed,
  the LED turns on; when released, the LED turns off.
  
  Demonstrates:
  - Digital input reading
  - Digital output control
  - Basic conditional logic
  
  Note: This example uses external pull-up resistor. For internal pull-up,
  change INPUT to INPUT_PULLUP and invert the logic (LOW = pressed).

  Board: Arduino Uno R4 (or R3)
  Components: 
    - Push button
    - LED with 220Ω resistor
    - 10kΩ pull-up resistor (optional, can use internal)
  
  Pin Connections:
  - Button Pin 1 → Digital Pin 12
  - Button Pin 2 → 10kΩ Resistor → 5V (or use INPUT_PULLUP)
  - Button Pin 2 → GND (when pressed)
  - LED Anode → 220Ω Resistor → Digital Pin 13
  - LED Cathode → GND
  
  Library: None
  
  Author: Arduino Community
  Modified: 2024
*/

// Pin definitions
const int buttonPin = 12;  // Digital pin connected to button
const int ledPin = 13;     // Digital pin connected to LED (or use LED_BUILTIN)

// Variable to store button state
int buttonState = 0;  // 0 = LOW (not pressed), 1 = HIGH (pressed)

// Setup function - runs once at startup
void setup() {
  // Configure pins
  pinMode(buttonPin, INPUT);  // Set button pin as input
  pinMode(ledPin, OUTPUT);    // Set LED pin as output
  
  // Optional: Initialize serial for debugging
  // Serial.begin(9600);
}

// Main loop function - runs continuously
void loop() {
  // Read the current state of the button
  buttonState = digitalRead(buttonPin);

  // Control LED based on button state
  if (buttonState == HIGH) {
    // Button is pressed (HIGH)
    digitalWrite(ledPin, HIGH);  // Turn LED on
  } else {
    // Button is not pressed (LOW)
    digitalWrite(ledPin, LOW);   // Turn LED off
  }
  
  // Note: For better debouncing, consider adding a small delay
  // delay(10);  // Debounce delay (optional)
}
