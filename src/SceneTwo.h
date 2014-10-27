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
#include "ofmain.h"


#include "Scene.h"
class SceneTwo:public Scene{
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
    
    SceneTwo();
    ~SceneTwo(); 
};

#endif /* defined(__NightGames__SceneTwo__) */
