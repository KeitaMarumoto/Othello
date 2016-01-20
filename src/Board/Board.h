#pragma once
#include "../lib/framework.hpp"
#include "../Singleton.h"

class Board
{
private:
	Vec2f outer_pos;                              // 外側の原点
	Vec2f inner_pos;                              // 内側の原点
	Vec2f outer_size;                             // 外側の原点
	Vec2f inner_size;                             // 内側の原点

public:
	Board();
	~Board();
	void Update();
	void Draw();
	Vec2f getOuterPos() { return outer_pos; }
	Vec2f getInnerPos() { return inner_pos; }
	Vec2f getOuterSize() { return outer_size; }
	Vec2f getInnerSize() { return inner_size; }
};