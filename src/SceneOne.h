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
    
    IOSC *osc;
    IArduino *device;
};
#endif /* defined(__NightGames__SceneExample__) */
