#include "Board.h"


Board::Board()
{
	outer_pos = Vec2f(-Window::WIDTH / 2, -Window::HEIGHT / 2);

	inner_pos = Vec2f(outer_pos.x() + (static_cast<float>(BoardSize::SUB_IN_OUT) / 2),
					  outer_pos.y() + (static_cast<float>(BoardSize::SUB_IN_OUT) / 2));
	
	outer_size = Vec2f(static_cast<float>(BoardSize::WIDTH), 
					   static_cast<float>(BoardSize::HEIGHT));
	
	inner_size = Vec2f(outer_size.x() - static_cast<float>(BoardSize::SUB_IN_OUT), 
					   outer_size.y() - static_cast<float>(BoardSize::SUB_IN_OUT));
}

Board::~Board()
{
	// No nothing
}

void Board::Update() 
{
	
}


void Board::Draw()
{
	drawFillBox(outer_pos.x(), outer_pos.y(),
				outer_size.x(), outer_size.y(),
				Color::lime);

	drawFillBox(inner_pos.x(), inner_pos.y(),
				inner_size.x(), inner_size.y(),
				Color::magenta);
}
