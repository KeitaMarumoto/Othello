#pragma once
#include "../../lib/framework.hpp"
#include "../../Singleton.h"


class GuiIn 
{
public:
	Font my_font = ("res/meiryo.ttc");
	GuiIn() = default;
	virtual ~GuiIn() {}
	virtual void Update() = 0;
	virtual void Draw(const std::string& text, int f_size) = 0;

	//当たり判定の真偽値を返す
	virtual bool Collision() = 0;

	// ボタンの色を変える
	// change_color      変化後の色
	// cond	             変化する条件の真偽値
	virtual void ChangeColor(Color changed_color) = 0;
	
	// 拡大率を変える
	// change_scale     変化後の拡大率
	// cond             変化する条件の真偽値
	virtual void ChangeScale(Vec2f changed_scale) = 0;
	virtual void Active(bool cond) = 0;
};

class CircleGuiIn :public GuiIn
{
private:
	Vec2f pos;
	Vec2f radius;
	Vec2f scale;
	Vec2f pre_scale;
	Vec2f origin;
	Color color;
	Color pre_color;
	bool is_active;
	Font my_font=("res/meiryo.ttc");

public:
	CircleGuiIn(Vec2f, Vec2f, Color);
	void Update();
	void Draw(const std::string& text, int f_size);
	bool Collision();
	void ChangeColor(Color);
	void ChangeScale(Vec2f);
	void Active(bool);
};

class BoxGuiIn :public GuiIn
{
private:
	Vec2f pos;
	Vec2f size;
	Vec2f scale;
	Vec2f pre_scale;
	Vec2f origin;
	Color color;
	Color pre_color;
	bool is_active;

public:
	BoxGuiIn(Vec2f p, Vec2f s, Color col);
	void Update();
	void Draw(const std::string& text, int f_size);
	bool Collision();
	void ChangeColor(Color);
	void ChangeScale(Vec2f);
	void Active(bool);
};