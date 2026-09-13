# Simple-Macropad

The Simple Macropad is a 6 key pad with a rotary encoder and an OLED screen. It is also using QMK for its firmware.

# Features:
* 6 Keys
* OLED screen
* Rotary encoder

# CAD Model:
Everything is put together with 4 M3 screws and screws directly into the plastic. The PCB should sit snugly into the space inside the case and has a little bit of plastic extruded from the bottom to keep it flat while being used. It’s printed in two pieces, keeping it reasonably simple.

<img src=assets/SimpleHackPad_together.png alt="pad together" width="300"/>

# PCB

This is the PCB which was made inside of KiCAD

<img src=assets/HackPad_schematic.png alt="schematic of Hackpad" width="300"/>

<img src=assets/SimpleHackPad_PCB.png alt="PCB of Hackpad" width="300"/>

# Firmware
My Hackpad uses QMK firmware for it. I want to add VIA support to allow for more customisability.

* 6 keys which will be able to change once theres VIA support
* the rotary encoder allows for volume to be changed
* The OLED screen shows HackPad

I definitely will add more to this later on once I have the hardware as it will make debugging easier if there are issues.

# BOM:
* 6x Cherry MX Switches
* 6x DSA Keycaps
* 4x M3x16mm screws
* 1x 0.91" 128x32 OLED Display
* 1x EC11 Rotary Encoder
* 1x XIAO RP2040
* 1x Case 
