#include "GameMain.h"

GameMain::GameMain()
{
	board = std::make_shared<Board>();
	guiout = std::make_shared<GuiOut>(board->getOuterPos(), 
									  board->getOuterSize());
}

GameMain::~GameMain() 
{
	// No nothing
}

void GameMain::Update()
{

}

void GameMain::Draw()
{
	board->Draw();
}

SceneName GameMain::Shift()
{
	if (env.isPushKey('A')){
		return SceneName::RESULT;
	}
	return SceneName::GAMEMAIN;
}