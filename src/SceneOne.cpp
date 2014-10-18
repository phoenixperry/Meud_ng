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
}
SceneOne::~SceneOne()
{
    //deallocate anything that needs it
}

