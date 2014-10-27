//
//  SceneThree.h
//  NightGames
//
//  Created by Adelle on 26/10/14.
//
//

#ifndef __NightGames__SceneThree__
#define __NightGames__SceneThree__

#include <iostream>

#include <stdio.h>
#include "ofmain.h"
#include "Scene.h"


class SceneThree:public Scene{
public:
    void setup();
    void draw();
    void update();
    void drag(int x, int y);
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    IOSC *osc;
    IArduino *device;
    
    int xpos;
    int ypos;
    int myCircleX;
    int myCircleY;
    int myCircleRadius;
    int colorVal;
    
    
    SceneThree();
    ~SceneThree();
};


#endif /* defined(__NightGames__SceneThree__) */
