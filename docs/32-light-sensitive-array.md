# Light-Sensitive Array

Visual light level indicator using multiple LEDs. Reads ambient light with photoresistor and displays light intensity as a bar graph using 8 LEDs. Brighter environment lights more LEDs.

Code: [`../projects/32-light_sensitive_array.ino`](../projects/32-light_sensitive_array.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Photoresistor | 1 | Light-dependent resistor |
| Resistor 10kΩ | 1 | Pull-down resistor |
| LED | 8 | Standard LEDs for bar display |
| Resistor 220Ω | 8 | Current limiting (one per LED) |
| Breadboard | 1 | - |
| Jumper wires | 18 | - |

## Wiring

- Photoresistor pin 1 → 5V
- Photoresistor pin 2 → A0
- 10kΩ resistor: A0 → GND
- LED 1 anode → 220Ω resistor → Pin 5
- LED 1 cathode → GND
- LED 2 anode → 220Ω resistor → Pin 6
- LED 2 cathode → GND
- LED 3 anode → 220Ω resistor → Pin 7
- LED 3 cathode → GND
- LED 4 anode → 220Ω resistor → Pin 8
- LED 4 cathode → GND
- LED 5 anode → 220Ω resistor → Pin 9
- LED 5 cathode → GND
- LED 6 anode → 220Ω resistor → Pin 10
- LED 6 cathode → GND
- LED 7 anode → 220Ω resistor → Pin 11
- LED 7 cathode → GND
- LED 8 anode → 220Ω resistor → Pin 12
- LED 8 cathode → GND

| Component | Arduino Pin |
|-----------|-------------|
| Photoresistor | A0 |
| LED 1 | 5 |
| LED 2 | 6 |
| LED 3 | 7 |
| LED 4 | 8 |
| LED 5 | 9 |
| LED 6 | 10 |
| LED 7 | 11 |
| LED 8 | 12 |
| Photoresistor | 5V |
| All LEDs cathode | GND |

**Note:** Sensor values are mapped from 300-1023 to 0-8 LEDs. Adjust mapping range in code if needed for your lighting conditions.

![Wiring Diagram](https://github.com/user-attachments/assets/82a6e33b-e8b0-4e3a-a3f5-e5de822eaba8)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/b291a49e-55ac-4aa9-9fbe-f9a320d44b5e)

