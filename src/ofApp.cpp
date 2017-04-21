#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    BackgroundImage.load("haikei.jpg");
    
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    
    ofToggleFullscreen();
    
    boxSize = 10;
    for(int i=0; i<NUM; i++){
        mBox[i].setPosition(ofRandom(-500, 500), ofRandom(-500, 500), ofRandom(-500, 500));
        mBox[i].set(boxSize);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    BackgroundImage.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    vec.set(mouseX-p.x, mouseY-p.y);
    
   
    cam.begin();
    
    ofPushMatrix();
    
    ofRotateY(ofGetFrameNum());
    
    int alpha = abs(vec.x) + abs(vec.y);
    ofSetColor(ofColor::fromHsb(ofGetFrameNum()%255, 255, 255), 255 - alpha);
    
    for(int i=0; i<NUM; i++){
        mBox[i].draw();
    }
    
    ofPopMatrix();
    
    ofSetColor(255, 255, 255, (ofGetFrameNum()*6)%120);
    box.setPosition(0, 0, 0);
    box.set(150);
    box.draw();
    
    //ofSetColor(255, 255, 255, 255);
    box.drawWireframe();
    
    cam.end();
    
    p.x = mouseX;
    p.y = mouseY;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
