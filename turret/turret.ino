#include<Servo.h>
#define bulb 6
#define servo 10
#define servo2 11
#define SW_pin 2
#define speed 5
#define speed1 2
#define speed2 15
const int X_pin = A0;
const int Y_pin = A1;


Servo ServoOne;
Servo ServoTwo;
int x = 90;
int y = 90;




void setup() {
  // put your setup code here, to run once:
  ServoOne.attach(servo);
  ServoTwo.attach(servo2);
  pinMode(bulb ,OUTPUT);
  ServoOne.write(x);
  ServoTwo.write(x);
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.setTimeout(10);
  digitalWrite(bulb, HIGH);
}




void loop() {
  if (analogRead(Y_pin) > 650) {
    y = y + speed;
    ServoTwo.write(y);
  }                                   // Y AXIS
  if (analogRead(Y_pin) < 450) {
    y = y - speed;
    ServoTwo.write(y);
  }
  
  if (analogRead(X_pin) < 450) {
    x = x - speed;
    ServoOne.write(x);
  }                                  // X AXIS
  if (analogRead(X_pin) > 650) {
    x = x + speed;
    One.write(x);
  }
 delay(4);
}

//
//void loop() {
//  int yVal = analogRead(Y_pin);
//  int xVal = analogRead(X_pin);
//
//  // Y AXIS
//  if ((yVal < 400) && (yVal > 200)) {
//    y = y + speed1;
//    wowServo2.write(y);
//  }
//  else if (yVal < 200) {
//    y = y + speed2;
//    wowServo2.write(y);
//  }
//
//  if ((xVal < 400) && (xVal > 200)) {
//    x = x - speed1;
//    wowServo2.write(x);
//  }
//  else if (xVal < 200) {
//    x = x - speed2;
//    wowServo.write(x);
//  } 
//
//
//  
//  // X AXIS
//  if ((yVal > 700) && (yVal <= 900)) {
//    y = y - speed1;
//    wowServo2.write(y);
//  }
//  else if (yVal > 800) {
//    y = y - speed2;
//    wowServo2.write(y);
//  }  
//   
//  if ((xVal > 700) && (xVal <= 900)) {
//    y = y + speed1;
//    wowServo2.write(y);
//  }
//  else if (xVal > 800) {
//    x = x + speed2;
//    wowServo.write(x);
//  }
//
// delay(40);
//}
