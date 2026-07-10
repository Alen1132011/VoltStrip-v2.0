# Voltstrip V2.0

A casual, open-source 4-key mechanical macropad featuring an OLED display, a rotary encoder, and clean RGB underglow. Powered by the Seeed Studio XIAO RP2040 and running on QMK/Vial firmware so you can remap everything on the fly without breaking a sweat.

Built and submitted as part of the Hack Club Stardance program.

---

## What's Under the Hood?

* **The Controller:** Seeed Studio XIAO RP2040—super compact, fast, and budget-friendly.
* **The Keys:** 4 mechanical switches (Cherry MX compatible), meaning you can swap in whatever linears, tactiles, or clickies you prefer.
* **The Dial:** 1x EC11 rotary encoder with a built-in push button, ideal for adjusting volume, scrolling timelines, or brush sizing.
* **The Screen:** A crisp 0.91" I2C OLED display (128x32 resolution) to show off active layers, custom graphics, or profile states.
* **The Glow:** 1x addressable WS2812B RGB LED tucked underneath to give your desk that perfect ambient underglow.
* **The Software:** Fully compatible with QMK and Vial for painless, real-time layout configurations.

---

## Design & Gallery

Here is the complete project breakdown, moving from the initial electrical routing up to the final 3D-printed enclosure.

Spin it in 3D!
>  **[CLICK HERE TO VIEW THE PCB IN YOUR BROWSER via KiCanvas](https://kicanvas.org/?repo=https%3A%2F%2Fgithub.com%2FAlen1132011%2FVoltStrip-v2.0%2Ftree%2Fmain%2FPCB)**

### Layout & Concept
The overall alignment of the keys, encoder, and display panel on the top plate.

<img width="1242" height="986" alt="Voltstrip Top View" src="https://github.com/user-attachments/assets/fc6d45b2-2568-4ee3-97dc-606b65dadd59" />
<img width="1474" height="922" alt="Overall Angle 1" src="https://github.com/user-attachments/assets/40f9471f-3727-4305-952a-c7d03e10050b" /> 
<img width="1251" height="1072" alt="Overall Angle 2" src="https://github.com/user-attachments/assets/68fd9c1a-a712-4d66-9e8f-4966a4a3cdbf" />

### Schematic Diagram
A clean, straightforward schematic showing how all components route back to the XIAO's GPIO pins.

<img width="1842" height="1244" alt="Schematic Diagram" src="https://github.com/user-attachments/assets/ee1da1b5-60bf-4ab4-b8b9-75f8913c9e1a" />

### PCB Layout
Double-sided PCB design with optimized traces, dedicated ground planes, and custom silkscreen art on the back.

<img width="1391" height="1172" alt="PCB Front" src="https://github.com/user-attachments/assets/60583f3a-027e-4a6e-b58d-d8453f2636e4" />
<img width="1352" height="1159" alt="PCB Back" src="https://github.com/user-attachments/assets/f59bdd34-9f55-4715-ab20-cc8a960cc85d" />
<img width="665" height="548" alt="Routing Close-up" src="https://github.com/user-attachments/assets/5abea24c-9214-47fd-8a25-a62aed7aafcf" />

### Enclosure & Fit
The custom-designed 3D-printed shell. Tolerances are dialed in to ensure a perfectly flush fit for both the top plate and bottom shell pieces.

<img width="1348" height="923" alt="Case Back" src="https://github.com/user-attachments/assets/9873c57d-b74f-40ff-9747-f4880f2a70fe" />
<img width="1598" height="949" alt="Case Front" src="https://github.com/user-attachments/assets/9d51f420-9da7-43ed-a052-6dca820a5bc4" />

---

## Bill of Materials (BOM)

| Component | Qty | Description | Notes |
| :--- | :---: | :--- | :--- |
| **Seeed Studio XIAO RP2040** | 1 | Microcontroller Board | SMT Module / Direct Solder |
| **Cherry MX Compatible Switches** | 4 | Mechanical Key Switches | 3-pin or 5-pin plate mount |
| **EC11 Rotary Encoder** | 1 | Navigation & Volume Control | Through-Hole (THT) with push button |
| **0.91" OLED Display** | 1 | 128x32 I2C Screen | Connects via 4-pin header |
| **1N4148 Diode** | 4 | Matrix Diodes | DO-35 THT or equivalent SMD |
| **WS2812B RGB LED** | 1 | Addressable Underglow LED | 5050 / PLCC-4 package |
| **Custom Case** | 1 | 3D Printed Top & Bottom Shell | PLA or PETG (printed at 0.20mm) |

---

## Hardware Configuration & Pin Map

If you're modifying the code or setting up your own layout config, here is exactly where everything plugs into the RP2040:

* **Rows:** `GP29` (D3), `GP28` (D2)
* **Columns:** `GP27` (D1), `GP26` (D0), `GP4` (D9)
* **Rotary Encoder:** `GP2` (D8), `GP1` (D7)
* **RGB Data:** `GP3` (D10)
* **I2C Display (OLED):** Standard RP2040 SDA & SCL pins

---

## License

This project is fully open-source. Feel free to grab the files, remix the layout, spin up your own PCBs, or tweak the shell to make it your own!
