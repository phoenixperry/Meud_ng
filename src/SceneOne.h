//
//  SceneExample.h
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#ifndef __NightGames__SceneOne__
#define __NightGames__SceneOne__

#include <stdio.h>
#include "Scene.h"

class SceneOne: public Scene
{
public:
    SceneOne();
    void setup();
    void update();
    void draw();
    ~SceneOne();
    // scene specific behavoir methods 
    void drag(int x, int y);
    //hardware needs for this specific scene
    IOSC *osc;
    IArduino *device;
    
    //graphic needs for this scene
    int xpos;
    int ypos;
};
#endif /* defined(__NightGames__SceneExample__) */
