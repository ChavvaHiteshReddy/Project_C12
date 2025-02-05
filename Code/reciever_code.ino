#define LDR_PIN A0  // LDR/Photodiode sensor
#define SPEAKER_PIN 9 // Speaker output

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(LDR_PIN); // Read Li-Fi signal
  int frequency = map(sensorValue, 0, 1023, 200, 1000); // Convert light intensity to frequency
  
  // Play tone based on received signal
  tone(SPEAKER_PIN, frequency, 100);
  Serial.println(sensorValue); // Debugging the received signal
