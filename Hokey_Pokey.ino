#include <Servo.h>
Servo servoRight;
Servo servoLeft;
#include <SD.h>
#include <SPI.h>


  //pinMode (pin, INPUT/OUTPUT);
  //digitalWrite (pin, HIGH/LOW);
  //delay (time)

  int LEDPIN = 1;
  int LEDPIN_2 = 2;
  int LEDPIN_3 = 3;  
  int LEDPIN_4 = 4;
  
void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
  
  pinMode(LEDPIN,OUTPUT);
  pinMode(LEDPIN_2,OUTPUT);
  pinMode(LEDPIN_3,OUTPUT);
  pinMode(LEDPIN_4,OUTPUT);
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
void alternatingLights (){
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, LOW);
  digitalWrite(LEDPIN_3,HIGH);
  digitalWrite(LEDPIN_4,LOW);
  delay(250);
  digitalWrite(LEDPIN, LOW);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3,LOW);
  digitalWrite(LEDPIN_4,HIGH);
  delay(250);
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, LOW);
  digitalWrite(LEDPIN_3,HIGH);
  digitalWrite(LEDPIN_4,LOW);
  delay(250);
  digitalWrite(LEDPIN, LOW);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3,LOW);
  digitalWrite(LEDPIN_4,HIGH);
  delay(250);  
}
void shake(){
  alternatingLights();
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
  //Right Foot In/Out
  turnLeft();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  backwardLeft();
  digitalWrite(LEDPIN, LOW);
  digitalWrite(LEDPIN_2, LOW);
  digitalWrite(LEDPIN_3, LOW);
  digitalWrite(LEDPIN_4, LOW);
  delay(4000);
  turnLeft();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  shake();
  delay(4000);
  turnRight();
  delay(4000);

  //Left Foot In/Out 
  turnRight();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  backwardRight();
  digitalWrite(LEDPIN, LOW);
  digitalWrite(LEDPIN_2, LOW);
  digitalWrite(LEDPIN_3, LOW);
  digitalWrite(LEDPIN_4, LOW);
  delay(4000);
  turnRight();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  shake();
  delay(4000);
  turnLeft();
  delay(4000);
  
  // Right Hand In/Out
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  turnLeft();
  delay(4000);
  backwardLeft();
  digitalWrite(LEDPIN, LOW);
  digitalWrite(LEDPIN_2, LOW);
  digitalWrite(LEDPIN_3, LOW);
  digitalWrite(LEDPIN_4, LOW);
  delay(4000);
  turnLeft();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  shake();
  delay(4000);
  turnRight();
  delay(4000);

  // Left Hand In/Out
  turnRight();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  backwardRight();
  digitalWrite(LEDPIN, LOW);
  digitalWrite(LEDPIN_2, LOW);
  digitalWrite(LEDPIN_3, LOW);
  digitalWrite(LEDPIN_4, LOW);
  delay(4000);
  turnRight();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  shake();
  delay(4000);
  turnLeft();
  delay(4000);

  //Whole Self 
  forward();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  backward();
  digitalWrite(LEDPIN, LOW);
  digitalWrite(LEDPIN_2, LOW);
  digitalWrite(LEDPIN_3, LOW);
  digitalWrite(LEDPIN_4, LOW);
  delay(4000);
  forward();
  digitalWrite(LEDPIN, HIGH);
  digitalWrite(LEDPIN_2, HIGH);
  digitalWrite(LEDPIN_3, HIGH);
  digitalWrite(LEDPIN_4, HIGH);
  delay(4000);
  shake();
  delay(4000);
  turnRight();
  delay(4000); 
}

