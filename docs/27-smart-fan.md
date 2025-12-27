# Smart Fan

Automatic temperature-controlled fan system with manual override. Uses a thermistor to monitor temperature and automatically adjusts fan speed. Includes button for manual/automatic mode toggle with LED indicators.

Code: [`../projects/27-smart-fan.ino`](../projects/27-smart-fan.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Thermistor | 1 | Temperature sensor |
| Resistor 10kΩ | 1 | Pull-up resistor for thermistor |
| DC Motor | 1 | Fan motor |
| Motor Driver (TA6586) | 1 | H-bridge driver (optional) |
| Push Button | 1 | Mode toggle switch |
| LED (Red) | 1 | Manual mode indicator |
| LED (Green) | 1 | Auto mode indicator |
| Resistor 220Ω | 2 | Current limiting for LEDs |
| Breadboard | 1 | - |
| Jumper wires | 12 | - |

## Wiring

- Thermistor pin 1 → A0
- Thermistor pin 2 → 10kΩ resistor → 5V
- 10kΩ resistor → GND
- Button pin 1 → Pin 2
- Button pin 2 → GND (with internal pull-up)
- Green LED anode → 220Ω resistor → Pin 3
- Green LED cathode → GND
- Red LED anode → 220Ω resistor → Pin 4
- Red LED cathode → GND
- Motor Driver BI → Pin 9 (PWM)
- Motor Driver FI → GND
- Motor Driver VCC → 5V
- Motor Driver GND → GND
- Motor → Motor Driver output terminals

| Component | Arduino Pin |
|-----------|-------------|
| Thermistor | A0 |
| Button | 2 |
| Green LED (Auto) | 3 |
| Red LED (Manual) | 4 |
| Motor Driver BI | 9 (PWM) |
| Motor Driver VCC | 5V |
| Motor Driver GND | GND |

**Note:** Temperature threshold is set to 25°C. Fan speed scales from 100-255 based on temperature (25-40°C).

![Wiring Diagram](https://github.com/user-attachments/assets/2f429d5b-1cd4-4eee-b08d-e6ca422ba7e9)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/f2d7520c-08d8-42aa-9766-8ac71b9e4f99)

