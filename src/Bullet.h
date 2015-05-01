//
//  Bullet.h
//  NightGames
//
//  Created by Adelle on 24/04/15.
//
//

#ifndef __NightGames__Bullet__
#define __NightGames__Bullet__

#include <iostream>
#include "ofMain.h"

class Bullet {
public:
    ofPoint pos;
    float speed;
    float width;
    bool from_player;
    
    void setup(bool f_p, ofPoint p, float s, ofImage * bullet_image);
    void update();
    void draw();
    
    ofImage * img;
};

#endif /* defined(__NightGames__Bullet__) */
