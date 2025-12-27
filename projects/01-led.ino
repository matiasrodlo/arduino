/*
  LED Blink Example
  
  This code blinks an LED connected to digital pin 9. The LED turns on for 
  500ms, then turns off for 500ms, repeating continuously.
  
  This is one of the most fundamental Arduino examples, demonstrating:
  - Digital output control
  - Timing with delay()
  - Basic program structure (setup/loop)

  Board: Arduino Uno R4 (or R3)
  Component: LED with 220Ω resistor
  
  Pin Connections:
  - LED Anode (long leg) → 220Ω Resistor → Digital Pin 9
  - LED Cathode (short leg) → GND
  
  Library: None (uses built-in Arduino functions)
  
  Author: Arduino Community
  Modified: 2024
*/

// Pin definition
const int ledPin = 9;  // Digital pin connected to LED

// Setup runs once when you press reset or power the board
void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

// Loop runs continuously after setup completes
void loop() {
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(500);                 // Pause for 500 milliseconds (half a second)
  digitalWrite(ledPin, LOW);  // Turn the LED off
  delay(500);                 // Pause for 500 milliseconds (half a second)
}
