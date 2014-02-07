// BinaryCalculator.cpp

#include "BinaryCalculator.h"

BinaryCalculator::BinaryCalculator(int* pins)
{

    this->pins = pins;

    for (int i = 0; i < sizeof(pins) / sizeof(int); i++) {
        pinMode(pins[i], OUTPUT);
        digitalWrite(pins[i], LOW);
        pins[i] = false;
    }
	
}

void BinaryCalculator::incrementByOne()
{
 
    // If bit at pos #0 is off, flip
    // it on, then return ...
    if (pins[0] != true) {
        digitalWrite(pins[0], HIGH);
	pins[0] = true;
	return;
    }
    
    // Else, search for the first bit that's
    // off, then set i at that position ...
    int i;
    for (i = 1; i < sizeof(pins) / sizeof(int) && pins[i] != false; i++)
        ;
    
    // If the for-block above's been broken by
    // the occurrence of a bit that's free,
    // flip it on ...
    if (pins[i] != true) {
        digitalWrite(pins[i], HIGH);
	pins[i] = true;
    }
    
    /*
    // Else, the for-block above's been broken
    // by i to be beyond the last position available
    else {
        // Do nothing ...
    }
    */
    
    // Hence flip off every bit previous to i ...
    for (; i >= 0; i--) {
        digitalWrite(pins[i], LOW);
	pins[i] = false;
	return;
    }
    
     
}
