//
//  IArduino.cpp
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#include "IArduino.h"
#include <iostream>
using namespace std;
#define NUM_BYTES 2;

// yo Adelle - send in ya port lady! :)
void IArduino::setup(string port){
    serial.enumerateDevices();
    ard.connect("/dev/tty.usbmodem1421", 57600);
    ofAddListener(ard.EInitialized, this, &IArduino::setupArd);
    bSetupArduino	= false; // flag so we setup arduino when its ready, you don't need to touch this
    
}

void IArduino::update(){
  
    // cout << ard.isArduinoReady() << " is the state of things" << endl;
   
}



void IArduino::setupArd(const int &version)
{
    // remove listener because we don't need it anymore
    ofRemoveListener(ard.EInitialized, this, &IArduino::setupArd);
    
    // it is now safe to send commands to the Arduino
    bSetupArduino = true;
   
    
    //this is the output on the arduino
    // set pin D9 and D10 as digital output

    ard.sendDigitalPinMode(9, ARD_OUTPUT);
    ard.sendDigitalPinMode(10, ARD_OUTPUT);
    
    //like say you'd want to send in data instead, do this.
    ard.sendDigitalPinMode(3, ARD_INPUT);
    
    // set pin A0 to analog input
    ard.sendAnalogPinReporting(0, ARD_ANALOG);
    
    // if want to set pin D11 as PWM (analog output)
	ard.sendDigitalPinMode(11, ARD_PWM);
    
    // Listen for changes on the digital and analog pins
        //ofAddListener(ard.EDigitalPinChanged, this, &IArduino::digitalPinChanged);
        //ofAddListener(ard.EAnalogPinChanged, this, &IArduino::analogPinChanged);
    
    
    cout << "up" <<endl;
   
}

//--------------------------------------------------------------
void IArduino::digitalPinChanged(const int & pinNum) {
    // do something with the digital input. here we're simply going to print the pin number and
    // value to the screen each time it changes
    cout << "digital pin: " + ofToString(3) + " = " + ofToString(ard.getDigital(3)) << endl;
}
void IArduino::analogPinChanged(const int & pinNum) {
    // do something with the digital input. here we're simply going to print the pin number and
    // value to the screen each time it changes
    cout << "analog pin: " + ofToString(1) + " = " + ofToString(ard.getAnalog(1)) << endl;
                  }


void IArduino::testLed(){
    //be sending out power yo to an led on port 9
    

    ard.sendDigital(9, ARD_HIGH);
    //ard.sendDigital(10, ARD_HIGH);
    //ard.sendDigital(11, ARD_HIGH);

    //and to receive data
    //auto num = ard.getDigital(9);
    //cout << num << endl;
    ard.sendAnalogPinReporting(1, ARD_INPUT);
    ard.getAnalog(1);
    float sensorValue = ard.getAnalog(0);
    cout << sensorValue << endl;
    cout << "analog pin: " + ofToString(0) + " = " + ofToString(ard.getAnalog(0)) << endl;
    cout << "digital pin: " + ofToString(9) + " = " + ofToString(ard.getDigital(9)) << endl;
    
}

void IArduino::testLedOff(){
    //be sending out power yo to an led on port 9

    ard.sendDigital(9, ARD_LOW);
    //ard.sendDigital(10, ARD_LOW);
    // fade the led connected to pin D11, can't get this to work yet
    ard.sendPwm(11, (int)(128 + 128 * sin(ofGetElapsedTimef())));   // pwm...
	
}


void IArduino::testLed1(){
    //be sending out power yo to an led on port 9
    ard.sendDigital(10, ARD_HIGH);
    
}

void IArduino::testLedOff1(){
    ard.sendDigital(10, ARD_LOW);
 
    
}