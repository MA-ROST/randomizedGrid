#pragma once
#include <vector>
using namespace std;

class GridIndex {
	static constexpr int SHAPE_SIZE{ 60 };
	static constexpr int SHAPE_PADDING{ 8 };
	static constexpr int SHAPE_GRID{ SHAPE_SIZE + SHAPE_PADDING };
	

public:
	static constexpr int GRID_SIZE{ 8 };

	static vector<pair<int, int>> randomXY ();

	void drawRectangle(const int& x, const int& y) const;
	void drawCircle(const int& x, const int& y) const;
	void drawShape(const bool isCircle, const int& x, const int& y) const;

	static int calculateScreenSize();
};
