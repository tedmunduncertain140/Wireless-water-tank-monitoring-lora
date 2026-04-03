#include <SPI.h>
#include <LoRa.h>

#define RELAY_PIN 25
#define HOA_SWITCH 26

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  pinMode(HOA_SWITCH, INPUT);

  LoRa.begin(868E6);
}

void loop() {
  int packetSize = LoRa.parsePacket();

  if (packetSize) {
    String command = "";

    while (LoRa.available()) {
      command += (char)LoRa.read();
    }

    int hoa = digitalRead(HOA_SWITCH);

    if (hoa == HIGH) { // AUTO MODE
      if (command == "ON") {
        digitalWrite(RELAY_PIN, HIGH);
      } else if (command == "OFF") {
        digitalWrite(RELAY_PIN, LOW);
      }
    }

    Serial.println("Motor Command: " + command);
  }
}
