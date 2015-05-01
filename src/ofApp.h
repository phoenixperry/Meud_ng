#pragma once

#include "ofMain.h"
#include "Scene.h"
#include "SceneOne.h"
#include "SceneTwo.h"
#include "SceneThree.h"
#include "SceneFour.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        //SceneOne *currentScene;
        //SceneTwo *currentScene;
        //SceneThree *currentScene;
        SceneFour *currentScene;
    
    
    
};
