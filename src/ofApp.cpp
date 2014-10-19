#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    currentScene = new SceneOne();
//    currentScene = &ofApp::scene2;
    currentScene->setup(); 
}

//--------------------------------------------------------------
void ofApp::update(){
    
    currentScene->update();
        
    cout<< currentScene->osc->port <<endl; //fuck I hate forgetting a language :( This deferences the object and the variable it's holding.
 
    currentScene->drag(mouseX, mouseY);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
        currentScene->draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
   // currentScene = &scene1;
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    currentScene->drag(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
