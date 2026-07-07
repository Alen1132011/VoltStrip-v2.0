# ⚡ Voltstrip V2.0

> A custom, open-source 4-key mechanical macropad with an OLED display, rotary encoder, and RGB underglow. Powered by the Seeed Studio XIAO RP2040.

---

## 🚀 Overview

**Voltstrip V2.0** is a compact, high-performance macro keypad designed for productivity, gaming, and quick shortcuts. It features a robust matrix design, a multi-functional rotary encoder for precise scrolling/volume control, and an OLED display for real-time status monitoring.

### ✨ Key Features
* **Brain:** Seeed Studio XIAO RP2040 (Dual-core ARM Cortex M0+).
* **Layout:** 4 Mechanical switches (Cherry MX compatible) in a clean matrix.
* **Controls:** 1 EC11 Rotary Encoder with an integrated push-button.
* **Display:** 0.91" I2C OLED Screen (128x32 resolution) for layers and profiles.
* **Aesthetics:** Addressable WS2812B RGB LED for underglow/status effects.
* **Firmware:** Fully customizable via QMK / VIAL.

---

## 📸 Project Gallery & Teardown

Here is the complete breakdown of the design phases, from the initial schematic capture to the final 3D printable enclosure.

### 🖼️ Overall Design (3D Render)
*Multi-angle views of the fully assembled macropad featuring the layout, screen placement, and custom branding.*

<img width="1474" height="922" alt="overall" src="https://github.com/user-attachments/assets/40f9471f-3727-4305-952a-c7d03e10050b" /> <img width="1251" height="1072" alt="overall2" src="https://github.com/user-attachments/assets/68fd9c1a-a712-4d66-9e8f-4966a4a3cdbf" />



### 🔌 Schematic Diagram
*Clean and fully routed electronics schema matching the RP2040 GPIO pin configurations.*

<img width="1842" height="1244" alt="schematic png" src="https://github.com/user-attachments/assets/ee1da1b5-60bf-4ab4-b8b9-75f8913c9e1a" />



### 🎛️ PCB Layout
*Front and back views of the double-sided PCB layout with tight routing, custom ground planes, and silkscreen artwork.*
<img width="1391" height="1172" alt="pcb1 png" src="https://github.com/user-attachments/assets/60583f3a-027e-4a6e-b58d-d8453f2636e4" />
<img width="1352" height="1159" alt="pcb png" src="https://github.com/user-attachments/assets/f59bdd34-9f55-4715-ab20-cc8a960cc85d" />



### 📦 Enclosure & Case Fit
*The custom-designed 3D printed mechanical shell. Front and back side-by-side comparison showing perfect tolerances.*

<img width="1348" height="923" alt="case_back png" src="https://github.com/user-attachments/assets/9873c57d-b74f-40ff-9747-f4880f2a70fe" />
<img width="1598" height="949" alt="case_front png" src="https://github.com/user-attachments/assets/9d51f420-9da7-43ed-a052-6dca820a5bc4" />



---

## 📊 Bill of Materials (BOM)

| Component | Qty | Reference / Description | Package / Notes |
| :--- | :---: | :--- | :--- |
| **Seeed Studio XIAO RP2040** | 1 | Main Controller Unit | SMT Module |
| **Cherry MX Compatible Switches** | 4 | Mechanical Key Switches | 3-pin / 5-pin Plate Mount |
| **EC11 Rotary Encoder** | 1 | Volume/Scroll Control + Button | Through-Hole (THT) |
| **0.91" OLED Display** | 1 | 128x32 I2C Screen | 4-Pin Header |
| **1N4148 Diode** | 4 | Key Matrix Switching Diodes | THT (DO-35) or SMD |
| **WS2812B RGB LED** | 1 | Addressable Underglow LED | PLCC-4 / 5050 |
| **Custom Enclosure** | 1 | 3D Printed Top Lid & Bottom Shell | PLA / PETG (0.20mm) |

---

## 🛠️ Hardware Setup & Pin Mapping

The matrix and peripherals are mapped directly to the RP2040 controller as follows:

* **Rows:** `GP29` (D3), `GP28` (D2)
* **Columns:** `GP27` (D1), `GP26` (D0), `GP4` (D9)
* **Rotary Encoder:** `GP2` (D8), `GP1` (D7)
* **RGB Data:** `GP3` (D10)
* **I2C Display (OLED):** Standard RP2040 I2C Pins

---

## 📄 License

This project is open-source. Feel free to use, modify, and improve it for your own custom builds!
