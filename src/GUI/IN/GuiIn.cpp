#include "GuiIn.h"

//**************CircleGuiInクラス********************************************

CircleGuiIn::CircleGuiIn(const Vec2f p, const Vec2f r,const Color col)
{
	pos = p;
	radius = r;
	scale = Vec2f(1.0f, 1.0f);
	pre_scale = Vec2f(1.0f, 1.0f);
	origin = Vec2f(0.0f, 0.0f);
	color = col;
	pre_color = col;
	is_active = true;
	my_font.size(50);
}

void CircleGuiIn::Update()
{
	color = pre_color;
	scale = pre_scale;
}
void CircleGuiIn::Draw(const std::string& text,int f_size)
{
	Vec2f font_size;
	my_font.read("res/meiryo.ttc");
	my_font.size(f_size);

	drawFillCircle(pos.x(), pos.y(),
				   radius.x(), radius.y(),
				   100,
				   color,
				   0, scale, origin);

	font_size=my_font.drawSize(text);
	my_font.draw(text, pos - (font_size / 2), Color::black);
}

bool CircleGuiIn::Collision()
{
	const Vec2f mpos = env.mousePosition();
	const float sqrt_ = (((pos.x() - mpos.x())*(pos.x() - mpos.x())) + 
						 ((pos.y() - mpos.y())*(pos.y() - mpos.y())));
	const float sqrt_r = radius.x()*radius.x();


	if (sqrt_ < sqrt_r) {
		return true;
	}
	return false;
}

// ボタンの色を変える処理
// color_1		通常時の色
// color_2		変化後の色
// cond			変化する条件の真偽値
void CircleGuiIn::ChangeColor(const Color changed_color)
{
	color = changed_color;
}

void CircleGuiIn::ChangeScale(const Vec2f changed_scale)
{
	scale = changed_scale;
}

void CircleGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************



//****************BoxGuiInクラス**************************************************

BoxGuiIn::BoxGuiIn(const Vec2f p, const Vec2f s,const Color col)
{
	pos = p;
	size = s;
	scale = Vec2f(1.0f, 1.0f);
	pre_scale = Vec2f(1.0f, 1.0f);
	origin = s/2;
	color = Color(0.3f, 1.0f, 0.3f);
	pre_color = col;
	is_active = true;
}

void BoxGuiIn::Update()
{
	color = pre_color;
	scale = pre_scale;
}

void BoxGuiIn::Draw(const std::string& text, int f_size)
{
	drawFillBox(pos.x(), pos.y(), 
				size.x(), size.y(), 
				color, 
				0, scale, origin);
}

bool BoxGuiIn::Collision()
{
	const Vec2f mpos = env.mousePosition();
	const Vec2f cpos = pos - (size / 2);
	if ((cpos.x() < mpos.x()) && (mpos.x() < (cpos.x() + size.x()))) {
		if ((cpos.y() < mpos.y()) && (mpos.y() < (cpos.y() + size.y()))) {
			return true;
		}
	}
	return false;
}

// ボタンの色を変える処理
// color_1		通常時の色
// color_2		変化後の色
// cond			変化する条件の真偽値
void BoxGuiIn::ChangeColor(const Color changed_color)
{
	color = changed_color;
}

//拡大率を変える
void BoxGuiIn::ChangeScale(const Vec2f changed_scale)
{
	scale = changed_scale;
}

void BoxGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************