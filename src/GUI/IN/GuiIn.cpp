#include "GuiIn.h"

//**************CircleGuiIn�N���X********************************************

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

// �{�^���̐F��ς��鏈��
// color_1		�ʏ펞�̐F
// color_2		�ω���̐F
// cond			�ω���������̐^�U�l
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



//****************BoxGuiIn�N���X**************************************************

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

// �{�^���̐F��ς��鏈��
// color_1		�ʏ펞�̐F
// color_2		�ω���̐F
// cond			�ω���������̐^�U�l
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

//�g�嗦��ς���
void BoxGuiIn::ChangeScale()
{

}

void BoxGuiIn::Active(bool active = true)
{
	is_active = active;
}

//*******************************************************************************