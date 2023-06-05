#include <Arduino.h> //using Visual Studio Code so this has to be imported. 

// put function declarations here:

int red = 9;
int green = 10;
int blue = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int speed = 10;

  int red_Level = 255;
  int green_Level = 0;
  int blue_Level = 0;

  analogWrite(red, red_Level);
  analogWrite(green, green_Level);
  analogWrite(blue, blue_Level);

  for(int i = 0; i < 255; i++){
    analogWrite(red, red_Level);
    analogWrite(green, green_Level);
    analogWrite(blue, blue_Level);
    delay(speed);
    red_Level--;
    green_Level++;
  }

  red_Level = 0;
  green_Level = 255;
  blue_Level = 0;

  analogWrite(red, red_Level);
  analogWrite(green, green_Level);
  analogWrite(blue, blue_Level);

  for(int i = 0; i < 255; i++){
    analogWrite(red, red_Level);
    analogWrite(green, green_Level);
    analogWrite(blue, blue_Level);
    delay(speed);
    green_Level--;
    blue_Level++;
  }

  red_Level = 0;
  green_Level = 0;
  blue_Level = 255;

  analogWrite(red, red_Level);
  analogWrite(green, green_Level);
  analogWrite(blue, blue_Level);

  for(int i = 0; i < 255; i++){
    analogWrite(red, red_Level);
    analogWrite(green, green_Level);
    analogWrite(blue, blue_Level);
    delay(speed);
    blue_Level--;
    red_Level++;
  }
}

// put function definitions here:
