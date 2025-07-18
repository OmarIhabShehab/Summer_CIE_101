#include "Regular_polygon.h"

#include <corecrt_math_defines.h>
#include <cmath>
using namespace std;
Regular_polygon::Regular_polygon(Point C ,Point P, int x,GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	Center = C;
	Pointes = P;
	shapeGfx = shapeGfxInfo;
	sides = x;
	radius = distance(C,P);

	for (int i = 0; i < x; i++) {
		double angle = 2 * 3.14159 * i / sides;
		xPoints[i] = Center.x + (radius * cos(angle));
		yPoints[i] = Center.y +(radius * sin(angle));
	}

}