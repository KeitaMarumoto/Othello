#pragma once
#include "../../lib/framework.hpp"
#include "../../Singleton.h"

class GuiOut {
private:
	Vec2f pos;
	Vec2f size;

public:
	GuiOut(Vec2f, Vec2f);
	~GuiOut();
	void Update();
	void Draw();
};