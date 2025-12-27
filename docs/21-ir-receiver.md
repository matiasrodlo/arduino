# Infrared Receiver

Receives and decodes infrared signals from a remote control. Maps IR commands to corresponding keys (numbers, operations, function keys) and outputs to Serial Monitor.

Code: [`../projects/21-ir-receiver.ino`](../projects/21-ir-receiver.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| IR Receiver | 1 | VS1838B or similar |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |

**Library Required:** IRremote

## Wiring

- IR Receiver VCC → 5V
- IR Receiver GND → GND
- IR Receiver OUT → Pin 2

| Component | Arduino Pin |
|-----------|-------------|
| IR Receiver OUT | 2 |
| IR Receiver VCC | 5V |
| IR Receiver GND | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/558674b9-1f46-4e88-bc49-9ec7cb45b651)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/1a427d63-7473-4e49-9ed1-8c093b3fe0a4)
