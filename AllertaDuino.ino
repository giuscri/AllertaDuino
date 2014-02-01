// AllertaDuino.ino

#include "PIR.h"
#include "BinaryCalculator.h"

// Def+init of a instance of a
// PIR-obj wired at Pin 2..
PIR p(2);

// Def+init of a instance of a
// BinaryCalculator-obj that shows
// results at led's wired at pins
// 3, 4, 5, 6 and 7 ...
int pins[5] = {3, 4, 5, 6, 7};
BinaryCalculator b(5, pins);

void setup() {
    Serial.begin(9600);
    //...
}

void loop() {

    for (; !p.motionDetected(); p.detectMotion());
    
    Serial.println("Motion dected!");
    
    b.incrementByOne();
    
    delay(2000);

}
