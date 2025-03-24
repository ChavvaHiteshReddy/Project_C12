
The requirements for your Li-Fi Major Project can be derived from your report. Here are the key requirements categorized into hardware, software, and functional requirements.

1. Hardware Requirements
PC/Laptop – For uploading and compiling code.

Arduino Uno (2 units) – Microcontroller for processing data at both transmitter and receiver ends.

Laser Transmitter Module – Acts as the data transmitter.

Photodetector/Receiver Module – Detects the transmitted laser light and converts it back into electrical signals.

LCD Display Module – Displays received data.

555 Timer IC – Used for pulse width modulation (PWM) and signal synchronization.

I2C Module – For reducing wiring complexity and enabling multiple device connections.

Power Supply (5V) – Required for running Arduino and other components.

2. Software Requirements
Arduino IDE – For writing, compiling, and uploading code.

Embedded C or C++ – Programming language for Arduino coding.

Serial Monitor – For debugging and checking data transmission.

Libraries Used:

SoftwareSerial.h – For communication between Arduino and serial devices.

LiquidCrystal.h – For controlling the LCD display.

3. Functional Requirements
Data Transmission: The system should be able to send and receive data over a laser-based communication system.

Speed: Should achieve a minimum baud rate of 9600 bps.

Security: Since Li-Fi signals do not penetrate walls, it ensures a secure transmission.

Interference-Free Communication: Should work efficiently without interference from RF signals.

Energy Efficiency: Should utilize LED lighting infrastructure to minimize additional power consumption.

Line-of-Sight Dependency: The system should have a direct line of sight between transmitter and receiver for optimal performance.

User Interface: The LCD should display transmitted data for verification.
