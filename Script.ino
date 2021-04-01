#include <CrcLib.h>
using namespace Crc;

#define PULLY CRC_PWM_6
#define SERVO CRC_PWM_7
#define BL CRC_PWM_11
#define BR CRC_PWM_9
#define FL CRC_PWM_10
#define FR CRC_PWM_8

int forwardTime = 0;
int backwardTime = 0;
int servoCloseTime = 0;
int servoOpenTime = 0;

void setup() {
  CrcLib::Initialize();
  Serial.begin(9600);

  // 1 pully motor (arm)
  CrcLib::InitializePwmOutput(CRC_PWM_6);

  // 1 servo (for high-torque control of the arm)
  CrcLib::InitializePwmOutput(CRC_PWM_7);

  // set of 4 motors that will be used for moving the entire robot
  CrcLib::InitializePwmOutput(CRC_PWM_8);
  CrcLib::InitializePwmOutput(CRC_PWM_9);
  CrcLib::InitializePwmOutput(CRC_PWM_10);
  CrcLib::InitializePwmOutput(CRC_PWM_11);

  // CODE BELOW IS FOR SCRIPTING - DO NOT MAKE CHANGES WITHOUT CONSULTING THE REST OF THE GROUP AND UPLOADING TO GITHUB AFTERWARDS

}

void loop() {
  CrcLib::Update();

}
