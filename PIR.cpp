// PIR.cpp

#include "PIR.h"

// Constructor: store the inputPin, hence
// init of the motionDetected flag ...
PIR::PIR(int inputPin)
{
    this->inputPin = inputPin;
    pinMode(this->inputPin, INPUT);

    // Maybe we need ~1sec for the sensor
    // to give useful msg's ...
    //wait(30);
    
    motionDetectedFlag = false;
}

// This function makes the PIR listen
// hence update the motionDetectedFlag ...
void PIR::detectMotion()
{
    if (digitalRead(inputPin) == LOW)
        motionDetectedFlag = true;
    else
        motionDetectedFlag = false;

}


// This function return the
// motionDetected flag ...
bool PIR::motionDetected()
{
    bool out = motionDetectedFlag;
    motionDetectedFlag = false;
    return out;

    //return motionDetectedFlag;
}

void PIR::wait(int sec)
{
    delay(sec * 1000);
}
