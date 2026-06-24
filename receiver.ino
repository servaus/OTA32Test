/*
  ESP32 Receiver v2
  Prints "Receiver v2" every second
*/

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Receiver v2 Starting...");
}

void loop() {
  Serial.println("Receiver v2");
  delay(1000);
}