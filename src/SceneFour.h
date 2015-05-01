//
//  SceneFour.h
//  NightGames
//
//  Created by Adelle on 1/11/14.
//
//

#ifndef __NightGames__SceneFour__
#define __NightGames__SceneFour__

#include <iostream>

#include <stdio.h>
#include "ofmain.h"
#include "Scene.h"
#include "Player.h"
#include "Bullet.h"

class SceneFour:public Scene{
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
    
    string game_state;
    int score;
    Player player_1;
    ofImage player_image;
    
    vector<Bullet> bullets;
    void update_bullets();
    ofImage enemy_bullet_image;
    ofImage player_bullet_image;
    
    SceneFour();
    ~SceneFour();
};

#endif /* defined(__NightGames__SceneFour__) */
