#include <Servo.h>
#include <LiquidCrystal.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

LiquidCrystal lcd(13, 12, 8, 7, 5, 4); // Modify pin numbers to match your wiring

const int button1 = 2;
const int button2 = 3;
const int button3 = A4; // New button to set playback count

int button1Pressed = 0;
boolean button2Pressed = false;

const int pot1 = A0;
const int pot2 = A1;
const int pot3 = A2;
const int pot4 = A3;

int pot1Val;
int pot2Val;
int pot3Val;
int pot4Val;

int pot1Angle;
int pot2Angle;
int pot3Angle;
int pot4Angle;

int servo1PosSave[] = {1, 1, 1, 1, 1, 1, 1, 1};
int servo2PosSave[] = {1, 1, 1, 1, 1, 1, 1, 1};
int servo3PosSave[] = {1, 1, 1, 1, 1, 1, 1, 1};
int servo4PosSave[] = {1, 1, 1, 1, 1, 1, 1, 1};

int playbackCount = 0; // Number of times to play back
int servo1Step = 1; // The step size for servo1
int servo2Step = 1; // The step size for servo2
int servo3Step = 1; // The step size for servo3
int servo4Step = 1; // The step size for servo4
int servoMoveDelay = 28; // Delay between each step in milliseconds

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);
  
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  
  lcd.setCursor(0, 0);
  lcd.print("4DOF ROBOTIC ARM");
  lcd.setCursor(0, 1);
  lcd.print("PRESS TO SAVE");
}

void loop() {
  pot1Val = analogRead(pot1);
  pot1Angle = map(pot1Val, 0, 1023, 180, 0);
  pot2Val = analogRead(pot2);
  pot2Angle = map(pot2Val, 0, 1023, 100, 20);
  pot3Val = analogRead(pot3);
  pot3Angle = map(pot3Val, 0, 1023, 80, 10);
  pot4Val = analogRead(pot4);
  pot4Angle = map(pot4Val, 0, 1023, 90, 50);
  
  servo1.write(pot1Angle);
  servo2.write(pot2Angle);
  servo3.write(pot3Angle);
  servo4.write(pot4Angle);
  
  if (digitalRead(button1) == HIGH) {
    button1Pressed++;
    switch (button1Pressed) {
      case 1:
        servo1PosSave[0] = pot1Angle;
        servo2PosSave[0] = pot2Angle;
        servo3PosSave[0] = pot3Angle;
        servo4PosSave[0] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #1 Saved");
        Serial.println("Position #1 Saved");
        delay(1500);
        break;
        
      case 2:
        servo1PosSave[1] = pot1Angle;
        servo2PosSave[1] = pot2Angle;
        servo3PosSave[1] = pot3Angle;
        servo4PosSave[1] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #2 Saved");
        Serial.println("Position #2 Saved");
        delay(1500);
        break;
        
      case 3:
        servo1PosSave[2] = pot1Angle;
        servo2PosSave[2] = pot2Angle;
        servo3PosSave[2] = pot3Angle;
        servo4PosSave[2] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #3 Saved");
        Serial.println("Position #3 Saved");
        delay(1500);
        break;
        
      case 4:
        servo1PosSave[3] = pot1Angle;
        servo2PosSave[3] = pot2Angle;
        servo3PosSave[3] = pot3Angle;
        servo4PosSave[3] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #4 Saved");
        Serial.println("Position #4 Saved");
        delay(1500);
        break;
        
      case 5:
        servo1PosSave[4] = pot1Angle;
        servo2PosSave[4] = pot2Angle;
        servo3PosSave[4] = pot3Angle;
        servo4PosSave[4] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #5 Saved");
        Serial.println("Position #5 Saved");
        delay(1500);
        break;
        
      case 6:
        servo1PosSave[5] = pot1Angle;
        servo2PosSave[5] = pot2Angle;
        servo3PosSave[5] = pot3Angle;
        servo4PosSave[5] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #6 Saved");
        Serial.println("Position #6 Saved");
        delay(1500);
        break;
        
      case 7:
        servo1PosSave[6] = pot1Angle;
        servo2PosSave[6] = pot2Angle;
        servo3PosSave[6] = pot3Angle;
        servo4PosSave[6] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #7 Saved");
        Serial.println("Position #7 Saved");
        delay(1500);
        break;
        
      case 8:
        servo1PosSave[7] = pot1Angle;
        servo2PosSave[7] = pot2Angle;
        servo3PosSave[7] = pot3Angle;
        servo4PosSave[7] = pot4Angle;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Position #8 Saved");
        lcd.setCursor(0, 1);
        lcd.print("PRESS TO MOVE");
        Serial.println("Position #8 Saved");
        delay(1500);
        break;
    }
  }

  if (digitalRead(button2) == HIGH) {
    button2Pressed = true;
  }
  
  if (digitalRead(button3) == HIGH) {
    playbackCount++;
    if (playbackCount > 10) {
      playbackCount = 0;
    }
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playback Count:");
    lcd.setCursor(0, 1);
    lcd.print(playbackCount);
    delay(1000);
  }
  
  if (button2Pressed) {
    for (int count = 0; count < playbackCount; count++) {
      for (int i = 0; i < 8; i++) {
        int targetPos1 = servo1PosSave[i];
        int targetPos2 = servo2PosSave[i];
        int targetPos3 = servo3PosSave[i];
        int targetPos4 = servo4PosSave[i];
        
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Moving...");
        lcd.setCursor(0, 1);
        lcd.print("Count: ");
        lcd.print(count + 1);
        Serial.print("Moving to Position #");
        Serial.println(i + 1);
        
        // Gradually move servo1
        while (servo1.read() != targetPos1) {
          if (servo1.read() < targetPos1) {
            servo1.write(servo1.read() + servo1Step);
          } else {
            servo1.write(servo1.read() - servo1Step);
          }
          delay(servoMoveDelay);
        }
        
        // Gradually move servo2
        while (servo2.read() != targetPos2) {
          if (servo2.read() < targetPos2) {
            servo2.write(servo2.read() + servo2Step);
          } else {
            servo2.write(servo2.read() - servo2Step);
          }
          delay(servoMoveDelay);
        }
        
        // Gradually move servo3
        while (servo3.read() != targetPos3) {
          if (servo3.read() < targetPos3) {
            servo3.write(servo3.read() + servo3Step);
          } else {
            servo3.write(servo3.read() - servo3Step);
          }
          delay(servoMoveDelay);
        }
        
        // Gradually move servo4
        while (servo4.read() != targetPos4) {
          if (servo4.read() < targetPos4) {
            servo4.write(servo4.read() + servo4Step);
          } else {
            servo4.write(servo4.read() - servo4Step);
          }
          delay(servoMoveDelay);
        }
      }
    }
    button2Pressed = false;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Task Completed");
    lcd.setCursor(0, 1);
    lcd.print("Restart Playback");
    delay(100);
  }
}
