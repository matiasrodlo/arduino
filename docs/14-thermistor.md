# Thermistor

Reads temperature using a thermistor. Calculates temperature in Celsius and Fahrenheit using the Steinhart-Hart equation with beta value.

Code: [`../projects/14-thermistor.ino`](../projects/14-thermistor.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Thermistor | 1 | NTC thermistor |
| Resistor 10kΩ | 1 | Pull-up resistor |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |

## Wiring

- Thermistor pin 1 → A0
- Thermistor pin 2 → 10kΩ resistor → 5V
- 10kΩ resistor → GND

| Component | Arduino Pin |
|-----------|-------------|
| Thermistor | A0 |
| Pull-up resistor | 5V |
| Pull-up resistor | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/1c8afa51-a37d-49b6-bd82-838318a557af)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/18de1762-acc2-4867-8630-437530032fb5)

