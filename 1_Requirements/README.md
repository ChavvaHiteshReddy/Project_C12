** 1. High-Level Requirements (HLRs):
High-Speed 5G Data Transmission – The system should support 5G speeds using Li-Fi technology.

Indoor Environment Compatibility – The Li-Fi model must function efficiently in offices, hospitals, and homes.

Audio and Video Transmission – The system should be capable of transmitting multimedia data.

Integration with Existing Infrastructure – The system should integrate with smart lighting solutions for dual-purpose use (illumination & communication).

Security & Reliability – The system must provide secure communication, minimizing the risk of hacking.

Energy Efficiency – The setup should optimize power consumption by utilizing LED lighting.

Scalability – The architecture should be designed to accommodate a growing number of devices and users.

** 2. Low-Level Requirements (LLRs):
Hardware Requirements:

PC – Used for uploading and compiling code.

Arduino Uno – Microcontroller for processing data in transmitter and receiver sections.

Laser Transmitter Module – Used to transmit Li-Fi signals.

Laser Receiver Module – Detects and converts signals back to electrical form.

555 Timer IC – Used for signal synchronization and pulse width modulation.

LCD Display Module – Outputs the received data.

I2C Module – Reduces wiring complexity for LCD communication.

Software & Communication Protocols:

Arduino IDE – Used to write and upload the transmitter and receiver code.

Software Serial Library – Handles communication between Arduino boards.

9600 Baud Rate – Data transmission speed.

I2C Communication Protocol – Used for LCD interfacing.

Working Protocol:

Transmitter (Arduino Uno + Laser Module):

Converts serial data into modulated light signals.

Emits laser beam for data transmission.

Receiver (Photodetector + Arduino Uno):

Captures modulated laser light and converts it into electrical signals.

Displays received data on an LCD screen.

Non-Functional Requirements (NFRs):
Latency – The system must ensure low latency data transfer.

Data Integrity – The receiver should accurately reproduce the transmitted data without corruption.

Environmental Adaptability – The system should work under different indoor lighting conditions.

Reliability – The system should function consistently without failure.

Security – Prevents unauthorized access since Li-Fi signals do not penetrate walls.

Ease of Use – The setup should be simple to implement and maintain.

Summary of Requirements:
Objective: Develop a Li-Fi based high-speed 5G data transmission system for indoor applications.

Technology Stack: Arduino Uno, Laser Modules, 555 Timer, LCD, I2C Protocol.

Implementation: Data is transmitted via modulated laser beams and received using photodetectors.

Challenges Addressed:

Overcoming line-of-sight dependency using reflection techniques.

Reducing interference from ambient light.

Optimizing data transmission speeds through PWM modulation.

Future Scope:

Implementing Li-Fi in smart cities, hospitals, and IoT networks.

Integrating with 5G and Wi-Fi networks for hybrid communication.
