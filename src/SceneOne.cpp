//
//  SceneExample.cpp
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#include "SceneOne.h"
//ok I think this will init the partent scene 
SceneOne::SceneOne()
{
//construtor
    osc = new IOSC();
    device = new IArduino();
    xpos = 0;
    ypos = 0; 
}
void SceneOne::setup() {
    //note Adelle, you'll need to pass in your network here for real to get this to acutally work.
    osc->setup("192.168.178.15", 8000);
    device->setup("/dev/tty.usbmodem1421");
    
}
void SceneOne::update(){
    osc->update();
    device->update();
}
void SceneOne::draw(){
    device->testLed();
    
    //any graphic implementation to this particular scene should stay locked within it
    ofBackground(0);
    ofSetColor(255, 255, 0);
    ofEllipse(xpos,ypos, 100, 100);
    ofDrawBitmapString("Move the circle horizontally and vertically to change the tone.\n", 10,50);
}

//use this function to send out x + y positions to ableton.
void SceneOne::drag(int x, int y)
{
    xpos = x;
    ypos = y;
    float xscaled = ofMap(x, 0,ofGetWidth(), 0 ,1);
    
    if(x < 0)
    {
        xscaled = 0;
    }
    if(x > ofGetWidth())
    {
        xscaled =1;
    }
    
    float yscaled = ofMap(y, 0,ofGetWidth(), 0 ,1);
    
    if(y < 0)
    {
        yscaled = 0;
    }
    if(y > ofGetHeight())
    {
        yscaled =1;
    }
    
    osc->sendOut(xscaled, yscaled);
}
SceneOne::~SceneOne()
{
    //deallocate anything that needs it
}

