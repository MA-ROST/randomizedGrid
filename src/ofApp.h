#pragma once

#include "ofMain.h"
#include "point.h"
#include "gridIndex.h"

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		const string TITLE = "Randomized Grid";
		const int GRID_SIZE{ 8 };
		const int SHAPE_SIZE {60};
		const int SHAPE_PADDING{8};
		const int SHAPE_GRID{ SHAPE_SIZE + SHAPE_PADDING };
		
		const int SCREEN_SIZE = SHAPE_PADDING + (SHAPE_GRID * GRID_SIZE);


		

		//6*8=48
		
};
