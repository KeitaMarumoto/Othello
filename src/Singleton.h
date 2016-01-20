#pragma once
#include "lib/framework.hpp"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

#define env App::get()


enum Window {
	WIDTH = 2000,
	HEIGHT = 1500
};


class App
{
public:
	static AppEnv& get()
	{
		static AppEnv Env(Window::WIDTH, Window::HEIGHT, false, true);
		return Env;
	}

};


enum class SceneName
{
	TITLE,
	GAMEMAIN,
	RESULT
};

//���Board.cpp�Ŏg�p
enum class BoardSize
{
	WIDTH = 1500,
	HEIGHT = 1500,
	SUB_IN_OUT=200       //�O�g�ƃQ�[���{�[�h�܂ł̕�
};