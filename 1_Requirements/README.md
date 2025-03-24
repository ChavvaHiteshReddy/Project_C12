📡 **High-Speed 5G Data Transmission Using Li-Fi**

🚀 **Overview**

This project explores Li-Fi (Light Fidelity) technology for high-speed 5G data transmission. The system transmits data using visible light instead of traditional radio waves, offering low latency, high security, and energy efficiency for indoor environments.

🎯 **High-Level Requirements (HLRs)**

✅ High-Speed 5G Data Transmission – Supports ultra-fast Li-Fi speeds. 

✅ Indoor Compatibility – Ideal for offices, hospitals, and homes.

✅ Multimedia Support – Transmits both audio and video data.

✅ Smart Infrastructure Integration – Works with LED lighting.

✅ Security & Reliability – Prevents hacking due to light-bound signals.

✅ Energy Efficiency – Uses LED lights for both communication & illumination.

✅ Scalability – Easily expandable to accommodate more devices.

🔩 **Low-Level Requirements (LLRs)**

🛠 Hardware Components:

💻 PC – Code uploading & compilation.

🎛 Arduino Uno – Microcontroller for processing signals.

🔴 Laser Transmitter Module – Sends Li-Fi signals.

📡 Laser Receiver Module – Detects & converts signals.

⏳ 555 Timer IC – Synchronization & pulse width modulation.

📺 LCD Display – Outputs received data.

🔗 I2C Module – Simplifies LCD communication.

🖥 Software & Communication Protocols:

🔧 Arduino IDE – For writing & uploading code.

🔄 Software Serial Library – Handles serial communication.

⚡ 9600 Baud Rate – Data transmission speed.

🔌 I2C Communication – Interfaces with LCD.

⚙ Working Protocol:

📤 Transmitter (Arduino + Laser Module)

Converts serial data → modulated light signals.

Emits laser beam for data transmission.

📥 Receiver (Photodetector + Arduino Uno)

Captures modulated light signals & converts them to electrical form.

Displays received data on an LCD screen.

📋 Non-Functional Requirements (NFRs)

⚡ Low Latency – Ensures minimal delay in data transmission.

🛡 Data Integrity – Accurately reproduces transmitted data.

🌞 Environmental Adaptability – Works in various lighting conditions.

🔄 Reliability – Ensures consistent & error-free communication.

🔒 Security – Blocks unauthorized access (Li-Fi signals do not penetrate walls).

🎯 Ease of Use – Simple setup & maintenance.

🔍 Summary of Requirements

📌 Objective:

Develop a Li-Fi based 5G data transmission system for indoor applications.

🏗 Technology Stack:

Arduino Uno

Laser Modules

555 Timer IC

LCD Display

I2C Protocol

⚙ Implementation:

Data is transmitted via laser beams (modulated light signals).

A photodetector receives & decodes the signals for display.

🛠 Challenges Addressed:

✔ Overcoming line-of-sight dependency using reflection techniques.

✔ Reducing interference from ambient light.

✔ Optimizing data transmission speed using PWM modulation.
