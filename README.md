👏 Arduino Clap Switch

A simple Arduino-based sound-activated light system that uses a sound sensor to detect a clap and a relay module to control a light.

This project is beginner-friendly and is a good introduction to Arduino, sensors, relays, and basic IoT automation.

💡 How It Works

The system detects a sound using a sound sensor.

When a clap is detected:

Clap → Sound Sensor → Arduino → Relay → Light

CLAP twice to turn light back OFF.

🛠️ Components Required

- Arduino UNO R3
- Sound Sensor Module
- 1-Channel Relay Module
- Light/LED or suitable low-voltage lamp
- Jumper Wires
- Breadboard
- USB Cable
- Power source

Safety: If you are controlling a mains-powered AC bulb, do not work with exposed mains wiring unless you know how to do it safely. For beginners, use a low-voltage LED/lamp or have the mains connection handled by a qualified person.

💻 Software Required

Arduino IDE

You need the Arduino IDE to upload the program to the Arduino board.

Download and install the Arduino IDE from the official Arduino website.

After installation:

1. Connect the Arduino UNO R3 to your computer using a USB cable.
2. Open Arduino IDE.
3. Select Tools → Board → Arduino AVR Boards → Arduino UNO.
4. Select the correct Port under Tools → Port.
5. COPY the code in "clap_switch.ino" , and paste in the Arduino ide.
6. Click Verify to compile the code.
7. Click Upload to upload the program to the Arduino.

🔌 Circuit Connections

Sound Sensor → Arduino

Sound Sensor| Arduino UNO

VCC| 5V

GND| GND

OUT| Digital Pin 7

Relay Module → Arduino

Relay| Arduino UNO

VCC| 5V

GND| GND

IN| Digital Pin 13

Light

Connect the light to the relay according to the relay module's NO (Normally Open), COM (Common), and appropriate power connections.

Do not connect mains electricity directly while following a beginner tutorial. Use a safe low-voltage load unless you have the required electrical knowledge and supervision.

📷 Circuit Diagram



"circuit-diagram.png"

🚀 Running the Project

1. Assemble the circuit according to the connection table.
2. Connect the Arduino UNO to your computer.
3. COPY the code in "clap_switch.ino" , and paste in the Arduino ide.
4. Select the correct board and port.
5. Upload the code.
6. Disconnect the USB cable if using an appropriate external power source.
7. Make a clap near the sound sensor.
8. The relay should respond and control the connected light.

⚙️ Adjusting the Sound Sensor

Most sound sensor modules have a small potentiometer that controls their sensitivity.

If the system:

- Doesn't detect your clap: increase the sensitivity.
- Triggers too easily: decrease the sensitivity.
- Triggers from background noise: reduce the sensitivity and test the sensor in a quieter environment.

The exact behavior can vary depending on the sound sensor module being used.

🧠 What You'll Learn

This project demonstrates:

- Arduino programming
- Digital input and output
- Sensor interfacing
- Sound detection
- Relay control
- Basic automation
- Hardware-software integration
- Fundamentals of IoT

🎥 Project Demo



📸 Project Photos



💰 Estimated Cost

Component| Quantity| Approx. Cost
Arduino UNO R3| 1| ₹339

Sound Sensor| 1| ₹98

Relay Module| 1| ₹96

Breadboard| 1| and jumper Wires ₹290

Light bulb| 1| ₹50

Total cost ₹873

Prices can vary depending on the seller and location.

📜 License

This project is open source and available for learning and educational purposes.
Built as a hands-on Arduino/IoT project.
