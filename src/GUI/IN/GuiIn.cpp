#include "GuiIn.h"

//**************CircleGuiIn�N���X*************************************************

CircleGuiIn::CircleGuiIn(Vec2f p, Vec2f r)
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
	//drawFillCircle()
}

void CircleGuiIn::Collision()
{

}

void CircleGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************



//****************BoxGuiIn�N���X**************************************************

BoxGuiIn::BoxGuiIn(Vec2f p, Vec2f s)
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