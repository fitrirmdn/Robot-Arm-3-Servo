#include <Servo.h>
Servo myServo1;
Servo myServo2;
Servo myServo3;

void setup () {
  myServo1.attach(9);
  myServo2.attach(10);
  myServo3.attach(11);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  pinMode(1, INPUT);
}

void loop () {
  if (digitalRead(1) == HIGH) {
    myServo1.write(180);
  }
  else {myServo1.write(0);
  }

  if (digitalRead(2) == HIGH) {
    myServo2.write(90);
  }
  else {myServo2.write(0);
  }
  if (digitalRead(3) == HIGH) {
    myServo3.write(90);
  }
  else {myServo3.write(0);
  }
}  