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
    
    //all scenes that extend Scene should have these methods implemented. This will allow for us to just change what current scene we are using dynamiclly and there should be minimal fallout 
    virtual void setup()=0;
    virtual void draw()=0;
    virtual void update()=0;
    
    //for changes in mouseX and mouseY
    virtual void drag(int x, int y)=0;
};

#endif /* defined(__NightGames__Scene__) */