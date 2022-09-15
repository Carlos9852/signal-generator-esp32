#include <Arduino.h>

int dac1 = 2;
int channel1 = 0;
int bits = 8;

void setup() {
  pinMode(dac1, OUTPUT);
  ledcAttachPin(dac1,channel1);
  ledcSetup(channel1,800,10);
  ledcWrite(channel1, ((pow(2, bits)-1)/2));
  
}

void loop() {
  
}
