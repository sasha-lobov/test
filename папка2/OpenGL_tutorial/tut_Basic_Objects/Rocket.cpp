#include "Rocket.h"
#include "Draw_circle.h"
#include "Logic.h"
#include <cmath>
#include <ctime>

void animate_rocket(Racketa& rocket) // тут просчитываем координаты ракеты
{
	if (rocket.start_flag == true)
	{
		rocket.score += 1.0;
		if (rocket.y_pos > -230 && rocket.score < 1000.0)
		{
			rocket.angle += 2.0;
			rocket.x_pos += 3.0;
			rocket.y_pos -= 3.0;
		}
		else if(rocket.start_flag == true && slide_2_flag != true)
		{
			rocket.x_pos += 1.0 * rocket.v;
			rocket.y_pos -= 1.0 * rocket.v;
		}
	}

	if (rocket.score >= 1000.0 / rocket.v && slide_2_flag != true)
	{
		slide_2_flag = true;
		rocket.x_pos = -700.0;
		rocket.y_pos = 700.0;
		rocket.angle = 400.0;
	}
	else if (slide_2_flag == true && slide_3_flag != true)
	{
		rocket.x_pos += 2.0 * rocket.v;
		rocket.y_pos -= 2.0 * rocket.v;
	}

	if (rocket.score >= 2000 / rocket.v && slide_3_flag != true)
	{
		slide_3_flag = true;
		rocket.x_pos = -1100.0;
		rocket.y_pos = 900.0;
		rocket.angle = 600.0;
	}
	else if (slide_3_flag == true && slide_4_flag != true)
	{
		rocket.x_pos += 4.0 * rocket.v;
		rocket.y_pos -= 3.0 * rocket.v;
	}

	if (rocket.score >= 2600 / rocket.v && slide_4_flag != true)
	{
		slide_4_flag = true;
		rocket.x_pos = -1100.0;
		rocket.y_pos = 900.0;
		rocket.angle = 600.0;
	}
	else if (slide_4_flag == true && slide_5_flag != true)
	{
		rocket.x_pos += 5.0 * rocket.v;
		rocket.y_pos -= 4.0 * rocket.v;
	}

	if (rocket.score >= 3000 / rocket.v && slide_5_flag != true)
	{
		slide_5_flag = true;
		rocket.x_pos = 0.0;
		rocket.y_pos = -600.0;
		rocket.angle = 0.0;
	}
	else if (slide_5_flag == true && rocket.y_pos < -350)
	{
		rocket.y_pos += 0.5 * rocket.v;
	}
	else if (slide_5_flag == true && rocket.y_pos >= -350)
	{
		end_flag = true;
		end_animate();
	}
}

void draw_rocket(Racketa& rocket) // рисуем саму ракету
{
	animate_rocket(rocket);
	glPushMatrix();

	glTranslatef(rocket.x_pos, rocket.y_pos, 0);
	glRotatef(rocket.angle/10, 0, 0, 1);

	if (slide_2_flag != true)
		fire(rocket); // пламя ракеты
	if (slide_5_flag == true && end_flag != true)
		fire(rocket);

	glScalef(0.7, 0.7, 0);
	glTranslatef(360, 425, 0);

	//корпус моей ракеты
	glBegin(GL_TRIANGLES);
	glColor3f(237 / 255.0f, 28 / 255.0f, 36 / 255.0f);
	glVertex2f(598, 831);
	glVertex2f(598, 717);
	glVertex2f(657, 717);

	glVertex2f(781, 717);
	glVertex2f(838, 717);
	glVertex2f(838, 831);

	glVertex2f(598, 522);
	glVertex2f(657, 522);
	glVertex2f(657, 408);

	glVertex2f(781, 521);
	glVertex2f(838, 521);
	glVertex2f(781, 405);

	glColor3f(163 / 255.0f, 72 / 255.0f, 164 / 255.0f);
	glVertex2f(737, 248);
	glVertex2f(701, 248);
	glVertex2f(717, 86);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(237 / 255.0f, 28 / 255.0f, 36 / 255.0f);
	glVertex2f(598, 717);
	glVertex2f(657, 717);
	glVertex2f(657, 521);
	glVertex2f(598, 521);

	glVertex2f(781, 717);
	glVertex2f(838, 717);
	glVertex2f(838, 521);
	glVertex2f(781, 521);

	glColor3f(255 / 255.0f, 174 / 255.0f, 201 / 255.0f);
	glVertex2f(657, 717);
	glVertex2f(781, 717);
	glVertex2f(781, 306);
	glVertex2f(657, 306);

	glColor3f(237 / 255.0f, 28 / 255.0f, 36 / 255.0f);
	glVertex2f(657, 306);
	glVertex2f(781, 306);
	glVertex2f(737, 248);
	glVertex2f(701, 248);

	glEnd();

	// левая деталька
	glPushMatrix();
	glScalef(0.7, 0.7, 0.0);
	glTranslatef(270, 310, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(255 / 255.0f, 174 / 255.0f, 201 / 255.0f);
	glVertex2f(598, 831);
	glVertex2f(598, 717);
	glVertex2f(657, 717);


	glVertex2f(598, 522);
	glVertex2f(657, 522);
	glVertex2f(657, 408);

	glEnd();

	glBegin(GL_QUADS);

	glVertex2f(598, 717);
	glVertex2f(657, 717);
	glVertex2f(657, 521);
	glVertex2f(598, 521);
	
	glEnd();

	//правая деталька
	glTranslatef(77, 0, 0);

	glBegin(GL_TRIANGLES);

	glVertex2f(781, 717);
	glVertex2f(838, 717);
	glVertex2f(838, 831);

	glVertex2f(781, 521);
	glVertex2f(838, 521);
	glVertex2f(781, 405);

	glEnd();

	glBegin(GL_QUADS);

	glVertex2f(781, 717);
	glVertex2f(838, 717);
	glVertex2f(838, 521);
	glVertex2f(781, 521);

	glEnd();

	glPopMatrix();

	//иллюминаторы
	glPushMatrix();

	glTranslatef(719, 650, 0);
	glColor3f(0 / 255.0f, 162 / 255.0f, 232 / 255.0f);
	draw_circle(50.0);

	glTranslatef(0, -140, 0);
	draw_circle(50.0);

	glTranslatef(0, -140, 0);
	draw_circle(50.0);

	glPopMatrix();

	glPopMatrix();
}

//отрисовка огня
void fire(Racketa& rocket)
{
	glPushMatrix();
	glScalef(0.8, 0.8, 0);
	glTranslatef(220, 270, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(0.7 + sin(rocket.y_pos)/10, 0 +sin(rocket.y_pos)/10, 0 + sin(rocket.y_pos)/10);
	glVertex2f(692, 718);
	glVertex2f(642, 863);
	glVertex2f(750, 717);

	glVertex2f(692, 718);
	glVertex2f(711, 888);
	glVertex2f(750, 717);

	glVertex2f(692, 718);
	glVertex2f(797, 831);
	glVertex2f(750, 717);

	glEnd();

	glPopMatrix();
}