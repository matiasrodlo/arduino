# PIR Motion Sensor

Detects motion using a passive infrared (PIR) sensor. Outputs "Somebody here!" when motion is detected, "Monitoring..." when idle.

Code: [`../projects/07-pir-motion-sensor.ino`](../projects/07-pir-motion-sensor.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| PIR Motion Sensor | 1 | HC-SR501 or similar |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |

## Wiring

- PIR VCC → 5V
- PIR GND → GND
- PIR OUT → Pin 2

| Component | Arduino Pin |
|-----------|-------------|
| PIR OUT | 2 |
| PIR VCC | 5V |
| PIR GND | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/e2686e3c-5159-4e23-b35d-0d20315e7993)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/35c50f52-6e1a-49aa-910f-d462e3ccb4af)

