#include "Title.h"

Title::Title()
{
	start_button_pos = Vec2f(500.0f, -300.0f);
	option_button_pos = Vec2f(-500.0f, -300.0f);
	button_radius = Vec2f(150.0f, 150.0);
	gui_in.push_back(std::make_shared<CircleGuiIn>(start_button_pos, button_radius,Color::cyan));
	gui_in.push_back(std::make_shared<CircleGuiIn>(option_button_pos, button_radius,Color::cyan));
	text.push_back("スタート");
	text.push_back("オプション");
}

Title::~Title()
{
	//No nothing
}

void Title::Update()
{
	for (int i = 0; i < gui_in.size(); i++) {
		gui_in.at(i)->Update();

		if (gui_in.at(i)->Collision()) {
			gui_in.at(i)->ChangeColor(Color::red);

			if (env.isPressButton(Mouse::LEFT)) {
				gui_in.at(i)->ChangeScale(Vec2f(0.9f, 0.9f));
			}
		}
	}
}

void Title::Draw()
{
	for (int i = 0; i < gui_in.size(); i++) {
		gui_in.at(i)->Draw(text.at(i), 50);
	}
}

SceneName Title::Shift()
{
	if (env.isPushKey('A')){
		return SceneName::GAMEMAIN;
	}
	return SceneName::TITLE;
}