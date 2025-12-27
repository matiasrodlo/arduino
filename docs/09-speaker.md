# Speaker / Buzzer

Plays a melody using a speaker or buzzer module. Plays 8 notes with different durations using the tone() function.

Code: [`../projects/09-speaker.ino`](../projects/09-speaker.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| Speaker or Buzzer | 1 | Passive buzzer recommended |
| Resistor 100Ω | 1 | Current limiting (optional) |
| Breadboard | 1 | - |
| Jumper wires | 2 | - |

**Note:** Requires `pitches.h` header file for note frequencies.

## Wiring

- Speaker positive → Pin 8
- Speaker negative → GND
- Optional: 100Ω resistor between pin 8 and speaker

| Component | Arduino Pin |
|-----------|-------------|
| Speaker | 8 |
| Speaker | GND |

![Wiring Diagram](https://github.com/user-attachments/assets/411cbad7-4020-43c5-9fc9-045968681e40)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/6c0eea2b-6998-4308-a5ea-8bd3446bbe32)
