#include <Servo.h>
Servo servoRight;
Servo servoLeft;
void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
}
  //functions
void forward (){
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
}
void backward () {
    servoLeft.writeMicroseconds(1300);
    servoRight.writeMicroseconds(1700);
  }
void turnLeft () {
    servoLeft.writeMicroseconds(1500);
    servoRight.writeMicroseconds(1300);
  }
void turnRight () {
    servoLeft.writeMicroseconds(1700);
    servoRight.writeMicroseconds(1500);
  }
void stopServo () {
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}
void backwardLeft() {
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1700);
}

void backwardRight() {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1500);
}
void shake(){
    servoRight.writeMicroseconds(1300);
    delay(500);
    servoRight.writeMicroseconds(1700);
    delay(500);
    servoLeft.writeMicroseconds(1300);
    delay(500);
    servoLeft.writeMicroseconds(1700);
    delay(500);
}
void loop() {
  // put your main code here, to run repeatedly:
  //Dance Moves

  //Right Foot In
  turnLeft();
  delay(4000);
  backwardLeft();
  delay(4000);
  turnLeft();
  delay(4000);
  shake();
  delay(4000);
  turnRight();
  delay(4000);

  //Left Foot In
  turnRight();
  delay(4000);
  backwardRight();
  delay(4000);
  turnRight();
  delay(4000);
  shake();
  delay(4000);
  turnLeft();
  delay(4000);
  
  // Right Hand In
  turnLeft();
  delay(4000);
  backwardLeft();
  delay(4000);
  turnLeft();
  delay(4000);
  shake();
  delay(4000);
  turnRight();
  delay(4000);

  // Left Hand In
  turnRight();
  delay(4000);
  backwardRight();
  delay(4000);
  turnRight();
  delay(4000);
  shake();
  delay(4000);
  turnLeft();
  delay(4000);

  //Whole Self In
  forward();
  delay(4000);
  backward();
  delay(4000);
  forward();
  delay(4000);
  shake();
  delay(4000);
  turnRight();
  delay(4000); 
}
