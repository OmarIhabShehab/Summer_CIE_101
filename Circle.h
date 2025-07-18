#pragma once
#include "Shapes/shape.h"
class Draw_Circle : public shape {
private :
	Point Radius ;
	Point center_of_P;
	Point C;
	Point l;
	int Distance;
	int center;
	GfxInfo shapeGfx;

public: 
	Draw_Circle(Point k , Point R  ,GfxInfo shapeGfxInfo);
};