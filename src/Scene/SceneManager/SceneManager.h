#pragma once
#include "../../lib/framework.hpp"
#include "../../Singleton.h"
#include "../GameMain/GameMain.h"
#include "../Result/Result.h"
#include "../Title/Title.h"

class SceneManager{
private:
	std::shared_ptr<Title>title;
	std::shared_ptr<GameMain>gamemain;
	std::shared_ptr<Result>result;
	SceneName scene;

public:
	SceneManager();
	~SceneManager();
	void Update();
	void Draw();
	void Shift();
};