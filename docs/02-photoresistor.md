# Photoresistor

Reads ambient light levels using a photoresistor. Outputs analog values (0-1023) to Serial Monitor. Higher light intensity produces higher readings.

Code: [`../projects/02-photoresistor.ino`](../projects/02-photoresistor.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Photoresistor | 1 | Light-dependent resistor |
| Resistor 10kΩ | 1 | Pull-down resistor |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |

## Wiring

- Photoresistor pin 1 → 5V
- Photoresistor pin 2 → A0
- 10kΩ resistor: A0 → GND

| Component | Arduino Pin |
|-----------|-------------|
| Photoresistor | A0 |
| Photoresistor | 5V |
| Resistor | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/fe94f6f2-db97-42b4-9da3-c00e653c3f36)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/9a36ac91-d7e6-4da8-974b-65cc81e6f012)

