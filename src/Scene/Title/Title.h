#pragma once

#include "../../lib/framework.hpp"
#include "../../Singleton.h"

class Title{
private:

public:
	Title();
	void Update();
	void Draw();
	SceneName Shift();
};