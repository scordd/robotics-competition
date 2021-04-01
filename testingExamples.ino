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
  // put your setup code here, to run once:
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

}

void loop() {

  CrcLib::Update();


  // MOVE EVERYTHING TO VOID SETUP() ONCE SCRIPTING HAS BEGUN


  // CODE BELOW IS FOR THE MOVEMENT OF THE BOT (forward)

  //  CrcLib::SetPwmOutput(FL, 100);
  //  CrcLib::SetPwmOutput(BL, 100);
  //  CrcLib::SetPwmOutput(FR, 100);
  //  CrcLib::SetPwmOutput(BR, 100);

  // CODE BELOW IS FOR THE MOVEMENT OF THE BOT (backward)

  //CrcLib::Initialize();

  //CrcLib::SetPwmOutput(FL, 100);
  //CrcLib::SetPwmOutput(BL, 100);
  //CrcLib::SetPwmOutput(FR, -100);
  //CrcLib::SetPwmOutput(BR, -100);

  // CODE BELOW IS FOR THE ARM OF THE BOT (Open)

  // CODE BELOW IS FOR THE ARM OF THE BOT (Close)

  // CODE BELOW IS FOR THE PULLY OF THE ARM

  // CODE BELOW IS FOR TESTING ROTATION




}
