// BinaryCalculator.cpp

#include "BinaryCalculator.h"

BinaryCalculator::BinaryCalculator(int* pins)
{

    this->pins = pins;

    for (int i = 0; i < sizeof pins; i++) {
        pinMode(pins[i], OUTPUT);
        digitalWrite(pins[i], LOW);
        pins[i] = false;
    }
	
}

void BinaryCalculator::incrementByOne()
{

    int i;

    // It has to be fixed!

    for (i = 0; i < sizeof pins -1; i++)
        if (pins[i] != true) {
	    digitalWrite(pins[i], HIGH);
	    pins[i] = true;
	    return;
	}
	
    if (i == sizeof pins -1) {
        
	if (pins[i] != true) {
	    digitalWrite(pins[i], HIGH);
	    pins[i] = true;
	    return;
	} else {
	    for (; i >= 0; i--) {
	        digitalWrite(pins[i], LOW);
		pins[i] = false;
	    }
	}
	
    }
     
}
