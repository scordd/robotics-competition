#include <CrcLib.h>
using namespace Crc;

#define PULLY CRC_PWM_5
#define SERVO CRC_PWM_7
#define BL CRC_PWM_11
#define BR CRC_PWM_9
#define FL CRC_PWM_10
#define FR CRC_PWM_8

void setup() {
  // put your setup code here, to run once:
  CrcLib::Initialize();
  Serial.begin(9600);

  Serial.print("The code execution time is ");
  Serial.print(CrcLib::GetDeltaTimeMillis());
  Serial.println(" ms.");

  Serial.println("The debug code has been run; robot is properly connected and functioning.");


  // horizontal motor
  CrcLib::InitializePwmOutput(SERVO);
  // vertical motor
  CrcLib::InitializePwmOutput(PULLY);

  // set of 4 motors that will be used for moving the entire robot
  CrcLib::InitializePwmOutput(FR);
  CrcLib::InitializePwmOutput(BR);
  CrcLib::InitializePwmOutput(FL);
  CrcLib::InitializePwmOutput(BL);
  
  CrcLib::Update();
  
  
};


//  forward and back are for mouvement
// left and right are for rotation

// x = Xmeters or centimeters
// x = 90 degrees


void loop() {
};






























// BOILERPLATE FUNCTIONS BELOW

int forward(int t) // moving robot forwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, 75);
    CrcLib::SetPwmOutput(BR, 75);
    CrcLib::SetPwmOutput(FL, -75);
    CrcLib::SetPwmOutput(BL, -75);
    
    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int backward(int t) // moving robot backwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, -75);
    CrcLib::SetPwmOutput(BR, -75);
    CrcLib::SetPwmOutput(FL, 75);
    CrcLib::SetPwmOutput(BL, 75);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int right(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, -50);
    CrcLib::SetPwmOutput(BR, -50);
    CrcLib::SetPwmOutput(FL, -50);
    CrcLib::SetPwmOutput(BL, -50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int left(int t) // turning towards the left
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, 50);
    CrcLib::SetPwmOutput(BR, 50);
    CrcLib::SetPwmOutput(FL, 50);
    CrcLib::SetPwmOutput(BL, 50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};




int up(int t) // for vertical motor lifting the C.U.M.
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(PULLY, 50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};



int down(int t) // for vertical motor lowering the C.U.M
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(PULLY, -50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};



int grab(int t) // for horizontal motors to grab object
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(SERVO, 75);

    CrcLib::Update();
  };
  return 0;
};

int drop(int t) // for horizontal motors to grab object
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(SERVO, -75);

    CrcLib::Update();
  };
  return 0;
};

void done() // stops all code
{

    CrcLib::SetPwmOutput(FR, 0);
    CrcLib::SetPwmOutput(BR, 0);
    CrcLib::SetPwmOutput(FL, 0);
    CrcLib::SetPwmOutput(BL, 0);

    CrcLib::SetPwmOutput(PULLY, 0);
    CrcLib::SetPwmOutput(SERVO, 0);

    CrcLib::Update();
  

};


int donetime(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, 0);
    CrcLib::SetPwmOutput(BR, 0);
    CrcLib::SetPwmOutput(FL, 0);
    CrcLib::SetPwmOutput(BL, 0);

    CrcLib::SetPwmOutput(PULLY, 0);

    CrcLib::Update();
  }
  return 0;
};
