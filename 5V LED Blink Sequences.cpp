#include <Arduino.h>

// put function declarations here:

int red = 7;
int white = 8;
int blue = 9;

void simpleBlink(int led1, int led2, int led3, int del = 1000){
  digitalWrite(led1, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  delay(del);
  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led2, LOW);
  delay(del);
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led3, LOW);
  delay(del);
}

void effect_1(int led1, int led2, int led3, int del = 1000){
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led2, LOW);
}

void wave_left(int led1, int led2, int led3, int del = 1000){
  digitalWrite(led1, HIGH);
  delay(del);
  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  delay(del);
  digitalWrite(led2, LOW);
  delay(del);
  digitalWrite(led3, LOW);
  delay(del);
}

void wave_right(int led1, int led2, int led3, int del = 1000){
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led1, HIGH);
  delay(del);
  digitalWrite(led3, LOW);
  delay(del);
  digitalWrite(led2, LOW);
  delay(del);
  digitalWrite(led1, LOW);
  delay(del);
}

void all_blink(int led1, int led2, int led3, int del = 1000){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(del);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  wave_right(red, white, blue, 200);
  all_blink(red, white, blue, 200);
  all_blink(red, white, blue, 200);
  wave_left(red, white, blue, 200);
  all_blink(red, white, blue, 200);
  all_blink(red, white, blue, 200);
}

// put function definitions here:
