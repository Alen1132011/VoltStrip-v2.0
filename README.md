# Voltstrip V2.0

A pocket-sized, open-source 4-key mechanical macropad with an OLED screen, a rotary encoder, and addressable RGB underglow.

---

<!-- 2. HERO IMAGE -->
<p align="center">
  <img width="600" alt="Voltstrip V2.0 Hero Render" src="https://github.com/user-attachments/assets/fc6d45b2-2568-4ee3-97dc-606b65dadd59" />
</p>

---

## 🚀 Spin it in 3D!
> 💡 **[CLICK HERE TO VIEW THE PCB IN YOUR BROWSER via KiCanvas](https://kicanvas.org/)** *(Swap this with your actual KiCanvas link once you generate it!)*

---

## ⚡ Quick Start
Since the physical boards are still at the factory, you can't plug one in just yet. In the meantime, you can explore the source files directly across the repository folders:
1. Look inside the `/PCB` and `/Cad` folders for the full KiCad schematics, layouts, and 3D case designs.
2. Check out the `/Firmware` folder to grab or modify the QMK/Vial configuration files.
3. Production-ready manufacturing files (Gerbers) can be found in the `/Production` folder.

---

## ✨ Features
* **The Brains:** Powered by a Seeed Studio XIAO RP2040—compact, dual-core, and highly budget-friendly.
* **The Keys:** 4 standard Cherry MX-compatible slots. Pop in whatever linears, tactiles, or clickies you prefer.
* **The Encoder:** 1x EC11 rotary encoder with a built-in push button for volume control, scrolling, or timeline scrubbing.
* **Display:** A 0.91" I2C OLED screen (128x32) to track active layers, profiles, or custom animations.
* **Underglow:** 1x addressable WS2812B RGB LED mounted on the bottom for ambient desktop lighting.
* **Firmware:** Full QMK and Vial compatibility. Remap keys instantly in the Vial GUI without touching a single line of code.

---

## 🛠️ The Shopping List (BOM)

| Component | Qty | Description | Notes |
| :--- | :---: | :--- | :--- |
| **Seeed Studio XIAO RP2040** | 1 | Microcontroller Board | SMT Module / Direct Solder |
| **Cherry MX Compatible Switches** | 4 | Mechanical Key Switches | Use your preferred switches |
| **EC11 Rotary Encoder** | 1 | Volume & Navigation | THT style with integrated switch |
| **0.91" OLED Display** | 1 | 128x32 I2C Screen | Plugs right into a 4-pin header |
| **1N4148 Diode** | 4 | Matrix Diodes | DO-35 THT package |
| **WS2812B RGB LED** | 1 | Underglow LED | 5050 package |
| **Custom Case** | 1 | 3D Printed Top & Bottom Shell | STL files ready for 0.20mm printing |

---

## 💻 Hardware Layout & Blueprint

### Case & Board Design
Here is a breakdown of how the traces route everything cleanly back to the XIAO's GPIO pins, along with the custom case fitment:

<img width="1474" height="922" alt="Overall Angle 1" src="https://github.com/user-attachments/assets/40f9471f-3727-4305-952a-c7d03e10050b" /> 
<img width="1251" height="1072" alt="Overall Angle 2" src="https://github.com/user-attachments/assets/68fd9c1a-a712-4d66-9e8f-4966a4a3cdbf" />

<img width="1842" height="1244" alt="Schematic Diagram" src="https://github.com/user-attachments/assets/ee1da1b5-60bf-4ab4-b8b9-75f8913c9e1a" />

<img width="1391" height="1172" alt="PCB Front" src="https://github.com/user-attachments/assets/60583f3a-027e-4a6e-b58d-d8453f2636e4" />
<img width="1352" height="1159" alt="PCB Back" src="https://github.com/user-attachments/assets/f59bdd34-9f55-4715-ab20-cc8a960cc85d" />

<img width="1348" height="923" alt="Case Back" src="https://github.com/user-attachments/assets/9873c57d-b74f-40ff-9747-f4880f2a70fe" />
<img width="1598" height="949" alt="Case Front" src="https://github.com/user-attachments/assets/9d51f420-9da7-43ed-a052-6dca820a5bc4" />

### Pin Mapping
* **Rows:** `GP29`, `GP28`
* **Columns:** `GP27`, `GP26`, `GP4`
* **Rotary Encoder:** `GP2`, `GP1`
* **RGB Data:** `GP3`

---

## 🧠 How It Works & Technical Choices
Instead of burning through the limited GPIO pins on the tiny Seeed Studio XIAO RP2040 with a basic 1-to-1 setup, Voltstrip V2.0 uses a **keyboard matrix combined with 1N4148 switching diodes**. This prevents "ghosting" (where the controller gets confused if you smash multiple keys at once) and keeps plenty of pins free for the OLED screen, encoder, and addressable RGB data.

On the software side, going with **Vial-QMK** was a no-brainer. It allocates a small chunk of the RP2040's EEPROM so you can rebind keys, set up macros, and switch profiles instantly using the GUI app, completely bypassing the annoying process of rebuilding and re-flashing raw C code every time you want to tweak a shortcut.

---

## 🤝 Credits & License
* Big thanks to the **Hack Club Stardance** crew for backing open-source hardware makers.
* Standing on the shoulders of giants in the **QMK** and **Vial** communities.

This project is open-source under the MIT License. Go ahead, clone it, remix it, or break it to build something even cooler!
