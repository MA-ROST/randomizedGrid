#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    pairs = GridIndex::randomXY();
    ofSetBackgroundColor(ofColor::white);
    ofSetWindowTitle(TITLE); // Set the window title
    ofSetWindowShape(SCREEN_SIZE, SCREEN_SIZE);
    ofSetCircleResolution(80);

    ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for ( int x = 0; x < GridIndex::GRID_SIZE; ++x ) {
        for ( int y = 0; y < GridIndex::GRID_SIZE; ++y ) {
            for ( auto pair : pairs ) {
                if (x == pair.first && y == pair.second) {
                    grid[x][y].drawShape(true,x, y);
                }
                else {
                    grid[x][y].drawShape(false, x, y);
                }
            }
        }
    }
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
    pairs.clear(); // Clear vector
    pairs = GridIndex::randomXY(); // Get a random amount of random pairs
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
