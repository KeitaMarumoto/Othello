#pragma once

#include "../../lib/framework.hpp"
#include "../../Singleton.h"

class Result{
private:

public:
	Result();
	void Update();
	void Draw();
	SceneName Shift();
};