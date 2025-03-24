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

 **Receiver Code**

#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

// LCD pin connections
const int pin_RS = 8;
const int pin_EN = 9;
const int pin_d4 = 4;
const int pin_d5 = 5;
const int pin_d6 = 6;
const int pin_d7 = 7;

LiquidCrystal lcd(pin_RS, pin_EN, pin_d4, pin_d5, pin_d6, pin_d7);
SoftwareSerial mySerial(11, 10);  // RX, TX
String previousData = "";  

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(3, 0);
  lcd.print("Li-Fi Demo");
  lcd.setCursor(0, 1);
  lcd.print("Data:");
}

void loop() {
  String inChar = "";
  if (mySerial.available()) {
    inChar = mySerial.readString();
    inChar.trim();
  }
  if (inChar != "" && inChar != previousData) {
    lcd.setCursor(5, 1);
    lcd.print("                ");
    lcd.setCursor(5, 1);
    lcd.print(inChar);
    previousData = inChar;
  }
}
