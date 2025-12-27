# I2C LCD 1602

Controls a 16x2 character LCD display via I2C interface. Displays "Hello world!" and "LCD Tutorial" on two lines.

Code: [`../projects/16-i2c-lcd.ino`](../projects/16-i2c-lcd.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| I2C LCD 1602 | 1 | 16 columns, 2 rows |
| Breadboard | 1 | - |
| Jumper wires | 4 | - |

**Library Required:** LiquidCrystal_I2C

## Wiring

- LCD VCC → 5V
- LCD GND → GND
- LCD SDA → SDA (I2C)
- LCD SCL → SCL (I2C)

| Component | Arduino Pin |
|-----------|-------------|
| LCD I2C | SDA/SCL |
| LCD VCC | 5V |
| LCD GND | GND |

**I2C Address:** 0x27 (default, may vary)

![Wiring Diagram](https://github.com/user-attachments/assets/70c94910-b23b-463a-acd2-ff699fb57322)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/74b32a4d-83d6-49d6-a4e7-2c45f4e195a5)
