#include "GuiIn.h"

//**************CircleGuiInクラス********************************************

CircleGuiIn::CircleGuiIn(const Vec2f p, const Vec2f r)
{
	pos = p;
	radius = r;
	scale = Vec2f(1.0f, 1.0f);
	origin = Vec2f(0.0f, 0.0f);
	color = Color(0.3f, 0.3f, 1.0f);
	is_active = true;
}

void CircleGuiIn::Draw()
{
	drawFillCircle(pos.x(), pos.y(),
				   radius.x(), radius.y(),
				   50,
				   color,
				   0, scale, origin);
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
void CircleGuiIn::ChangeColor(const Color color_1, 
							  const Color color_2, 
							  const bool cond)
{
	if (cond) {
		color = color_2;
	}
	else {
		color = color_1;
	}
}

void CircleGuiIn::ChangeScale()
{

}

void CircleGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************



//****************BoxGuiInクラス**************************************************

BoxGuiIn::BoxGuiIn(const Vec2f p, const Vec2f s)
{
	pos = p;
	size = s;
	scale = Vec2f(1.0f, 1.0f);
	origin = Vec2f(0.0f, 0.0f);
	color = Color(1.0f, 0.3f, 0.3f);
	is_active = true;
}

void BoxGuiIn::Draw()
{
	//drawFillBox()
}

bool BoxGuiIn::Collision()
{
	const Vec2f mpos = env.mousePosition();
	if ((pos.x() < mpos.x()) && (mpos.x() < (pos.x() + size.x()))) {
		if ((pos.y() < mpos.y()) && (mpos.y() < (pos.y() + size.y()))) {
			return true;
		}
	}
	return false;
}

// ボタンの色を変える処理
// color_1		通常時の色
// color_2		変化後の色
// cond			変化する条件の真偽値
void BoxGuiIn::ChangeColor(const Color color_1,
						   const Color color_2,
						   const bool cond)
{
	if (cond) {
		color = color_2;
	}
	else {
		color = color_1;
	}
}

//拡大率を変える
void BoxGuiIn::ChangeScale()
{

}

void BoxGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************