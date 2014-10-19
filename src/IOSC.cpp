//
//  IOSC.cpp
//  NightGames
//
//  Created by Phoenix Perry on 18/10/14.
//
//

#include "IOSC.h"

    //ok this is a to do later - tonight I'm just going to code
//to the implemention- adelle, I'll fix this later my dear. just use it for now by implementing an instance of this object -
    IOSC::IOSC(){
        //yo this construtor is blank b/c eventually I want this to be a different kind of structure but for today I'm gonna get some crap working :)
    }

// I
    void IOSC::setup(string addy, int port_)
    {
        ipAddress = addy;
        port = port_;
        sender.setup(ipAddress, port);
        //this is the ip address of your ipad/android and the port it should be
        //set to receive on
        
        receiver.setup(8001);
        //this is the port you're game will receive data on. For us this is the important one! Set your mobile device to send on this port.
        
        m.setAddress("/game");
        //this is OSC's URL like naming convention. You can use a root url address like structure and then everything under that address will be accessable by that message. It's very similar to a folder path on your hard drive. You can think of the game folder as your root directory and all the bits that are /game/someOtherName are inside of it.

        //test graphics
        ofSetCircleResolution(250);

    }
void IOSC::update()
{
        while (receiver.hasWaitingMessages()) {
            //this is for incoming OSC -- right now it's not used.
            //get the next message
            ofxOscMessage m;
            receiver.getNextMessage(&m);
            //parse the message
            //feel free to flesh this one out if we are using it and use it to pipe data back to
            //scene. 
        }
}
//this method is for sending out
void IOSC::sendOut(float x, float y)
{
    ofxOscMessage m2;
    m2.setAddress("/game/y");
    
    m2.addFloatArg(y);
    sender.sendMessage(m2);
    
    ofxOscMessage m;
    m.setAddress("/game/x");
    m.addFloatArg(x);
    sender.sendMessage(m);

}
//void IOSC::drag(int x, int y){
//    ofxOscMessage m;
//    float xscaled = ofMap(x, 0,ofGetWidth(), 0 ,1);
//    
//    if(x < 0)
//    {
//        xscaled = 0;
//    }
//    if(x > ofGetWidth())
//    {
//        xscaled =1;
//    }
//    
//    m.setAddress("/game/x");
//    
//    m.addFloatArg(xscaled);
//    sender.sendMessage(m);
//    
//    
//    ofxOscMessage m2;
//    
//    float yscaled = ofMap(y, 0,ofGetWidth(), 0 ,1);
//    
//    if(y < 0)
//    {
//        yscaled = 0;
//    }
//    if(y > ofGetHeight())
//    {
//        yscaled =1;
//    }
//    
//    m2.setAddress("/game/y");
//    
//    m2.addFloatArg(yscaled);
//    sender.sendMessage(m2);
//
//
//}