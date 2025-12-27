# 4x4 Matrix Keypad

Reads input from a 4x4 matrix keypad. Detects key press and release events, outputs key character and event type to Serial Monitor.

Code: [`../projects/20-keypad.ino`](../projects/20-keypad.ino)

## Required Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno R4 WiFi | 1 | - |
| 4x4 Matrix Keypad | 1 | 16-button keypad |
| Breadboard | 1 | - |
| Jumper wires | 8 | - |

**Library Required:** Adafruit Keypad

## Wiring

- Keypad Row 1 → Pin 2
- Keypad Row 2 → Pin 3
- Keypad Row 3 → Pin 4
- Keypad Row 4 → Pin 5
- Keypad Col 1 → Pin 8
- Keypad Col 2 → Pin 9
- Keypad Col 3 → Pin 10
- Keypad Col 4 → Pin 11

| Component | Arduino Pin |
|-----------|-------------|
| Keypad Rows | 2, 3, 4, 5 |
| Keypad Columns | 8, 9, 10, 11 |

**Key Layout:**
```
1  2  3  A
4  5  6  B
7  8  9  C
*  0  #  D
```

![Wiring Diagram](https://github.com/user-attachments/assets/52f0fbf6-0455-4379-94b6-e1c030aff56f)

## Schematic Diagram

![Schematic](https://github.com/user-attachments/assets/0333c6b3-c99f-46e1-8e17-52e3a9e638f6)
