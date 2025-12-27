# Tilt Switch

Monitors tilt switch state. Detects orientation changes and outputs digital state (HIGH/LOW) to Serial Monitor.

Code: [`../projects/04-tilt-switch.ino`](../projects/04-tilt-switch.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Tilt Switch | 1 | Ball tilt sensor |
| Resistor 10kΩ | 1 | Pull-up resistor (optional) |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |

## Wiring

- Tilt switch pin 1 → Pin 2
- Tilt switch pin 2 → 10kΩ resistor → 5V (or use INPUT_PULLUP)
- Tilt switch pin 2 → GND

| Component | Arduino Pin |
|-----------|-------------|
| Tilt switch | 2 |
| Pull-up resistor | 5V (optional) |

![Wiring Diagram](https://github.com/user-attachments/assets/e358b030-f88a-4460-affa-cac0d1986f5c)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/ed0c0832-249c-4ac6-ba18-c92c4651afd3)

