//
//  Player.h
//  NightGames
//
//  Created by Adelle on 24/04/15.
//
//

#ifndef __NightGames__Player__
#define __NightGames__Player__

#include <iostream>
#include "ofMain.h"

class Player {
public:
    int myCircleRadius;
    ofPoint pos;
    float width, height, speed;
    int lives;
    
    bool is_left_pressed, is_right_pressed, is_down_pressed, is_up_pressed;
    
    void setup(ofImage * _img);
    void update();
    void draw();
    void shoot();
    
    void calculate_movement();
    
    bool check_can_shoot();
    
    ofImage * img;
    
    
};

#endif /* defined(__NightGames__Player__) */
