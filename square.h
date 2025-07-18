#pragma once

#include "Shapes/Shape.h"

class Square : public shape
{
private:
	Point Corner1;
	Point Corner2;
	int l;
	int w;

public:
	Square(Point, Point, GfxInfo shapeGfxInfo);
	virtual ~Square();
	virtual void Draw(GUI* pUI) const;
};
