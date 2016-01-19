#pragma once
#include "../lib/framework.hpp"
#include "../Singleton.h"

class GameManager
{
private:

public:
	GameManager();
	~GameManager();
	void Update();
	void Draw();
};