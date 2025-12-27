# Water Pump Control

Controls a water pump using TA6586 motor driver. Turns pump on for 5 seconds then off. Uses same driver as DC motor control.

Code: [`../projects/10-pump.ino`](../projects/10-pump.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Water Pump | 1 | Small DC water pump |
| TA6586 Motor Driver | 1 | H-bridge driver chip |
| Breadboard | 1 | - |
| Jumper wires | 6 | - |
| External power supply | 1 | For pump (if needed) |

## Wiring

- TA6586 VCC → 5V
- TA6586 GND → GND
- TA6586 BI → Pin 9
- TA6586 FI → Pin 10
- Pump → TA6586 output terminals

| Component | Arduino Pin |
|-----------|-------------|
| TA6586 BI | 9 |
| TA6586 FI | 10 |
| TA6586 VCC | 5V |
| TA6586 GND | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/b8c3696d-e80b-4f4c-9cc5-548953674691)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/8ad2297e-9b92-4b17-aa63-dd807d5a5aaf)
