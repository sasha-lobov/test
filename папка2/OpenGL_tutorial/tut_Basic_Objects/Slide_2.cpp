#include "Slide_2.h"
#include "Draw_circle.h"
#include <cmath>

void slide_2(void)
{
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(0, 0);
	glVertex2f(1600, 0);
	glVertex2f(1600, 900);
	glVertex2f(0, 900);

	glEnd();

	//земля (вода)
	glPushMatrix();

	glTranslatef(-100, 1300, 0);
	glColor3f(0, 0, 1);
	draw_circle(800.0);

	//земля (континенты)
	glTranslatef(0, -800, 0);
	glBegin(GL_QUADS);
	glColor3f(34 / 255.0f, 177 / 255.0f, 76 / 255.0f);
	glVertex2f(321, 148);
	glVertex2f(280, 93);
	glVertex2f(129, 77);
	glVertex2f(251, 172);

	glVertex2f(251, 172);
	glVertex2f(129, 77);
	glVertex2f(56, 274);
	glVertex2f(211, 236);

	glVertex2f(211, 236);
	glVertex2f(56, 274);
	glVertex2f(113, 426);
	glVertex2f(230, 374);

	glVertex2f(423, 324);
	glVertex2f(488, 342);
	glVertex2f(504, 235);
	glVertex2f(428, 159);

	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(428, 159);
	glVertex2f(259, 214);
	glVertex2f(275, 318);
	glVertex2f(408, 444);
	glVertex2f(423, 324);

	glEnd();

	//луна
	glScalef(1.5, 1.5, 0);
	glTranslatef(1000, -300, 0);
	glColor3f(195 / 255.0f, 195 / 255.0f, 195 / 255.0f);
	draw_circle(50.0);
	glTranslatef(20, 15, 0);
	glColor3f(246 / 255.0f, 246 / 255.0f, 246 / 255.0f);
	draw_circle(10.0);
	glTranslatef(-30, -30, 0);
	glColor3f(246 / 255.0f, 246 / 255.0f, 246 / 255.0f);
	draw_circle(15.0);
	glTranslatef(20, 10, 0);
	glColor3f(246 / 255.0f, 246 / 255.0f, 246 / 255.0f);
	draw_circle(5.0);
	glTranslatef(-15, 30, 0);
	glColor3f(246 / 255.0f, 246 / 255.0f, 246 / 255.0f);
	draw_circle(5.0);

	glPopMatrix();

	glPushMatrix();
	//какая то планета
	glScalef(1.5, 1.5, 0);
	glTranslatef(900, 500, 0);
	glColor3f(255 / 255.0f, 127 / 255.0f, 39 / 255.0f);
	draw_circle(150.0);
	glTranslatef(20, 15, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(30.0);
	glTranslatef(30, -30, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(60.0);
	glTranslatef(-100, -70, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(30.0);
	glTranslatef(-50, 120, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(30.0);

	glPopMatrix();

	//астероиды
	glPushMatrix();
	glTranslatef(rocket.x_pos, rocket.y_pos, 0);
	glRotatef(rocket.x_pos/10, 0, 0, 1);

	glPushMatrix();
	glScalef(0.8, 0.8, 0);
	glTranslatef(0, 0, 0);

	glBegin(GL_QUADS);
	glColor3f(195 / 255.0f, 195 / 255.0f, 195 / 255.0f);
	glVertex2f(423, 324);
	glVertex2f(488, 342);
	glVertex2f(504, 235);
	glVertex2f(428, 159);

	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(428, 159);
	glVertex2f(259, 214);
	glVertex2f(275, 318);
	glVertex2f(408, 444);
	glVertex2f(423, 324);

	glEnd();

	glScalef(0.8, 0.8, 0);
	glTranslatef(1800, 300, 0);
	glRotatef(60, 0, 0, 1);
	glBegin(GL_QUADS);
	glColor3f(195 / 255.0f, 195 / 255.0f, 195 / 255.0f);
	glVertex2f(423, 324);
	glVertex2f(488, 342);
	glVertex2f(504, 235);
	glVertex2f(428, 159);

	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(428, 159);
	glVertex2f(259, 214);
	glVertex2f(275, 318);
	glVertex2f(408, 444);
	glVertex2f(423, 324);

	glEnd();

	glPopMatrix();
	glPopMatrix();
}