# Servo Motor Control

Controls a servo motor (SG90) to scan from 0 to 180 degrees and back repeatedly. Smooth continuous motion with 15ms delay between positions.

Code: [`../projects/12-servo.ino`](../projects/12-servo.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Servo Motor SG90 | 1 | Standard servo |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |

**Library Required:** Servo (built-in)

## Wiring

- Servo Red wire (VCC) → 5V
- Servo Black/Brown wire (GND) → GND
- Servo Orange/Yellow wire (Signal) → Pin 9

| Component | Arduino Pin |
|-----------|-------------|
| Servo Signal | 9 |
| Servo VCC | 5V |
| Servo GND | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/1279dd0b-3772-4347-b2cd-2e92c0524518)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/d261ff21-354d-4e6f-ae83-bf14329984f8)
