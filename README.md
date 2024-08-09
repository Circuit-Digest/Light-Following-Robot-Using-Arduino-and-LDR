# Light Following Robot Using Arduino and LDR

Welcome to the Light Following Robot project repository! This project demonstrates how to build a simple yet effective light-following robot using Arduino and Light Dependent Resistors (LDRs). This robot will autonomously follow a light source, making it a great introduction to robotics and sensor-based automation.

## 📦 Project Overview

The Light Following Robot is designed to detect and follow light sources using LDRs. It utilizes an Arduino board to process sensor inputs and control the motors accordingly, allowing the robot to navigate towards the light source. This project is ideal for hobbyists, educators, and anyone interested in exploring basic robotics and Arduino programming.

## 🛠 Components Required

- **Arduino Uno**: The microcontroller board used for processing sensor data and controlling the robot.
- **LDRs (Light Dependent Resistors)**: Sensors used to detect the light intensity.
- **Motor Driver Module**: Controls the motors based on Arduino commands.
- **DC Motors**: Drives the wheels of the robot.
- **Wheels and Chassis**: The physical structure of the robot.
- **Jumper Wires**: For making connections between components.
- **Breadboard**: For prototyping and connecting components.

## 📋 Schematic Diagram

You can find the schematic diagram of the circuit [here](https://github.com/Circuit-Digest/Light-Following-Robot-Using-Arduino-and-LDR/blob/main/CircuitDiagram.png).

## 📂 Project Structure

- **`/code`**: Contains the Arduino sketch (`light_following_robot.ino`) that drives the robot.
- **`/docs`**: Documentation files including instructions and diagrams.
- **`/images`**: Project images and schematic diagrams.

## ⚙️ Installation and Setup

1. **Clone the Repository**

   ```bash
   git clone https://github.com/Circuit-Digest/Light-Following-Robot-Using-Arduino-and-LDR.git
   cd Light-Following-Robot-Using-Arduino-and-LDR
   ```

2. **Connect Components**

   Refer to the schematic diagram for connecting LDRs, motors, and the motor driver to the Arduino board.

3. **Upload the Code**

   Open `light_following_robot.ino` in the Arduino IDE and upload it to your Arduino board.

4. **Power Up**

   Connect your robot to a power source and observe it following the light source.

## 📝 Usage

Once powered, the robot will start detecting light levels from the LDRs. It will adjust its direction based on which LDR detects the most light, enabling it to follow the light source.

## 📜 Code Explanation

- **LDR Reading**: The code reads values from the LDRs to determine the light intensity.
- **Motor Control**: Based on the LDR readings, the code controls the motors to navigate towards the light.

## 🤝 Contributing

Feel free to fork this repository, make improvements, and submit pull requests. Contributions are welcome!

## 🧩 License

This project is licensed under the MIT License. See [LICENSE](https://github.com/Circuit-Digest/Light-Following-Robot-Using-Arduino-and-LDR/blob/main/LICENSE) for more details.

## 📧 Contact

For any questions or issues, please contact us at [support@circuitdigest.com](mailto:support@circuitdigest.com).

---

Happy building and exploring! 🚀

