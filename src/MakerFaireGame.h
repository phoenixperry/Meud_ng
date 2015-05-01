//
//  MakerFaireGame.h
//  NightGames
//
//  Created by Adelle on 21/04/15.
//
//

#ifndef __NightGames__MakerFaireGame__
#define __NightGames__MakerFaireGame__

#include <iostream>
#include "ofmain.h"

class MakerFaireGame: public ofBaseApp{
public:
    void setup();
    void draw();
    void update();
    void drag(int x,int y);
    
    int xpos;
    int ypos;
    int myCircleX;
    int myCircleY;
    int myCircleRadius;
    int colorVal;
    
};

#endif /* defined(__NightGames__MakerFaireGame__) */
