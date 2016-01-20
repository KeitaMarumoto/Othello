#include "GuiIn.h"

//**************CircleGuiInクラス*************************************************

CircleGuiIn::CircleGuiIn(const Vec2f p, const Vec2f r)
{
	pos = p;
	radius = r;
	is_active = true;
}

void CircleGuiIn::Update()
{

}

void CircleGuiIn::Draw()
{
	const int division = 50;
	drawFillCircle(pos.x(), pos.y(),
				   radius.x(), radius.y(),
				   division,
				   Color::cyan);
}

void CircleGuiIn::Collision()
{

}

void CircleGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************



//****************BoxGuiInクラス**************************************************

BoxGuiIn::BoxGuiIn(const Vec2f p, const Vec2f s)
{
	pos = p;
	size = s;
	is_active = true;
}

void BoxGuiIn::Update()
{

}

void BoxGuiIn::Draw()
{
	//drawFillBox()
}

void BoxGuiIn::Collision()
{

}

void BoxGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************