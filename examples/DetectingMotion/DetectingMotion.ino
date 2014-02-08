// DetectingMotion.ino

#include "PIR.h"

// Def+init of a instance of a
// PIR-obj wired at Pin 2..
PIR p(2);

void setup() {
    // Nothing to setup.
}

void loop() {
    
    for (; !p.motionDetected(); p.detectMotion());
    
    Serial.println("Motion detected!");
    
    delay(2 * 1000);
    
}
