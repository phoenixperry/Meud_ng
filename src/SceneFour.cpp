//
//  SceneFour.cpp
//  NightGames
//
//  Created by Adelle on 1/11/14.
//
//

#include "SceneFour.h"
using namespace std;

SceneFour::SceneFour():Scene(){
        //Constructor
        osc = new IOSC();
        device = new IArduino();
     
    }

void SceneFour::setup(){
    //osc->setup("192.168.178.15", 8000);
    device->setup("/dev/tty.usbmodem1421");
    game_state = "start";
    score = 0;
    player_image.loadImage("Player_1.png");
    player_1.setup(&player_image);
    enemy_bullet_image.loadImage("enemy_bullet.png");
    player_bullet_image.loadImage("player_bullet.png");
    
    }

void SceneFour::update(){
    device->update();
    player_1.update();
        //osc->update();
    device-> testLed();
    update_bullets();
    
}

void SceneFour::keyPressed(int key){
  
        if (key == OF_KEY_LEFT) {
            player_1.is_left_pressed = true;
            cout << "pressed" << endl;
        }
        if (key == OF_KEY_RIGHT) {
            player_1.is_right_pressed = true;
        }
        if (key == OF_KEY_UP) {
            player_1.is_up_pressed = true;
        }
        if (key == OF_KEY_DOWN) {
            player_1.is_down_pressed = true;
        }
    
    }

void SceneFour::keyReleased(int key){
 
    
        if (key == OF_KEY_LEFT) {
            player_1.is_left_pressed = false;
        }
        if (key == OF_KEY_RIGHT) {
            player_1.is_right_pressed = false;
        }
        if (key == OF_KEY_UP) {
            player_1.is_up_pressed = false;
        }
        if (key == OF_KEY_DOWN) {
            player_1.is_down_pressed = false;
        }
    
    
}


void SceneFour::draw(){
    device-> testLed();
    player_1.draw();
    for (int i = 0; i < bullets.size(); i++){
        bullets[i].draw();
    }
    
   }

void SceneFour::update_bullets() {
    for (int i = 0; i < bullets.size(); i++) {
        bullets[i].update();
        if (bullets[i].pos.y - bullets[i].width/2 < 0 || bullets[i].pos.y + bullets[i].width/2 > ofGetHeight()) {
            bullets.erase(bullets.begin()+i);
        }
    }
}

void SceneFour::drag(int x, int y){
  
}


    // check
    
    SceneFour::~SceneFour(){}
        
