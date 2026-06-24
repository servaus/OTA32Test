/*
  ESP32 Send v3
  Prints "Send v3" every second
*/

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Send v3 Starting...");
}

void loop() {
  Serial.println("Send v3");
  delay(1000);
}