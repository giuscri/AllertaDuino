// PIR.cpp

#include "PIR.h"

// Constructor: store the inputPin, hence
// init of the motionDetected flag ...
PIR::PIR(int inputPin)
{
    this->inputPin = inputPin;
    pinMode(this->inputPin, INPUT);

    /*
    // Maybe we need ~1sec for the sensor
    // to give useful msg's ...
    delay(1500);
    */
    
    this->motionDetectedFlag = false;
}

// This function makes the PIR listen
// hence update the motionDetectedFlag ...
void PIR::detectMotion()
{
    if (digitalRead(this->inputPin) == LOW)
        this->motionDetectedFlag = false;
    else
        this->motionDetectedFlag = true;
}


// This function return the
// motionDetected flag ...
bool PIR::motionDetected()
{
    bool out = this->motionDetectedFlag;
    this->motionDetectedFlag = false;
    return out;
}
