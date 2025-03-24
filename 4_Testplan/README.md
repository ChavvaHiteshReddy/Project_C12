# Test Plan - High-Speed 5G Data Transmission using Li-Fi

## 📌 **Project Overview**
This test plan outlines the testing strategy for the **High-Speed 5G Data Transmission using Li-Fi** project. It ensures the system meets functional, performance, and reliability requirements.

---

## 📝 **Test Objectives**
- Validate data transmission speed and accuracy.
- Ensure proper signal reception under various conditions.
- Verify system response to environmental interference.
- Test the security aspects of Li-Fi communication.
- Evaluate the efficiency of power consumption.

---

## 🛠 **Test Environment**
### **Hardware Components**
- Arduino Uno (Transmitter & Receiver)
- Laser Transmitter Module
- Photodiode Receiver Module
- 555 Timer Circuit
- LCD Display Module
- Power Supply

### **Software & Tools**
- Arduino IDE
- Serial Monitor (for debugging)
- Oscilloscope (for signal analysis)
- Multimeter (for voltage and current measurement)

---

## 📌 **Test Cases**
### 1️⃣ **Functional Testing**
| **Test Case ID** | **Description** | **Expected Result** | **Status** |
|-----------------|----------------|---------------------|------------|
| TC-001 | Check if the transmitter sends data correctly | Data is sent without loss | ✅ / ❌ |
| TC-002 | Verify the receiver captures transmitted data | Data is received without distortion | ✅ / ❌ |
| TC-003 | Test LCD display for correct output | Display shows received data | ✅ / ❌ |

### 2️⃣ **Performance Testing**
| **Test Case ID** | **Description** | **Expected Result** | **Status** |
|-----------------|----------------|---------------------|------------|
| TC-004 | Measure transmission speed (Baud rate 9600) | Data rate is maintained | ✅ / ❌ |
| TC-005 | Check latency between transmission and reception | Minimal delay observed | ✅ / ❌ |

### 3️⃣ **Environmental Testing**
| **Test Case ID** | **Description** | **Expected Result** | **Status** |
|-----------------|----------------|---------------------|------------|
| TC-006 | Test under bright ambient light | No major interference | ✅ / ❌ |
| TC-007 | Check range limitations | Effective up to expected range | ✅ / ❌ |

### 4️⃣ **Security Testing**
| **Test Case ID** | **Description** | **Expected Result** | **Status** |
|-----------------|----------------|---------------------|------------|
| TC-008 | Test data leakage through walls | No data transmission beyond the intended area | ✅ / ❌ |

---

## 🚀 **Test Execution Plan**
- **Phase 1:** Initial unit testing of individual components.
- **Phase 2:** Integration testing of the transmitter and receiver.
- **Phase 3:** System testing in various environments.
- **Phase 4:** Performance optimization and final validation.

---

