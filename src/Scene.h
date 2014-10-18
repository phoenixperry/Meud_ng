//
//  Scene.h
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#ifndef __NightGames__Scene__
#define __NightGames__Scene__

#include <stdio.h>
#include "ofMain.h"
#include "IOSC.h"
#include "IArduino.h" 
class Scene {
    
public:
    Scene();
    void setup();
    void draw();
    void update();
    ~Scene();
    
    IOSC *osc;
    IArduino *device;
    
};

#endif /* defined(__NightGames__Scene__) */