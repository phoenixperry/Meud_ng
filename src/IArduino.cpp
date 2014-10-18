//
//  IArduino.cpp
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#include "IArduino.h"

// yo Adelle - send in ya port lady! :)
void IArduino::setup(string port){
    ard.connect(port, 57600);
     ofAddListener(ard.EInitialized, this, &IArduino::setupArd);
}

void IArduino::update(){

    cout << ard.isArduinoReady() << " is the state of things";
}

void IArduino::setupArd(const int &version)
{
    ofRemoveListener(ard.EInitialized, this, &IArduino::setupArd);
    //this is the output on the arduino
    ard.sendDigitalPinMode(9, ARD_OUTPUT);
    cout << "up" <<endl; 
}

void IArduino::testLed(){
    ard.sendDigital(9, ARD_HIGH);
}