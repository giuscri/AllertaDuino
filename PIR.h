// PIR.h

#ifndef PIR_H
#define PIR_H

#include "Arduino.h"

class PIR
{

    public:
        //...
	void detectMotion();
	bool motionDetected();
	PIR(int inputPin);
	
    private:
        int inputPin;
	bool motionDetectedFlag;

};

#endif
