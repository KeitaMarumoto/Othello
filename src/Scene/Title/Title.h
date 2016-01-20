#pragma once

#include "../../lib/framework.hpp"
#include "../../Singleton.h"
#include "../../GUI/IN/GuiIn.h"

class Title{
private:
	
public:
	Title();
	~Title();
	void Update();
	void Draw();
	SceneName Shift();
};