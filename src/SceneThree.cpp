//
//  SceneThree.cpp
//  NightGames
//
//  Created by Adelle on 26/10/14.
//
//

#include "SceneThree.h"

#include <iostream>
using namespace std;


SceneThree::SceneThree():Scene(){
    //Constructor
    osc = new IOSC();
    device = new IArduino();
    xpos = 0;
    ypos = 0;
    colorVal = 0;
    myCircleX = ofGetWidth()/2;
    myCircleY = ofGetHeight()/2;
    myCircleRadius = 100;
}
void SceneThree::setup(){
    osc->setup("192.168.178.15", 8000);
    device->setup("/dev/tty.usbmodem1421");
};
void SceneThree::update(){
    device->update();
    osc->update();
};

void SceneThree::keyPressed(int key){
    ofSetColor(40, 255, 255);
    
    cout << "keyPressed is " << (char)key << endl;
    // if key == 119 or if key == 'w' is the same thing
    if(key == 119) {
        ofSetColor(200,200,100);
        device->testLed();
    }
}

void SceneThree::keyReleased(int key){
    device->testLedOff();
}

void SceneThree::draw(){
    //device->testLed();
    ofSetColor(0, 255, colorVal);
    ofCircle(myCircleX, myCircleY, myCircleRadius);
    ofSetColor(255,0,colorVal);
    ofCircle(xpos, ypos, 20);
    ofDrawBitmapString("By keeping the cursor in the circle, the circle will get bigger and the light will stay on on\n", 10,50);
    
};

void SceneThree::drag(int x, int y){
    xpos = x;
    ypos = y;
    float dist = ofDist(myCircleX, myCircleY, x, y);
    if(dist <= myCircleRadius) {
        colorVal = 255;
        myCircleRadius+=1;
        device-> testLed();
    } else {
        colorVal = 0;
        device->testLedOff();
    }

}

//--------------------------------------------------------------
void SceneThree::mouseMoved(int x, int y ){
    cout << "mousemoved " << x << "," << y << endl;
    //xpos = x;
    //ypos = y;
}

// check

SceneThree::~SceneThree(){}