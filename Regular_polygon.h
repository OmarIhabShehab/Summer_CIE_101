#pragma once
#include "Shapes/shape.h"
//#include <corecrt_math_defines.h>
class Regular_polygon :	public shape
{
private:
	Point Center;
	Point Pointes ;
	int radius;
	int sides;
	int* xPoints;
	int* yPoints;
	
	GfxInfo shapeGfx;

public:
	Regular_polygon(Point centerx, Point y, int x, GfxInfo shapeGfxInfo);
};

