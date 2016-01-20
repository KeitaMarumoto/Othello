#include "GuiOut.h"

GuiOut::GuiOut(Vec2f outer_pos,Vec2f outer_size) 
{
	pos = Vec2f(outer_pos.x() + outer_size.x(), 
				outer_pos.y());

	size = Vec2f(Window::WIDTH-outer_size.y(),
				 outer_size.y());
	prev_pos = outer_pos;
	prev_size = outer_size;
}

GuiOut::~GuiOut()
{
	
}

void GuiOut::Update()
{
	
}

void GuiOut::Draw()
{
	drawFillBox(pos.x(), pos.y(),
				size.x(), size.y(),
				Color::blue);
	//cout << "pos(" << pos.x() << "," << pos.y() << ")" << endl;
	//cout << "size(" << size.x() << "," << size.y() << ")" << endl;
}