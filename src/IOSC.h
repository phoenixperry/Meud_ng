//
//  IOSC.h
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#ifndef __NightGames__IOSC__
#define __NightGames__IOSC__

//if you need osc - use this class 

#include <stdio.h>
#include "ofMain.h"
#include "ofxOsc.h"
class IOSC{
    //mark it virtual make it equal to 0 to make it abstract
public:
    IOSC(); 
    void setup(string addy, int port_);
    void update();
    void draw();
    void sendOut(float x, float y);
    //I have no energey left to prove this one works but if you set up an event that
    //will trigger from ofApp when the mouse is dragging the circle, this will work.
    ofxOscSender sender;
    
    //you can set up a sender! We are going to use this to let us know what we our values are set to in our game as we change them, giving us the ability to reference them if they seem to be working and to save them into our game for later use.
    ofxOscReceiver receiver;
    //this is the magic! This is how your game gets incoming data
    ofxOscMessage m;
    //this is the osc message it gets.
    
    //get this from your network settings - it will always be annyong and change
    string ipAddress;
    //I like to use 8000 /8001 you'll need this to match in Osculator to get data to live for David
    
    int port;

    ~IOSC();
};
#endif /* defined(__NightGames__IOSC__) */
