# 7-Segment Display

Controls a 7-segment display to show numbers 1-9 and letters A-F sequentially. Each character is displayed for 1 second.

Code: [`../projects/15-7-segment.ino`](../projects/15-7-segment.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| 7-Segment Display | 1 | Common cathode or common anode |
| Resistor 220Ω | 8 | One per segment |
| Breadboard | 1 | - |
| Jumper wires | 9 | - |

## Wiring

- Segment a → 220Ω resistor → Pin 7
- Segment b → 220Ω resistor → Pin 6
- Segment c → 220Ω resistor → Pin 5
- Segment d → 220Ω resistor → Pin 11
- Segment e → 220Ω resistor → Pin 10
- Segment f → 220Ω resistor → Pin 8
- Segment g → 220Ω resistor → Pin 9
- Segment dp → 220Ω resistor → Pin 4
- Common pin → GND (common cathode) or 5V (common anode)

| Component | Arduino Pin |
|-----------|-------------|
| Segment a | 7 |
| Segment b | 6 |
| Segment c | 5 |
| Segment d | 11 |
| Segment e | 10 |
| Segment f | 8 |
| Segment g | 9 |
| Segment dp | 4 |

![Wiring Diagram](https://github.com/user-attachments/assets/4c878bec-3482-4268-9b81-249400cc2728)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/6eaa4ced-1a63-4953-8894-67549c46e441)
