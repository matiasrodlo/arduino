# Potentiometer

Controls LED brightness using a potentiometer. Reads analog value (0-1023) and maps it to PWM output (0-255) to control LED brightness.

Code: [`../projects/08-potentiometer.ino`](../projects/08-potentiometer.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Potentiometer | 1 | 10kΩ recommended |
| LED | 1 | Standard LED |
| Resistor 220Ω | 1 | LED current limiting |
| Breadboard | 1 | - |
| Jumper wires | 5 | - |

## Wiring

- Potentiometer pin 1 → 5V
- Potentiometer pin 2 (wiper) → A0
- Potentiometer pin 3 → GND
- LED anode → 220Ω resistor → Pin 9 (PWM)
- LED cathode → GND

| Component | Arduino Pin |
|-----------|-------------|
| Potentiometer wiper | A0 |
| Potentiometer | 5V |
| Potentiometer | GND |
| LED (via resistor) | 9 (PWM) |

![Wiring Diagram](https://github.com/user-attachments/assets/b8cb9d85-08db-4763-8b9c-a1f272e74a76)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/02e5c3eb-b45a-43d5-915b-2978d26808db)
