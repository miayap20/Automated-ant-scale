#include <Servo.h>
#include <LiquidCrystal_I2C.h>

Servo myServo;
int const potPin = A1;
int const sensePin = A0;
int potVal;
int angle = 0;
int senseVal;
int switchState = 0;
bool ant_p = false;
String inString = "";
int inChar;
unsigned long MOVING_TIME = 2000;
int intAngle = 0;
int endAngle = 90;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  myServo.attach(9);
  Serial.begin(115200);
  pinMode(10, INPUT);

  lcd.begin();
  lcd.print("Starting");
  
}

void loop() {
  while (Serial.available())
  {
    if (Serial.available() > 0) {
      int inChar = Serial.read();

      if (isDigit(inChar)) {
        inString = (char)inChar;
      }

      // if (inChar == '\n') {
      //   display.showNumberDec(inString.toInt());
      //   inString = "";
      // }
    }
  }
  
  lcd.setCursor(0, 0);
  lcd.print("Ant? ");
  lcd.println(inString);
  delay(100);
  lcd.clear();

  if (inString == "1")
  {
    angle = 90;
  } else {
    angle = 0;
  }

  myServo.write(angle);
  delay(15);

}
