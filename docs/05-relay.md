# Relay Module

Controls a relay module to switch AC or DC devices on and off. Toggles relay state every second. Can control high-voltage devices safely.

Code: [`../projects/05-relay.ino`](../projects/05-relay.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Relay Module | 1 | Single or multi-channel |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |
| Load device | 1 | AC/DC device to control |

## Wiring

- Relay VCC → 5V
- Relay GND → GND
- Relay IN → Pin 8

| Component | Arduino Pin |
|-----------|-------------|
| Relay IN | 8 |
| Relay VCC | 5V |
| Relay GND | GND |

**Warning:** High voltage on relay output terminals. Use with caution.

![Wiring Diagram](https://github.com/user-attachments/assets/0282c472-c176-4c59-94ce-6ecc4ff0037c)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/788f22de-3fad-4e54-9cd9-19b658c6d2e0)
