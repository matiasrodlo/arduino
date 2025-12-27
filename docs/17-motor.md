# DC Motor Control

Controls a DC motor using TA6586 motor driver chip. Rotates motor clockwise or counterclockwise based on serial input ('A' or 'B'). Motor runs for 3 seconds then stops.

Code: [`../projects/17-motor.ino`](../projects/17-motor.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| DC Motor | 1 | Small DC motor |
| TA6586 Motor Driver | 1 | H-bridge driver chip |
| Breadboard | 1 | - |
| Jumper wires | 6 | - |
| External power supply | 1 | For motor (if needed) |

## Wiring

- TA6586 VCC → 5V
- TA6586 GND → GND
- TA6586 BI → Pin 10
- TA6586 FI → Pin 9
- Motor → TA6586 output terminals

| Component | Arduino Pin |
|-----------|-------------|
| TA6586 BI | 10 (PWM) |
| TA6586 FI | 9 (PWM) |
| TA6586 VCC | 5V |
| TA6586 GND | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/4d830233-a684-499f-8dd5-b5aca0a3c241)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/28e2bce4-e2df-484d-aae0-5b3a42bfe5af)
