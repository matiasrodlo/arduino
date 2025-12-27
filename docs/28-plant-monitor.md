# Plant Monitor

Automatic plant monitoring and watering system. Monitors soil moisture, temperature, and humidity. Displays sensor readings on LCD and automatically waters plants when soil is dry.

Code: [`../projects/28-plant-monitor.ino`](../projects/28-plant-monitor.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Soil Moisture Sensor | 1 | Analog moisture sensor |
| DHT11 Sensor | 1 | Temperature and humidity |
| I2C LCD 1602 | 1 | 16x2 character display |
| Water Pump | 1 | Small DC water pump |
| TA6586 Motor Driver | 1 | Pump control driver |
| Breadboard | 1 | - |
| Jumper wires | 10 | - |

**Libraries Required:**
- LiquidCrystal_I2C
- DHT sensor library by Adafruit

## Wiring

- Soil Moisture Sensor VCC → 5V
- Soil Moisture Sensor GND → GND
- Soil Moisture Sensor SIG → A0
- DHT11 VCC → 5V
- DHT11 GND → GND
- DHT11 DATA → Pin 4
- LCD VCC → 5V
- LCD GND → GND
- LCD SDA → SDA (I2C)
- LCD SCL → SCL (I2C)
- Motor Driver VCC → 5V
- Motor Driver GND → GND
- Motor Driver BI → Pin 8
- Motor Driver FI → GND
- Water Pump → Motor Driver output terminals

| Component | Arduino Pin |
|-----------|-------------|
| Soil Moisture Sensor | A0 |
| DHT11 DATA | 4 |
| LCD I2C | SDA/SCL |
| Motor Driver BI | 8 |
| Motor Driver VCC | 5V |
| Motor Driver GND | GND |

**Note:** Pump activates when soil moisture reading exceeds 650 (dry soil). Adjust threshold based on your sensor calibration.

![Wiring Diagram](https://github.com/user-attachments/assets/93b5f887-7d59-4789-91e8-9615a53cd345)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/180fe0b7-f85c-4248-9837-16e8113e2cee)

