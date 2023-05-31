#include <Arduino.h>

int LED = 13; //creates an integer variable and assigned a number correlating to the pin on the arduino responsible for blinking the LED.

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); //modifies the pin to be an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH); //modifies the pin to be at its highest output
  delay(100);//keep the previous step ongoing for 1/10 of a millisecond
  digitalWrite(LED, LOW);//now set the pin to it's lowest output
  delay(100);//keep the previous step 1/10 of a millisecond
}