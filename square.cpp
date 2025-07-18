#include "square.h"

Square::Square(Point P1, Point P2, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
	l = P2.x - P1.x;
	w = P2.y - P1.y;
	if (l != w) {
		if (l < w) {
			P2.y=P1.y+l;

		};

		if (w < l) {
			P2.x = P1.x + w;
		};

	};
}

Square::~Square()
{
}

void Square::Draw(GUI* pUI) const
{
	//Call Output::DrawRect to draw a square on the screen	
	pUI->DrawRect(Corner1, Corner2, ShpGfxInfo);
}
