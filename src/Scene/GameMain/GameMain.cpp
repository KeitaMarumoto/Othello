#include "GameMain.h"

GameMain::GameMain()
{
	board=std::shared_ptr<Board>(new Board);
}

GameMain::~GameMain() 
{

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