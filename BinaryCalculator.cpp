// BinaryCalculator.cpp

#include "BinaryCalculator.h"

BinaryCalculator::BinaryCalculator(int* pins, int pins_length)
{

    this->pins = pins;
    this->pins_length = pins_length;

    for (int i = 0; i < pins_length; i++) {
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
    for (i = 1; i < pins_length && pins[i] != false; i++)
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
    for (; --i >= 0;) {
        digitalWrite(pins[i], LOW);
	pins[i] = false;
    }

    return;
    
     
}

/*
// Testing procedure ...
void BinaryCalculator::print() {
    for (int i = 0; i < pins_length; i++)
        Serial.println(pins[i]);
    Serial.println("====");
}
*/
