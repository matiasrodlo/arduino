# OLED Display SSD1306

Controls an OLED display (SSD1306) using I2C. Demonstrates text display, font sizes, scrolling, and bitmap graphics.

Code: [`../projects/25-oled.ino`](../projects/25-oled.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| OLED SSD1306 | 1 | 128x64 pixels |
| Breadboard | 1 | - |
| Jumper wires | 4 | - |

**Libraries Required:**
- Adafruit SSD1306
- Adafruit GFX Library

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

![Wiring Diagram](https://github.com/user-attachments/assets/72602c4d-efe1-4588-a278-fc26a866d475)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/8f0f6ae5-655e-480c-976e-6e1ba861c9a3)
