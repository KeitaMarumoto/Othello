#pragma once
#include "../../lib/framework.hpp"
#include "../../Singleton.h"


class GuiIn 
{
public:
	virtual ~GuiIn() {};
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual bool Collision() = 0;
	virtual void ChangeColor() = 0;
	virtual void ChangeScale() = 0;
	virtual void Active(bool) = 0;
};

class CircleGuiIn :public GuiIn
{
private:
	Vec2f pos;
	Vec2f radius;
	Vec2f scale;
	Vec2f origin;
	Color color;
	bool is_active;

public:
	CircleGuiIn(Vec2f, Vec2f);
	//void Update();
	void Draw();
	bool Collision();
	void ChangeColor(Color, Color, bool);
	void ChangeScale();
	void Active(bool);
};

class BoxGuiIn :public GuiIn
{
private:
	Vec2f pos;
	Vec2f size;
	Vec2f scale;
	Vec2f origin;
	Color color;
	bool is_active;

public:
	BoxGuiIn(Vec2f, Vec2f);
	//void Update();
	void Draw();
	bool Collision();
	void ChangeColor(Color, Color, bool);
	void ChangeScale();
	void Active(bool);
};