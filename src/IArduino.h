//
//  IArduino.h
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#ifndef __NightGames__IArduino__
#define __NightGames__IArduino__

#include <stdio.h>
#include "ofMain.h" 
class IArduino {

public:
    void setup(string port);
    void setupArd(const int &version);
    void update();
    void testLed(); 
    ofArduino ard;

};
#endif /* defined(__NightGames__IArduino__) */
