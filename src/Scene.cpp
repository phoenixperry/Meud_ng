//
//  Scene.cpp
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#include "Scene.h"
Scene::Scene(){
    osc = new IOSC();
    device = new IArduino();
}
void Scene::setup() {
    //note Adelle, you'll need to pass in your network here for real to get this to acutally work.
    osc->setup("123", 8000);
    device->setup("/dev/tty.usbmodem1421");

}
void Scene::update(){
    osc->update();
    device->update();
}
void Scene::draw(){
    device->testLed();
}

Scene::~Scene(){}