#pragma once
#include "../../lib/framework.hpp"
#include "../../Singleton.h"


class GuiIn 
{
public:
	virtual ~GuiIn() {};
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Collision() = 0;
	virtual void Active(bool) = 0;
};

class CircleGuiIn :public GuiIn
{
private:
	Vec2f pos;
	Vec2f radius;
	bool is_active;

public:
	CircleGuiIn(Vec2f, Vec2f);
	void Update();
	void Draw();
	void Collision();
	void Active(bool);
};

class BoxGuiIn :public GuiIn
{
private:
	Vec2f pos;
	Vec2f size;
	bool is_active;

public:
	BoxGuiIn(Vec2f, Vec2f);
	void Update();
	void Draw();
	void Collision();
	void Active(bool);
};