# Wireless-water-tank-monitoring-lora
LoRa-based wireless water tank monitoring and motor control system with solar-powered IoT architecture and MQTT integration.
# 🚰 Wireless Overhead Tank Monitoring & Motor Control System

### (LoRa-Based | Solar Powered | Zero-Maintenance Design)

---

## 📌 Project Overview

Traditional water tank systems:
- Require wired float switches
- Fail due to corrosion and wiring issues
- No remote monitoring
- No automation capability

### ✅ Solution

This project implements a **smart wireless water tank monitoring system** using:

- 📡 LoRa Communication
- 🔋 Solar Powered Tank Unit
- 📶 Wi-Fi Enabled Home Unit
- ⚡ Motor Control with HOA (Hand-Off-Auto)

---

## 🧠 System Architecture
[Tank Unit] ---> LoRa ---> [Home Unit] ---> LoRa ---> [Actuation Unit]

---

## 🔧 Features

- 📊 Multi-level water detection (LOW, MID, HIGH, FULL)
- 🔋 Solar powered (Tank Unit)
- 📡 Long-range communication using LoRa
- 📱 Mobile monitoring via MQTT
- ⚙️ Automatic motor ON/OFF
- 🔄 Manual override (HOA switch)
- 🛠 Zero maintenance design

---

## 🧩 Hardware Used

### 🔹 Tank Unit
- ESP32 + SX1262 LoRa
- Stainless Steel Probes
- Solar Panel (12V, 10W)
- 18650 Batteries + BMS
- Voltage Regulators

### 🔹 Home Unit
- ESP32 (Wi-Fi + LoRa)
- OLED Display
- Buzzer
- MQTT (HiveMQ / Mosquitto)

### 🔹 Actuation Unit
- ESP32 + LoRa
- Relay / Contactor
- HOA Switch
- AC Power Supply

---

## 💻 Software & Tools

| Purpose | Tool |
|--------|------|
| Simulation | Wokwi |
| Backend | Node-RED |
| MQTT | Mosquitto / HiveMQ |
| Firmware | PlatformIO (VS Code) |
| PCB | EasyEDA |

---

## ⚙️ Working Principle

### Tank Unit
- Reads water levels via probes
- Sends data using LoRa
- Runs on solar power

### Home Unit
- Receives data
- Displays level
- Sends control commands

### Actuation Unit
- Controls motor
- Supports manual override

---

## 🔌 Circuit Design

👉 Designed using **EasyEDA**

- Proper grounding
- Surge protection
- RF antenna matching

---

## 📡 Communication Protocol

- Frequency: 868 MHz / 915 MHz
- Protocol: LoRa (SX1262)
- Data: Level status + motor command

---

## 📲 Cloud Setup (MQTT)

1. Install Mosquitto OR use HiveMQ
2. Create topics:

3. Use Node-RED dashboard for UI

---




## 👨‍💻 Author
Mowriya Sriram S
