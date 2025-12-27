# DHT11 Temperature & Humidity Sensor

Reads temperature and humidity from DHT11 sensor. Outputs values in Celsius, Fahrenheit, and calculates heat index. Includes error handling for failed readings.

Code: [`../projects/22-humiture-sensor.ino`](../projects/22-humiture-sensor.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| DHT11 Sensor | 1 | Temperature and humidity |
| Resistor 10kΩ | 1 | Pull-up (if module doesn't include) |
| Breadboard | 1 | - |
| Jumper wires | 4 | - |

**Library Required:** DHT sensor library by Adafruit

## Wiring

- DHT11 VCC → 5V
- DHT11 GND → GND
- DHT11 DATA → Pin 11
- 10kΩ resistor: DATA → VCC (pull-up, if needed)

| Component | Arduino Pin |
|-----------|-------------|
| DHT11 DATA | 11 |
| DHT11 VCC | 5V |
| DHT11 GND | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/db1cba0d-7299-4638-81b8-fbfba961636c)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/b58838d6-f695-42bf-999e-ee10bc753a94)

