#include "Jvlib.h"
#include <CrcLib.h>
using namespace Crc;



void setup() {
  // put your setup code here, to run once:
  CrcLib::Initialize();

  // other 2 motors (for high-torque control of the arm)
  CrcLib::InitializePwmOutput(CRC_PWM_6);
  CrcLib::InitializePwmOutput(CRC_PWM_7);

  // set of 4 motors that will be used for moving the entire robot
  CrcLib::InitializePwmOutput(CRC_PWM_8);
  CrcLib::InitializePwmOutput(CRC_PWM_9);
  CrcLib::InitializePwmOutput(CRC_PWM_10);
  CrcLib::InitializePwmOutput(CRC_PWM_11);

  CrcLib::Update();

  forward();
  back();

}

void loop() {

}
