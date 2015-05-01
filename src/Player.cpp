//
//  Player.cpp
//  NightGames
//
//  Created by Adelle on 24/04/15.
//
//

#include "Player.h"

void Player:: setup(ofImage * _img){
    img = _img;
    width = img->width;
   
    pos.x = ofRandom(0, ofGetWidth());      // give some random positioning
    pos.y = ofRandom(0, ofGetHeight());
}

void Player:: update(){
    
}

void Player:: draw(){
  
    img->draw(pos.x - width/2, pos.y - width/2);
}