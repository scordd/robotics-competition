#include "Jvlib.h"
#include "Servo.h"
#include <CrcLib.h>
using namespace Crc;

Servo Motor;
const int MF = 20;
const int MB = 138;
const int MS = 91;

void setup() {
  // put your setup code here, to run once:
  CrcLib::Initialize();
  Serial.begin(9600);
  Motor.attach(7); // connects to PWM pin 7
  
  // 1 motor (for high-torque control of the arm)
  CrcLib::InitializePwmOutput(CRC_PWM_7);

  // set of 4 motors that will be used for moving the entire robot
  CrcLib::InitializePwmOutput(CRC_PWM_8);
  CrcLib::InitializePwmOutput(CRC_PWM_9);
  CrcLib::InitializePwmOutput(CRC_PWM_10);
  CrcLib::InitializePwmOutput(CRC_PWM_11);

  CrcLib::Update();

  // CODE BELOW IS FOR THE ARM OF THE BOT
  Motor.write(MF);
  delay(1000);

  Motor.write(MS);
  delay(1000);

  Motor.write(MB);
  delay(1000);

  Motor.write(MS);
  delay(1000);
  
  // CODE BELOW IS FOR THE MOVEMENT OF THE BOT
  forward();
  back();

}

void loop() {

}
