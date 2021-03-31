#include "Jvlib.h"
#include <CrcLib.h>
using namespace Crc;

void setup() {
  // put your setup code here, to run once:
  CrcLib::Initialize();
  Serial.begin(9600);

  
  // 1 motor (for high-torque control of the arm)
  CrcLib::InitializePwmOutput(CRC_PWM_7);

  // set of 4 motors that will be used for moving the entire robot
  CrcLib::InitializePwmOutput(CRC_PWM_8);
  CrcLib::InitializePwmOutput(CRC_PWM_9);
  CrcLib::InitializePwmOutput(CRC_PWM_10);
  CrcLib::InitializePwmOutput(CRC_PWM_11);

  CrcLib::Update();

  // CODE BELOW IS FOR THE ARM OF THE BOT
  
  
  // CODE BELOW IS FOR THE MOVEMENT OF THE BOT
  forward();
  back();

}

void loop() {
  CrcLib::Initialize();
  CrcLib::SetPwmOutput(CRC_PWM_7, 100);
}
