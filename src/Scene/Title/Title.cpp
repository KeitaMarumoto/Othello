#include "Title.h"

Title::Title()
{
	
}

Title::~Title()
{
	//No nothing
}

void Title::Update()
{

}

void Title::Draw()
{

}

SceneName Title::Shift()
{
	if (env.isPushKey('A')){
		return SceneName::GAMEMAIN;
	}
	return SceneName::TITLE;
}