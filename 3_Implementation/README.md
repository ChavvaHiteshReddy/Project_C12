# 📡 High-Speed 5G Data Transmission using Li-Fi Technology

## ✨ Implementation

### 🛠 Project Execution
We successfully built a **Li-Fi data transmission and reception system** using **Arduino**, a **laser transmitter**, and an **LCD display**.

✔ **Steps Executed:**
1. **Hardware Setup** - Integrated Arduino, laser transmitter, and receiver modules.
2. **Code Implementation** - Uploaded transmitter and receiver codes to Arduino boards.
3. **Testing & Debugging** - Transmitted multiple data sets and analyzed the output.

---

### 🚀 Challenges Faced & Solutions
| Challenge | Solution |
|-----------|----------|
| **Line of Sight Limitation** | Used optimized beam alignment and reflectors. |
| **Ambient Light Interference** | Implemented a 555 timer for pulse width modulation. |
| **Limited Range** | Experimented with different LED intensities and laser power levels. |

---

## 🖥️ Code Implementation

### 📡 **Transmitter Code**
```cpp
#include <SoftwareSerial.h>

#define keyy A4
SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(keyy, OUTPUT);
  digitalWrite(keyy, HIGH);
  Serial.println("Type something to send via Li-Fi!");
}

void loop() {
  if (Serial.available()) {
    char inChar = Serial.read();
    mySerial.write(inChar);
  }
  if (mySerial.available()) {
    char inChar = mySerial.read();
    Serial.write(inChar);
  }
}


  if (inChar != "" && inChar != previousData) {
    lcd.setCursor(5, 1);
    lcd.print("                ");
    lcd.setCursor(5, 1);
    lcd.print(inChar);
    previousData = inChar;
  }
}
