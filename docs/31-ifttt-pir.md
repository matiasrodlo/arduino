# Security System via IFTTT

Motion-activated security system that sends notifications via IFTTT webhooks. Detects motion using PIR sensor and triggers IFTTT event to send alerts (email, SMS, push notifications).

Code: [`../projects/31-ifttt-pir.ino`](../projects/31-ifttt-pir.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | Built-in WiFi required |
| PIR Motion Sensor | 1 | Passive infrared sensor |
| Breadboard | 1 | - |
| Jumper wires | 3 | - |

**Libraries Required:**
- WiFiS3 (built-in)

**External Services Required:**
- WiFi network connection
- IFTTT account
- IFTTT Webhooks service configured
- Internet connection

## Wiring

- PIR Sensor VCC → 5V
- PIR Sensor GND → GND
- PIR Sensor OUT → Pin 2

| Component | Arduino Pin |
|-----------|-------------|
| PIR Sensor OUT | 2 |
| PIR Sensor VCC | 5V |
| PIR Sensor GND | GND |

**Configuration Required:**
1. Create `arduino_secrets.h` file with:
   - `SECRET_SSID` - Your WiFi network name
   - `SECRET_PASS` - Your WiFi password
   - `WEBHOOKS_KEY` - Your IFTTT Webhooks key
2. Create IFTTT Applet:
   - Trigger: Webhooks service, event name "SecurityWarning"
   - Action: Choose notification method (Email, SMS, Push, etc.)

**Note:** PIR sensor has a 2-3 second stabilization period after power-on. Motion detection triggers IFTTT event once per motion detection cycle.

![Wiring Diagram](https://github.com/user-attachments/assets/c2cad52e-75c6-49b8-8d62-3a912604f268)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/20cf0400-043c-4fa8-8175-723d59e59dbf)

