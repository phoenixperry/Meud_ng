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

    
    }
void IOSC::update()
{
        while (receiver.hasWaitingMessages()) {
            
            //get the next message
            ofxOscMessage m;
            receiver.getNextMessage(&m);
            //parse the message
            
            ofxOscMessage sendBack;
//ADELLE - this is just code from my book example. It shows how to deal with an incoming message with a specific tag. You can think like tags in OSC kinda like URLS. You can just test if they are coming in and if they are do stuff. I can explain if you need me to - I left this example here for yo.
//            if(m.getAddress() == "/game/max_enemy_amplitude")
//            {
//                max_enemy_amplitude = m.getArgAsFloat(0);
//                
//                //these values send back to OSC to display the current settings for visual feedback
//                sendBack.addFloatArg(max_enemy_amplitude);
//                sendBack.setAddress("/updatedVals/max_enemy_amplitude");
//                sender.sendMessage(sendBack);
//                
//                cout << max_enemy_amplitude << endl;
//                }
//        }
        }
}
