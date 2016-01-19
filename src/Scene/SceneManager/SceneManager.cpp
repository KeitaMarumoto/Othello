#include "SceneManager.h"

SceneManager::SceneManager()
{
	title = std::shared_ptr<Title>(new Title);
	gamemain = std::shared_ptr<GameMain>(new GameMain);
	result = std::shared_ptr<Result>(new Result);
	scene = SceneName::TITLE;
}



SceneManager::~SceneManager() 
{
	//No noting
}



void SceneManager::Update()
{
	switch (scene)
	{
	case SceneName::TITLE:
		title->Update();
		break;
	
	case SceneName::GAMEMAIN:
		gamemain->Update();
		break;
	
	case SceneName::RESULT:
		result->Update();
		break;
	}
}

void SceneManager::Draw()
{
	switch (scene)
	{
	case SceneName::TITLE:
		title->Draw();
		cout << "TITLE";
		break;

	case SceneName::GAMEMAIN:
		gamemain->Draw();
		cout << "GAMEMAIN";
		break;

	case SceneName::RESULT:
		result->Draw();
		cout << "RESULT";
		break;
	}
}



void SceneManager::Shift()
{
	switch (scene)
	{
	case SceneName::TITLE:
		scene = title->Shift();
		break;

	case SceneName::GAMEMAIN:
		scene = gamemain->Shift();
		break;

	case SceneName::RESULT:
		scene = result->Shift();
		break;
	}
}