# Joystick Module

Reads X and Y axis positions and button state from a joystick module. Outputs values to Serial Monitor in format: X:value|Y:value|Z:state.

Code: [`../projects/13-joystick.ino`](../projects/13-joystick.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Joystick Module | 1 | Analog joystick with button |
| Breadboard | 1 | - |
| Jumper wires | 5 | - |

## Wiring

- Joystick VCC → 5V
- Joystick GND → GND
- Joystick VRx → A0
- Joystick VRy → A1
- Joystick SW → Pin 8

| Component | Arduino Pin |
|-----------|-------------|
| Joystick VRx | A0 |
| Joystick VRy | A1 |
| Joystick SW | 8 |
| Joystick VCC | 5V |
| Joystick GND | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/fa8be311-f98d-49f5-83a8-17dcb70d74b4)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/924d68a7-d010-4b73-8f93-9082f87034f1)
