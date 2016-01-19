#pragma once
#include "../../lib/framework.hpp"
#include "../../Singleton.h"
#include "../../Board/Board.h"

class GuiOut {
private:
	Vec2f pos;
	Vec2f size;

public:
	GuiOut();
	~GuiOut();
	void Update();
	void Draw();
};