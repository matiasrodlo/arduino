# Button-Controlled LED

Controls an LED using a push button. LED turns on when button is pressed, off when released.

Code: [`../projects/06-button.ino`](../projects/06-button.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Push button | 1 | Momentary switch |
| LED | 1 | Standard LED |
| Resistor 220Ω | 1 | LED current limiting |
| Resistor 10kΩ | 1 | Pull-up resistor (optional) |
| Breadboard | 1 | - |
| Jumper wires | 5 | - |

## Wiring

- Button pin 1 → Pin 12
- Button pin 2 → 10kΩ resistor → 5V
- Button pin 2 → GND (when pressed)
- LED anode → 220Ω resistor → Pin 13
- LED cathode → GND

| Component | Arduino Pin |
|-----------|-------------|
| Button | 12 |
| LED (via resistor) | 13 |
| Button (via pull-up) | 5V |

![Wiring Diagram](https://github.com/user-attachments/assets/163c6334-a627-4cd5-b375-cf46b9b194e6)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/1d46dc82-9d6c-4d2f-a4e1-610905772e83)
