# Interactive-4-Axis-Robotics-Arm
# 🤖 Interactive 4-Axis Robotics Arm

## 📌 Overview
This project features a highly adaptable 4-axis robotic arm designed to simulate industrial automation tasks such as pick-and-place operations, assembly, and material handling. Powered by an ATMEGA328U microcontroller, the arm can be manually trained by a user using potentiometers and will memorize the positions to play them back in a continuous loop.

## ✨ Key Features
* **Manual Training Mode:** Directly control the X, Y, Z, and Gripper axes in real-time using dedicated potentiometers.
* **Record & Playback:** Save up to 8 distinct robotic joint positions to memory and play them back sequentially.
* **Customizable Looping:** Set the specific number of times (up to 10 iterations) the sequence should execute using a built-in counter.
* **Real-Time Status Display:** A 16x2 LCD provides immediate feedback on saved positions, playback count, and current operational status.

## 🛠️ Hardware Specifications
* **Microcontroller:** ATMEGA328U 
* **Actuators:** 4x SG-90 9g Servo Motors 
* **Sensors/Inputs:** 5x 10KΩ Potentiometers, 4x 12x12mm Push Buttons 
* **Display:** 16x2 Liquid Crystal Display (LCD) 
* **Power Supply:** 12-0-12 1A Transformer, LM7805 Voltage Regulator, 1N4007 Diodes, 1000uF/10uF Capacitors 
* **Structure:** 3D Printed 4-Axis Arm mounted on an Acrylic Sheet 

---

## 🖼️ Media & Architecture 

### System Block Diagram & Flowchart
><img width="482" height="413" alt="image" src="https://github.com/user-attachments/assets/4bab5b42-a2a6-4534-b090-1cd86505f91d" />


### Circuit & PCB Design
><img width="583" height="404" alt="image" src="https://github.com/user-attachments/assets/0e79a0fa-9136-422c-ab5d-ab36d875badc" />

> **[Insert your PCB Layout/3D Model Image Here]**
<img width="469" height="559" alt="image" src="https://github.com/user-attachments/assets/bf57aacf-7f0a-46a9-8119-4da710b833bf" />
<img width="446" height="537" alt="image" src="https://github.com/user-attachments/assets/5759d9df-e0d4-4f2b-b398-94e946f70ea0" />


### Project Demonstration
><img width="358" height="235" alt="image" src="https://github.com/user-attachments/assets/cf7299fe-7301-4e83-bb97-f06803ecbca7" />


https://github.com/user-attachments/assets/6f700f48-e102-490d-933e-c710815d76de





---

## 🚀 How to Operate

1. **Power Up:** Switch ON the power supply to initialize the microcontroller, LCD, and servo motors.
2. **Reset:** Press the `RESET` button to make sure there are no saved movements.
3. **Train & Save:** Control the potentiometers according to the movement required and press `SAVE` after every movement.
4. **Set Iterations:** Once the movements are saved, set the count value for the number of times the action needs to be executed.
5. **Execute:** Press `PLAY` and the arm will start executing the work.

## 🔮 Future Enhancements
* Increased speed and accuracy with tighter tolerances.
* Improved flexibility through advances in joint design and control systems.
* Enhanced intelligence by utilizing more powerful processors to adapt to new tasks.

## 🤝 Team
* **Manoj** * **Vena Vamsi** * **Manish** * **Mirza** *(Central Institute of Tool Design - DARE-2021)* ```
