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

  // IMPORTANT - READ BELOW!!!!

  // CODE BELOW IS FOR SCRIPTING - DO NOT MAKE CHANGES WITHOUT CONSULTING THE REST OF THE GROUP AND UPLOADING TO GITHUB AFTERWARDS

  for (int i; i <= 1000; i++) {
    CrcLib::SetPwmOutput(FL, 100);
    CrcLib::SetPwmOutput(BL, 100);
    CrcLib::SetPwmOutput(FR, 100);
    CrcLib::SetPwmOutput(BR, 100);
  }




}

void loop() {
  ButtonState = CrcLib::GetDigitalInput(CRC_DIG_5);

  if (ButtonState = HIGH){
      left(5000);
      forward(5000);
      backward(5000);
      right(5000);
      
      CrcLib::Update();
    } else {
      CrcLib::Update();
    }
};


int forward(int t) // moving robot forwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 75);
    CrcLib::SetPwmOutput(CRC_PWM_9, -75);
    CrcLib::SetPwmOutput(CRC_PWM_10, 75);
    CrcLib::SetPwmOutput(CRC_PWM_11, -75);

    CrcLib::Update();
  }
  return 0;
};

int forwardpressure(int t) // moving robot forwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 75);
    CrcLib::SetPwmOutput(CRC_PWM_9, -75);
    CrcLib::SetPwmOutput(CRC_PWM_10, 75);
    CrcLib::SetPwmOutput(CRC_PWM_11, -75);

    CrcLib::SetPwmOutput(CRC_PWM_6, -25);
    CrcLib::SetPwmOutput(CRC_PWM_7, 25);

    CrcLib::Update();
  }
  return 0;
};

int backward(int t) // moving robot backwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, -75);
    CrcLib::SetPwmOutput(CRC_PWM_9, 75);
    CrcLib::SetPwmOutput(CRC_PWM_10, -75);
    CrcLib::SetPwmOutput(CRC_PWM_11, 75);

    CrcLib::Update();
  }
  return 0;
};

int backwardpressure(int t) // moving robot forwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 75);
    CrcLib::SetPwmOutput(CRC_PWM_9, -75);
    CrcLib::SetPwmOutput(CRC_PWM_10, 75);
    CrcLib::SetPwmOutput(CRC_PWM_11, -75);

    CrcLib::SetPwmOutput(CRC_PWM_6, -25);
    CrcLib::SetPwmOutput(CRC_PWM_7, 25);

    CrcLib::Update();
  }
  return 0;
};

int right(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 50);
    CrcLib::SetPwmOutput(CRC_PWM_9, 50);
    CrcLib::SetPwmOutput(CRC_PWM_10, 50);
    CrcLib::SetPwmOutput(CRC_PWM_11, 50);

    CrcLib::Update();
  }
  return 0;
};

int rightpressure(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 50);
    CrcLib::SetPwmOutput(CRC_PWM_9, 50);
    CrcLib::SetPwmOutput(CRC_PWM_10, 50);
    CrcLib::SetPwmOutput(CRC_PWM_11, 50);

    CrcLib::SetPwmOutput(CRC_PWM_6, -25);
    CrcLib::SetPwmOutput(CRC_PWM_7, 25);

    CrcLib::Update();
  }
  return 0;
};
int left(int t) // turning towards the left
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, -50);
    CrcLib::SetPwmOutput(CRC_PWM_9, -50);
    CrcLib::SetPwmOutput(CRC_PWM_10, -50);
    CrcLib::SetPwmOutput(CRC_PWM_11, -50);

    CrcLib::Update();
  }
  return 0;
};


int leftpressure(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 50);
    CrcLib::SetPwmOutput(CRC_PWM_9, 50);
    CrcLib::SetPwmOutput(CRC_PWM_10, 50);
    CrcLib::SetPwmOutput(CRC_PWM_11, 50);

    CrcLib::SetPwmOutput(CRC_PWM_6, -25);
    CrcLib::SetPwmOutput(CRC_PWM_7, 25);

    CrcLib::Update();
  }
  return 0;
};

int up(int t) // for vertical motor lifting the C.U.M.
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_5, 50);

    CrcLib::Update();
  }
  return 0;
};

int uppressure(int t) // for vertical motor lifting the C.U.M.
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_5, 50);

//    too keep presure on the object
    CrcLib::SetPwmOutput(CRC_PWM_6, -25);
    CrcLib::SetPwmOutput(CRC_PWM_7, 25);

    CrcLib::Update();
  }
  return 0;
};

int down(int t) // for vertical motor lowering the C.U.M
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_5, -50);

    CrcLib::Update();
  }
  return 0;
};

int downpressure(int t) // for vertical motor lifting the C.U.M.
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_5, 50);

//    too keep presure on the object
    CrcLib::SetPwmOutput(CRC_PWM_6, -25);
    CrcLib::SetPwmOutput(CRC_PWM_7, 25);

    CrcLib::Update();
  }
  return 0;
};

int grab(int t) // for horizontal motors to grab object
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_6, -50);
    CrcLib::SetPwmOutput(CRC_PWM_7, 50);

    CrcLib::Update();
  }
  return 0;
};

int drop(int t) // for horizontal motors to grab object
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_6, 50);
    CrcLib::SetPwmOutput(CRC_PWM_7, -50);

    CrcLib::Update();
  }
  return 0;
};

int done(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 0);
    CrcLib::SetPwmOutput(CRC_PWM_9, 0);
    CrcLib::SetPwmOutput(CRC_PWM_10, 0);
    CrcLib::SetPwmOutput(CRC_PWM_11, 0);

    CrcLib::SetPwmOutput(CRC_PWM_6, 0);
    CrcLib::SetPwmOutput(CRC_PWM_7, 0);

    CrcLib::SetPwmOutput(CRC_PWM_5, 0);

    CrcLib::Update();
  }
  return 0;
};
