// CountingViaLed.ino

#include "BinaryCalculator.h"

// Def+init of a instance of a
// BinaryCalculator-obj that shows
// results at led's wired at pins
// 3, 4, 5, 6 and 7 ...
int pins[] = {3, 4, 5, 6, 7};
BinaryCalculator b(pins, 5);

void setup() {
    // Nothing to setup
}

void loop() {

    b.incrementByOne();
    delay(2 * 1000);

}
