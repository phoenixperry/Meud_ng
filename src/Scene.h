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
    virtual void keyPressed(int key)=0;
//    virtual void keyReleased(int key);
//    virtual void mouseMoved(int x, int y );
//    virtual void mouseDragged(int x, int y, int button);
//    virtual void mousePressed(int x, int y, int button);
//    virtual void mouseReleased(int x, int y, int button);
//    virtual void windowResized(int w, int h);
    
};

#endif /* defined(__NightGames__Scene__) */