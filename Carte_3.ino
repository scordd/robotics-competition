#include <CrcLib.h>
using namespace Crc;

#define PULLY CRC_PWM_5
#define SERVO CRC_PWM_6
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

  // scripting begins here
  // 2800 pour 2 peids
  // 2450 pour 90 degrée
  // ADD DONETIME AFTER EVERY GRAB OR DROP

  

  // first sequence for placing triangle
  
   grab(500);
    donetime(2500);
  forward(2500);
    donetime(500);
  reducedForward(1000);
    donetime(2500);
  drop(5000);
    donetime(2500);
  backward(2800);
    donetime(5000);

 // second sequence to place next triangle
 
 right(3400);
  donetime(2500);
 forward(2400);
   donetime(2500);
 grab(500);
   donetime(5000);
 backward(2500);
   donetime(2300);
 left(3450);
   donetime(2500);
  forward(2000);
    donetime(1500);
  reducedForward(10000);
    donetime(2500);
  drop(5000);
    donetime(2500);
  backward(3600);
    donetime(5000);
 

  // tennis ball sequence   (to code AFTER 1ST AND 2ND SEQUENCES)
  
    donetime(2500);
  right(1600);
    donetime(2500);
  forward(4100);
    donetime(2500);
  reducedForward(16000);
    donetime(1000);
    done();
  grab(5000);
    donetime(2500);
  up(1000);
    donetime(2500);
  forward(1300);
    donetime(2500);
  drop(5000);

 done();

  // scripting ends here

  CrcLib::Update();
  
}

//  forward and back are for mouvement
// left and right are for rotation

// x = Xmeters or centimeters
// x = 90 degrees


void loop() {
 
  CrcLib::Update();
};

int reducedForward(int t) // moving robot forwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, 10);
    CrcLib::SetPwmOutput(BR, 10);
    CrcLib::SetPwmOutput(FL, -10);
    CrcLib::SetPwmOutput(BL, -10);
    
    CrcLib::Update();
  };
  donetime(1);
  return 0;
};

int reducedDown(int t) // for vertical motor lowering the C.U.M
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(PULLY, 5);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int reducedBackward(int t) // moving robot backwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, -10);
    CrcLib::SetPwmOutput(BR, -10);
    CrcLib::SetPwmOutput(FL, 10);
    CrcLib::SetPwmOutput(BL, 10);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int reducedRight(int t) // turning towards the right
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, -35);
    CrcLib::SetPwmOutput(BR, -35);
    CrcLib::SetPwmOutput(FL, -35);
    CrcLib::SetPwmOutput(BL, -35);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};

int reducedLeft(int t) // turning towards the left
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, 35);
    CrcLib::SetPwmOutput(BR, 35);
    CrcLib::SetPwmOutput(FL, 35);
    CrcLib::SetPwmOutput(BL, 35);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};














int forward(int t) // moving robot forwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, 50);
    CrcLib::SetPwmOutput(BR, 50);
    CrcLib::SetPwmOutput(FL, -50);
    CrcLib::SetPwmOutput(BL, -50);
    
    CrcLib::Update();
  };
  donetime(1);
  return 0;
};


int backward(int t) // moving robot backwards
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(FR, -50);
    CrcLib::SetPwmOutput(BR, -50);
    CrcLib::SetPwmOutput(FL, 50);
    CrcLib::SetPwmOutput(BL, 50);

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

    CrcLib::SetPwmOutput(PULLY, -100);

    CrcLib::Update();
  };
  donetime(1);
  return 0;
};



int down(int t) // for vertical motor lowering the C.U.M
{
  for (int i = 0; i < t; i++) {

    CrcLib::SetPwmOutput(PULLY, 50);

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

    CrcLib::SetPwmOutput(SERVO, -50);

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
