//
//  SceneTwo.h
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#ifndef __NightGames__SceneTwo__
#define __NightGames__SceneTwo__

#include <stdio.h>

#include "Scene.h"
class SceneTwo:public Scene{
public:
    void setup();
    void draw();
    void update();
    void drag(int x, int y);
    SceneTwo();
    ~SceneTwo(); 
};

#endif /* defined(__NightGames__SceneTwo__) */
