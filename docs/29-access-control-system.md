# Access Control System

RFID-based door lock system. Reads RFID cards and verifies against authorized ID. Opens door using stepper motor when authorized, provides audio feedback via buzzer.

Code: [`../projects/29-access-control-system.ino`](../projects/29-access-control-system.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| MFRC522 RFID Module | 1 | RFID reader |
| Stepper Motor | 1 | 28BYJ-48 or similar |
| ULN2003 Driver | 1 | Stepper motor driver |
| Buzzer | 1 | Audio feedback |
| Breadboard | 1 | - |
| Jumper wires | 15 | - |

**Libraries Required:**
- RFID1 (custom library)
- Stepper (built-in)

## Wiring

- MFRC522 SDA (SS) → Pin 7
- MFRC522 SCK → Pin 5
- MFRC522 MOSI → Pin 4
- MFRC522 MISO → Pin 3
- MFRC522 RST → Pin 6
- MFRC522 3.3V → 3.3V
- MFRC522 GND → GND
- ULN2003 IN1 → Pin 11
- ULN2003 IN2 → Pin 10
- ULN2003 IN3 → Pin 9
- ULN2003 IN4 → Pin 8
- ULN2003 VCC → 5V
- ULN2003 GND → GND
- Stepper Motor → ULN2003 output terminals
- Buzzer positive → Pin 12
- Buzzer negative → GND

| Component | Arduino Pin |
|-----------|-------------|
| MFRC522 SDA | 7 |
| MFRC522 SCK | 5 |
| MFRC522 MOSI | 4 |
| MFRC522 MISO | 3 |
| MFRC522 RST | 6 |
| ULN2003 IN1 | 11 |
| ULN2003 IN2 | 10 |
| ULN2003 IN3 | 9 |
| ULN2003 IN4 | 8 |
| Buzzer | 12 |
| MFRC522 3.3V | 3.3V |
| MFRC522 GND | GND |

**Note:** Update the `userId` array in code with your authorized RFID card ID. Door opens 90 degrees (512 steps) when authorized.

![Wiring Diagram](https://github.com/user-attachments/assets/c42c34c6-bec3-4a6e-954a-ee8fe4788c30)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/097c8e26-497c-4753-8d57-aa8e66590236)

