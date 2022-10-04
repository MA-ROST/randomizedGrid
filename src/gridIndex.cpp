#include "gridIndex.h"
#include "ofGraphics.h"
#include "ofMath.h"


vector<pair<int, int>> GridIndex::randomXY ()
{
    int randCircle = ofRandom(1, 5);
    vector<pair<int, int>> pairs;
    
    
    for ( int i = 0; i < randCircle; ++i ) {
        int rRow = ofRandom(1, GRID_SIZE+1);
        int rCol = ofRandom(1, GRID_SIZE+1);
        pairs.emplace_back(rRow, rCol);
        cout << "("<< pairs[i].first << ", " << pairs[i].second << "),";
    }
    cout << "\n";

    return pairs;
}

void GridIndex::drawRectangle (const int& x, const int& y) const
{
    ofDrawRectangle (SHAPE_PADDING + SHAPE_GRID * x, 
                     SHAPE_PADDING + SHAPE_GRID * y,
                     SHAPE_SIZE, SHAPE_SIZE);
}

void GridIndex::drawCircle (const int& x, const int& y) const
{
    ofDrawCircle ((SHAPE_PADDING * 4.75) + SHAPE_GRID * x,
                  (SHAPE_PADDING * 4.75) + SHAPE_GRID * y, 
                SHAPE_SIZE / 3);
}

void GridIndex::drawShape (const bool isCircle, const int& x, const int& y) const
{
    ofSetColor(ofColor::black);
    ofSetLineWidth(4);

    if (isCircle) drawCircle(x, y);
    else          drawRectangle(x, y);
}

int GridIndex::calculateScreenSize ()
{
    return SHAPE_PADDING + (SHAPE_GRID * GRID_SIZE);
}
