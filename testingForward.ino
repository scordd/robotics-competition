
#include <CrcLib.h>
using namespace Crc;

void setup() {
  // put your setup code here, to run once:
  CrcLib::Initialize();

  
  // 1 motor (for high-torque control of the arm)
  CrcLib::InitializePwmOutput(CRC_PWM_7);

  // set of 4 motors that will be used for moving the entire robot
  CrcLib::InitializePwmOutput(CRC_PWM_8);
  CrcLib::InitializePwmOutput(CRC_PWM_9);
  CrcLib::InitializePwmOutput(CRC_PWM_10);
  CrcLib::InitializePwmOutput(CRC_PWM_11);

  

  // CODE BELOW IS FOR THE ARM OF THE BOT

  
  // CODE BELOW IS FOR THE MOVEMENT OF THE BOT

}

void loop() {
  CrcLib::Update();


  CrcLib::SetPwmOutput(CRC_PWM_10, -100);
  CrcLib::SetPwmOutput(CRC_PWM_11, -100);
  CrcLib::SetPwmOutput(CRC_PWM_8, 100);
  CrcLib::SetPwmOutput(CRC_PWM_9, 100);

}
