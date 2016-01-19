#pragma once

#include "../../lib/framework.hpp"
#include "../../Singleton.h"
#include "../../Board/Board.h"
#include "../../GUI/OUT/GuiOut.h"



class GameMain{
private:
	std::shared_ptr<Board>board;
	std::shared_ptr<GuiOut>guiout;

public:
	GameMain();
	~GameMain();
	void Update();
	void Draw();
	SceneName Shift();
};