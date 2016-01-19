#pragma once

#include "../../lib/framework.hpp"
#include "../../Singleton.h"
#include "../../Board/Board.h"



class GameMain{
private:
	std::shared_ptr<Board>board;

public:
	GameMain();
	~GameMain();
	void Update();
	void Draw();
	SceneName Shift();
};