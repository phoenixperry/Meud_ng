//
//  SceneTwo.cpp
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#include "SceneTwo.h"
#include <iostream>
using namespace std;

SceneTwo::SceneTwo():Scene(){
    //Constructor
    osc = new IOSC();
    device = new IArduino();
    xpos = 0;
    ypos = 0;
    
}
void SceneTwo::setup(){
    osc->setup("192.168.178.15", 8000);
    device->setup("/dev/tty.usbmodem1421");
};
void SceneTwo::update(){
    device->update();
    osc->update();
};

void SceneTwo::keyPressed(int key){
    ofSetColor(40, 255, 255);
    
    cout << "keyPressed is " << (char)key << endl;
    // if key == 119 or if key == 'w' is the same thing
    if(key == 119) {
        ofSetColor(200,200,100);
        device->testLed();
        
    }
}

void SceneTwo::keyReleased(int key){
        device->testLedOff();
        
}

void SceneTwo::draw(){
    //device->testLed();
   // ofSetColor(0, 255, 0);
     ofDrawBitmapString("Move the square across the screen, if it is on the right side of the screen -the light turns on\n", 10,50);
     ofDrawBitmapString("Press the letter w to turn the second LED on and off on\n", 10,100);
    ofRect(xpos, ypos, 100, 100);
};

void SceneTwo::drag(int x, int y){
    xpos = x;
    ypos = y;
    if(xpos > ofGetWidth()/2) {
        device->testLed1();
    } else {
        device->testLedOff1();
    }
    
    
}

//--------------------------------------------------------------
void SceneTwo::mouseMoved(int x, int y ){
    cout << "mousemoved " << x << "," << y << endl;
    //xpos = x;
    //ypos = y;
}

// check 

SceneTwo::~SceneTwo(){}