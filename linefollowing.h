/*#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SEN_1_PIN 39
#define SEN_2_PIN 36
#define SEN_3_PIN 2
#define SEN_4_PIN 32
void goFoward()
{
  pwm.setPWM(8,0,235);
  pwm.setPWM(9,0,0);
  pwm.setPWM(10,0,235);
  pwm.setPWM(11,0,0);
}

void goBackward()
{
  pwm.setPWM(8,0,0);
  pwm.setPWM(9,0,235);
  pwm.setPWM(10,0,0);
  pwm.setPWM(11,0,235);
}

void turnLeft()
{
  pwm.setPWM(8,0,0);
  pwm.setPWM(9,0,235);
  pwm.setPWM(10,0,235);
  pwm.setPWM(11,0,0);
}

void turnRight()
{
  pwm.setPWM(8,0,235);
  pwm.setPWM(9,0,0);
  pwm.setPWM(10,0,0);
  pwm.setPWM(11,0,235);
}

char cRead_Sensor(void)
{
  short sSen_Pin[4] = {SEN_1_PIN, SEN_2_PIN, SEN_3_PIN, SEN_4_PIN};
  char cStatus = 0b00000000;

  for(short i=0; i<4; i++)
  {
      cStatus = cStatus | (digitalRead(sSen_Pin[i]) << i);    
  }
  return cStatus;
}

void lineFollowing()
{
  char cSen_Status = 0b000000000; //0b00001111; 
  cSen_Status = cRead_Sensor();
  Serial.println(cSen_Status);
 if((cSen_Status == 0b00001001) || (cSen_Status == 0b00001011) || (cSen_Status == 0b00001101))
//  if((cSen_Status == 0b00000110) || (cSen_Status == 0b00000100) || (cSen_Status == 0b00000010))
  {
    goFoward();
    Serial.println(1);
  }
  else if((cSen_Status == 0b00001110) || (cSen_Status == 0b00001100) || (cSen_Status == 0b00001000))
  {
   turnLeft();
 // turnRight();
    Serial.println(2);
  }
   else if((cSen_Status == 0b00000111) || (cSen_Status == 0b00000011) || (cSen_Status == 0b00000001))
  {
   turnRight();
 //  turnLeft();
    Serial.println(-2);
  }
 else if(cSen_Status == 0b0000001111)
  // else if(cSen_Status == 0b0000001111)
    goBackward();
    Serial.println(-1);
  }


void setupdoline() {
  // put your setup code here, to run once:
  pinMode(SEN_1_PIN, INPUT);
  pinMode(SEN_2_PIN, INPUT);
  pinMode(SEN_3_PIN, INPUT);
  pinMode(SEN_4_PIN, INPUT);
}

void doline{
  // put your main code here, to run repeatedly:
  lineFollowing();
  delay(50);
}*/
