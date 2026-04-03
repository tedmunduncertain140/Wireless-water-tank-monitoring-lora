#include <SPI.h>
#include <LoRa.h>

#define LORA_SS 5
#define LORA_RST 14
#define LORA_DIO0 2

#define LOW_PIN 34
#define MID_PIN 35
#define HIGH_PIN 32
#define FULL_PIN 33

void setup() {
  Serial.begin(115200);
  
  pinMode(LOW_PIN, INPUT);
  pinMode(MID_PIN, INPUT);
  pinMode(HIGH_PIN, INPUT);
  pinMode(FULL_PIN, INPUT);

  LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);
  
  if (!LoRa.begin(868E6)) {
    Serial.println("LoRa Failed!");
    while (1);
  }
}

void loop() {
  int low = digitalRead(LOW_PIN);
  int mid = digitalRead(MID_PIN);
  int high = digitalRead(HIGH_PIN);
  int full = digitalRead(FULL_PIN);

  String level = "EMPTY";

  if (low) level = "LOW";
  if (mid) level = "MID";
  if (high) level = "HIGH";
  if (full) level = "FULL";

  LoRa.beginPacket();
  LoRa.print(level);
  LoRa.endPacket();

  Serial.println("Sent: " + level);

  delay(5000);
}
