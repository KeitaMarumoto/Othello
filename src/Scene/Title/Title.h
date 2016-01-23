#pragma once

#include "../../lib/framework.hpp"
#include "../../Singleton.h"
#include "../../GUI/IN/GuiIn.h"

class Title{
private:
	Vec2f start_button_pos;
	Vec2f option_button_pos;
	Vec2f button_radius;
	std::vector<std::shared_ptr<GuiIn>>gui_in;

public:
	Title();
	~Title();
	void Update();
	void Draw();
	SceneName Shift();
};