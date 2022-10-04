#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(ofColor::white);
    ofSetWindowTitle(TITLE); // Set the window title.
    ofSetWindowShape(SCREEN_SIZE, SCREEN_SIZE);
    ofSetCircleResolution(80);

    ofNoFill();
    
    /*createCanvas(720, 360);
    background(0);
    noStroke();

    let GRID_SIZE = 35;

    for (let x = GRID_SIZE; x <= width - GRID_SIZE; x += GRID_SIZE) {
        for (let y = GRID_SIZE; y <= height - GRID_SIZE; y += GRID_SIZE) {
            noStroke();
            fill(255);
            rect(x - 1, y - 1, 3, 3);
            stroke(255, 50);
            line(x, y, width / 2, height / 2);
        }
    }*/

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(ofColor::black);
    ofSetLineWidth(4);
    for ( int x = 0; x < GRID_SIZE; ++x ) {
        for ( int y = 0; y < GRID_SIZE; ++y ) {
            ofDrawRectangle(SHAPE_PADDING + SHAPE_GRID * x, 
                            SHAPE_PADDING + SHAPE_GRID * y, 
                                SHAPE_SIZE, SHAPE_SIZE);

            ofDrawCircle((SHAPE_PADDING*4.75) + SHAPE_GRID * x,
                (SHAPE_PADDING * 4.75) + SHAPE_GRID * y,
                            SHAPE_SIZE/3);
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
    

    int randCircle = ofRandom(1, 5);
    cout << randCircle;
    //int ranRow = 0;               // Variables for random locations
    //int ranCol = 0;
    //int bombCount = 0;
    //for (int i = 0; i < numberOfBombs; i++) {   // Traverse all bombs
    //    do {                                    // Loop while spot occupied
    //        ranRow = numbers.random(0, rows - 1);       // Random row
    //        ranCol = numbers.random(0, columns - 1);    // and column
    //    } while (grid[ranRow][ranCol].getBomb());
    //    grid[ranRow][ranCol].setBomb();
    //    bombCount++;
    //}


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
