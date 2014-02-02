// BinaryCalculator.h

#ifndef BinaryCalculator_H
#define BinaryCalculator_H

#include "Arduino.h"

class BinaryCalculator
{

    public:
        //...
        void incrementByOne();
        BinaryCalculator(int* pins);

    private:
        int* pins;

};

#endif
