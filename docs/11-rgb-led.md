# RGB LED

Controls an RGB LED, cycling through basic and blended colors. Uses PWM to control individual color channels (red, green, blue).

Code: [`../projects/11-rgb-led.ino`](../projects/11-rgb-led.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| RGB LED | 1 | Common cathode or common anode |
| Resistor 220Ω | 3 | One per color channel |
| Breadboard | 1 | - |
| Jumper wires | 6 | - |

## Wiring

- Red LED pin → 220Ω resistor → Pin 11 (PWM)
- Green LED pin → 220Ω resistor → Pin 10 (PWM)
- Blue LED pin → 220Ω resistor → Pin 9 (PWM)
- Common pin → GND (common cathode) or 5V (common anode)

| Component | Arduino Pin |
|-----------|-------------|
| Red LED (via resistor) | 11 (PWM) |
| Green LED (via resistor) | 10 (PWM) |
| Blue LED (via resistor) | 9 (PWM) |
| Common pin | GND or 5V |

![Wiring Diagram](https://github.com/user-attachments/assets/56a59a4d-9112-4dc6-b5ce-21cfee9576e2)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/572a11fa-c02f-418f-8f57-a24ff81deeab)
