#pragma once
#include "../lib/framework.hpp"
#include "../Singleton.h"

class Board
{
private:
	Vec2f outer_pos;
	Vec2f inner_pos;
	Vec2f outer_size;
	Vec2f inner_size;

public:
	Board();
	void Draw();
	Vec2f getOuterPos() { return outer_pos; }
	Vec2f getInnerPos() { return inner_pos; }
	Vec2f getOuterSize() { return outer_size; }
	Vec2f getInnerSize() { return inner_size; }
};