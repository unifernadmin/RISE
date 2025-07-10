# 💧 Smart Water Level Indicator using Arduino and LCD

## 📝 Problem Statement
Manual monitoring of overhead water tanks often leads to overflow or dry conditions. This is inefficient and can cause water wastage or disruption in availability.

## 🎯 Objective
To build an **automatic water level monitoring system** using an **ultrasonic sensor**, **LED indicators**, **buzzer**, and a **16x2 LCD display** to show real-time tank status.

---

## 🛠️ Components Used

| Component               | Quantity |
|------------------------|----------|
| Arduino Uno            | 1        |
| Ultrasonic Sensor (HC-SR04) | 1    |
| 16x2 LCD with I2C module| 1        |
| LEDs (Green, Yellow, Red) | 1 each |
| Buzzer                 | 1        |
| Breadboard + Jumper Wires | As required |

---

## 🔌 Circuit Connections

### HC-SR04 Ultrasonic Sensor:
| Pin   | Arduino Pin |
|--------|-------------|
| VCC    | 5V          |
| GND    | GND         |
| TRIG   | D9          |
| ECHO   | D10         |

### I2C LCD Display:
| LCD Pin | Arduino Pin |
|---------|--------------|
| GND     | GND          |
| VCC     | 5V           |
| SDA     | A4           |
| SCL     | A5           |

### LEDs & Buzzer:
| Component | Arduino Pin |
|-----------|-------------|
| Green LED | D2          |
| Yellow LED| D3          |
| Red LED   | D4          |
| Buzzer    | D5          |

---

## 📟 LCD Output Display

| Water Distance | Status Displayed      | LED ON   | Buzzer |
|----------------|------------------------|----------|--------|
| > 30 cm        | "Tank is Low!"         | Red      | ❌     |
| 10–30 cm       | "Tank is Medium"       | Yellow   | ❌     |
| < 10 cm        | "Tank is Full!"        | Green    | ✅     |

LCD Line 1 shows: `Distance: 25cm`  
LCD Line 2 shows: `Tank is Medium`

---

## 🧠 Code Logic

1. Use HC-SR04 to measure distance.
2. Display distance and water status on LCD.
3. Indicate water level using LEDs.
4. Trigger buzzer when tank is full.

---

## ▶️ How to Run (in Wokwi)

- Visit this link: [Wokwi Simulation](https://wokwi.com/projects/397420048861078529)
- Upload the provided code.
- Adjust water level in simulation to test status changes.

---

## 📦 Libraries Used

- `LiquidCrystal_I2C.h`
- `Wire.h` (comes built-in)

---

## 📸 Screenshots

_Add screenshots of your Wokwi project or real circuit here._

---

## ✍️ Author

**Project by:** Mohamed Fasil  
**Tool Used:** Arduino Uno + Wokwi Simulation  
**Date:** June 2025

---

## 📌 License

This project is open source and free to use for educational and non-commercial purposes.
