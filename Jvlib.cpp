#include "Jvlib.h"
#include <CrcLib.h>
using namespace Crc;

int forward()
{

  for (int i = 0; i < 50000; i++) {
    CrcLib::Initialize();

    CrcLib::SetPwmOutput(CRC_PWM_10, 100);
    CrcLib::SetPwmOutput(CRC_PWM_11, -100);
    CrcLib::SetPwmOutput(CRC_PWM_8, 100);
    CrcLib::SetPwmOutput(CRC_PWM_9, -100);

    CrcLib::Update();
  }
  return 0;
}

int back()
{

  for (int g = 0; g < 50000; g++) {
    CrcLib::Initialize();

    CrcLib::SetPwmOutput(CRC_PWM_10, -100);
    CrcLib::SetPwmOutput(CRC_PWM_11, 100);
    CrcLib::SetPwmOutput(CRC_PWM_8, -100);
    CrcLib::SetPwmOutput(CRC_PWM_9, 100);

    CrcLib::Update();
  }
  return 0;
}
