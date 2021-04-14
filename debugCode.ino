#include <CrcLib.h>

using namespace Crc;

void setup() {
    CrcLib::Initialize();

    //Open the communication with the Serial monitor at a 2000000 baud rate
    Serial.begin(9600);
    
    /* 
    The rest of your setup code
    ...
     */
}
void loop() {
    CrcLib::Update();

    //Print on the Serial monitor the elaspsed time betwwen the last two calls of CrcLib::Update()
    Serial.print("The code execution time is ");
    Serial.print(CrcLib::GetDeltaTimeMillis());
    Serial.println(" ms.");
    
    /* 
    The rest of your looping code
    ...
    */
}
