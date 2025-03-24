Implementation
The implementation of the Li-Fi data transmission system was executed systematically, ensuring each component functioned as intended to achieve high-speed, secure, and efficient communication. Below is a detailed breakdown of the implementation process:

5.1 Project Execution
Step 1: Hardware Setup
Components Used:

Arduino Uno (x2): Served as the microcontroller for both transmitter and receiver sections.

Laser Transmitter Module: Converted electrical signals into modulated light signals for data transmission.

Laser Receiver Module: Captured light signals and converted them back into electrical signals.

LCD Display: Showed the received data for user verification.

555 Timer: Ensured precise pulse modulation and synchronization.

I2C Module: Reduced wiring complexity for the LCD interface.

Assembly:

The transmitter circuit was built using Arduino Uno, the laser module, and supporting components like resistors and capacitors.

The receiver circuit included the laser sensor, Arduino Uno, LCD with I2C, and the 555 timer for signal processing.

Step 2: Software Development
Transmitter Code:

Written in Arduino IDE, the code initialized serial communication at 9600 baud rate.

Data input from the PC was transmitted via the laser module using SoftwareSerial library.

cpp
Copy
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX 
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Type something to send the data in LIFI!");
}
void loop() {
  if (Serial.available()) {
    char inChar = Serial.read();
    mySerial.write(inChar);
  }
}
Receiver Code:

The receiver Arduino decoded incoming light signals and displayed the data on the LCD.

The LiquidCrystal library facilitated LCD output, while SoftwareSerial handled communication.

cpp
Copy
#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
SoftwareSerial mySerial(11, 10);
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("LiFi-Demo");
}
void loop() {
  if (mySerial.available()) {
    String inChar = mySerial.readString();
    lcd.setCursor(0, 1);
    lcd.print("Data: " + inChar);
  }
}
Step 3: Testing and Validation
Data Transmission: Text strings and numerical data were transmitted from the PC to the receiver via the laser link.

Performance Metrics:

Achieved a stable baud rate of 9600 bps.

Successfully demonstrated line-of-sight communication with minimal data loss.

Challenges Mitigated:

Ambient Light Interference: Addressed using PWM via the 555 timer to filter noise.

Alignment Issues: Ensured precise alignment of the laser transmitter and receiver for uninterrupted signal flow.

5.2 Challenges and Solutions
Challenge	Solution
Line-of-Sight Dependency	Used reflectors to redirect light signals in confined spaces.
Ambient Light Interference	Implemented PWM modulation to distinguish data signals from background noise.
Limited Range	Optimized laser intensity and tested in controlled indoor environments.
Data Synchronization	Employed the 555 timer for precise timing and signal recovery.
