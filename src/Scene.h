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
    virtual void setup()=0;
    virtual void draw()=0;
    virtual void update()=0;
    
};

#endif /* defined(__NightGames__Scene__) */