# WeatherTime Screen

Displays real-time weather information and time on OLED screen. Connects to WiFi, fetches weather data from OpenWeatherMap API, and shows temperature, humidity, pressure, wind speed, and current time.

Code: [`../projects/30-weather-oled.ino`](../projects/30-weather-oled.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | Built-in WiFi required |
| OLED SSD1306 | 1 | 128x64 pixel display |
| Breadboard | 1 | - |
| Jumper wires | 4 | - |

**Libraries Required:**
- WiFiS3 (built-in)
- ArduinoJson
- Adafruit SSD1306
- Adafruit GFX Library
- NTPClient

**External Services Required:**
- WiFi network connection
- OpenWeatherMap API key
- Internet connection

## Wiring

- OLED VCC → 5V (or 3.3V, check module)
- OLED GND → GND
- OLED SDA → SDA (I2C)
- OLED SCL → SCL (I2C)

| Component | Arduino Pin |
|-----------|-------------|
| OLED I2C | SDA/SCL |
| OLED VCC | 5V or 3.3V |
| OLED GND | GND |

**I2C Address:** 0x3C (default)

**Configuration Required:**
1. Create `arduino_secrets.h` file with:
   - `SECRET_SSID` - Your WiFi network name
   - `SECRET_PASS` - Your WiFi password
   - `API_KEY` - Your OpenWeatherMap API key
   - `LOCATION` - City name for weather (e.g., "London")
2. Adjust time zone offset in code (currently set to +8 hours)

**Note:** Weather data updates every 60 seconds. First connection may take longer.

![Wiring Diagram](https://github.com/user-attachments/assets/29d76b8e-71f1-4656-b61d-5f095082e34b)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/9961d30c-a1df-4fb2-95f7-a2917fbbd918)

