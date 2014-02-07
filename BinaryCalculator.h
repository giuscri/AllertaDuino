// BinaryCalculator.h

#ifndef BinaryCalculator_H
#define BinaryCalculator_H

#include "Arduino.h"

class BinaryCalculator
{

    public:
        //...
        //void print();
        void incrementByOne();
        BinaryCalculator(int* pins, int pins_length);

    private:
        int* pins;
        int pins_length;

};

#endif
