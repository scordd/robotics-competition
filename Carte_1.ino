#include <CrcLib.h>
using namespace Crc;

bool ButtonState = LOW;

void setup() {
  // put your setup code here, to run once:
  CrcLib::Initialize();
  Serial.begin(9600);

  Serial.print("The code execution time is ");
  Serial.print(CrcLib::GetDeltaTimeMillis());
  Serial.println(" ms.");

  Serial.println("The debug code has been run; robot is properly connected and functioning.");

  // button for starting the code
  CrcLib::SetDigitalPinMode(CRC_DIG_5, INPUT);

  // vertical motor (for high-torque control of the arm)
  CrcLib::InitializePwmOutput(CRC_PWM_5);
  // horizontal motor
  CrcLib::InitializePwmOutput(CRC_PWM_6);
  CrcLib::InitializePwmOutput(CRC_PWM_7);

  // set of 4 motors that will be used for moving the entire robot
  CrcLib::InitializePwmOutput(CRC_PWM_8);
  CrcLib::InitializePwmOutput(CRC_PWM_9);
  CrcLib::InitializePwmOutput(CRC_PWM_10);
  CrcLib::InitializePwmOutput(CRC_PWM_11);
  
  CrcLib::Update();
  
  // SCRIPTING HAPPENS HERE
  

  right(500);
  done();

  
  
  
  
  
  
  // SCRIPTING ENDS HERE
  
  
  CrcLib::Update();
}

//  forward and back are for mouvement
// left and right are for rotation

// x = Xmeters or centimeters
// x = 90 degrees


void loop() {
    CrcLib::Update();
}

// BOILERPLATE FUNCTIONS BELOW

int forward(int t) // moving robot forwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 75);
    CrcLib::SetPwmOutput(CRC_PWM_9, 75);
    CrcLib::SetPwmOutput(CRC_PWM_10, -75);
    CrcLib::SetPwmOutput(CRC_PWM_11, -75);
    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int backward(int t) // moving robot backwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, -75);
    CrcLib::SetPwmOutput(CRC_PWM_9, -75);
    CrcLib::SetPwmOutput(CRC_PWM_10, 75);
    CrcLib::SetPwmOutput(CRC_PWM_11, 75);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int right(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, -50);
    CrcLib::SetPwmOutput(CRC_PWM_9, -50);
    CrcLib::SetPwmOutput(CRC_PWM_10, -50);
    CrcLib::SetPwmOutput(CRC_PWM_11, -50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int left(int t) // turning towards the left
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 50);
    CrcLib::SetPwmOutput(CRC_PWM_9, 50);
    CrcLib::SetPwmOutput(CRC_PWM_10, 50);
    CrcLib::SetPwmOutput(CRC_PWM_11, 50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};




int up(int t) // for vertical motor lifting the C.U.M.
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_5, 50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};



int down(int t) // for vertical motor lowering the C.U.M
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_5, -50);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};



int grab(int t) // for horizontal motors to grab object
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_7, 75);

    CrcLib::Update();
  };
  return 0;
};

int drop(int t) // for horizontal motors to grab object
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_7, -75);

    CrcLib::Update();
  };
  return 0;
};

void done() // stops all code
{

    CrcLib::SetPwmOutput(CRC_PWM_8, 0);
    CrcLib::SetPwmOutput(CRC_PWM_9, 0);
    CrcLib::SetPwmOutput(CRC_PWM_10, 0);
    CrcLib::SetPwmOutput(CRC_PWM_11, 0);

    CrcLib::SetPwmOutput(CRC_PWM_6, 0);
    CrcLib::SetPwmOutput(CRC_PWM_7, 0);

    CrcLib::SetPwmOutput(CRC_PWM_5, 0);

    CrcLib::Update();
  

};


int donetime(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(CRC_PWM_8, 0);
    CrcLib::SetPwmOutput(CRC_PWM_9, 0);
    CrcLib::SetPwmOutput(CRC_PWM_10, 0);
    CrcLib::SetPwmOutput(CRC_PWM_11, 0);

    CrcLib::SetPwmOutput(CRC_PWM_5, 0);

    CrcLib::Update();
  }
  return 0;
};
