//
//  SceneExample.cpp
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#include "SceneOne.h"
//ok I think this will init the partent scene 
SceneOne::SceneOne():Scene(){
//construtor
}
void SceneOne::setupScene(){
    
}
void SceneOne::updateScene(){}
void SceneOne::drawScene(){
    ofSetColor(255, 0, 0);
    ofCircle(100, 100, 100);
}

SceneOne::~SceneOne()
{
    //deallocate anything that needs it
}

