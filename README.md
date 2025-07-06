# PCB Engraving Machine from scrap 3D printer

<img src="https://github.com/user-attachments/assets/d3066266-57d7-422b-92ca-81b4aef8e547" width="300" height="500">
<img src="https://github.com/user-attachments/assets/2d432221-55f3-4a65-9c71-61c4497e9322" width="300" height="500">

A DIY 2-axis PCB engraving machine repurposed from an old 3D printer frame and stepper motors, built for low-cost in-house PCB prototyping. The system uses Arduino UNO and a CNC Shield V3 with A4988 drivers, enabling smooth motion control via G-code. The design focuses on X and Y motion only, ideal for basic engraving using a fixed-depth spindle.

## Project Highlights <image src="https://github.com/user-attachments/assets/aaafbec1-0b6a-4b48-aec2-079f5d2aa902" width="25" height="25">

• Repurposed 3D printer frame for low-cost CNC platform  
• 2-axis motion (X and Y) for engraving copper boards  
• Engraves vector-based PCB designs using a **fixed-depth spindle**  
• Controlled by **Arduino UNO + CNC Shield + A4988 Drivers**  
• G-code created using **Inkscape with Gcodetools plugin**  
• Real-time machine control using **Universal G-code Sender (UGS)** 

## Tools & Software Used <img src="https://github.com/user-attachments/assets/27d657e7-02c7-4a75-abe4-81f2f3b3069f" width="20" height="20">

• **Arduino IDE** – Upload GRBL firmware to Arduino UNO  
• **Universal G-code Sender (UGS)** – Stream G-code to the CNC machine  
• **Inkscape** – Design PCB paths and generate G-code with Gcodetools  

## Workflow <img src="https://github.com/user-attachments/assets/43de194a-7388-4d95-9841-fe13681849cb" width="20" height="20">

1. **Design PCB**: Create traces as vector paths in Inkscape  
2. **Generate G-code**: Use Gcodetools plugin to export `.nc` file  
3. **Upload Firmware**: Flash GRBL to Arduino UNO via Arduino IDE  
4. **Send G-code**: Load the `.nc` file in UGS and start engraving  
