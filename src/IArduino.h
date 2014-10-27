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
    void testLedOff();
    void testLed1();
    void testLedOff1();
    ofArduino ard;
    void keyPressed(int key);
    bool		bSetupArduino;
    ofSerial serial;
    
private:
    
    //void setupArduino(const int & version);
    void digitalPinChanged(const int & pinNum);
    void analogPinChanged(const int & pinNum);
	//void updateArduino();
    

};
#endif /* defined(__NightGames__IArduino__) */
