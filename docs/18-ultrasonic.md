# Ultrasonic Distance Sensor

Measures distance using HC-SR04 ultrasonic sensor. Displays distance in centimeters on LCD screen via I2C.

Code: [`../projects/18-ultrasonic.ino`](../projects/18-ultrasonic.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| HC-SR04 Ultrasonic Sensor | 1 | Distance sensor |
| I2C LCD 1602 | 1 | Display module |
| Breadboard | 1 | - |
| Jumper wires | 7 | - |

**Library Required:** LiquidCrystal_I2C

## Wiring

- Ultrasonic VCC → 5V
- Ultrasonic GND → GND
- Ultrasonic Trig → Pin 4
- Ultrasonic Echo → Pin 3
- LCD VCC → 5V
- LCD GND → GND
- LCD SDA → SDA (I2C)
- LCD SCL → SCL (I2C)

| Component | Arduino Pin |
|-----------|-------------|
| Ultrasonic Trig | 4 |
| Ultrasonic Echo | 3 |
| LCD I2C | SDA/SCL |

![Wiring Diagram](https://github.com/user-attachments/assets/0ec7a594-a706-4a06-8f38-78ef91ddc4ce)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/43e8f08a-26a4-4d12-abcd-629dbcc1ac20)

