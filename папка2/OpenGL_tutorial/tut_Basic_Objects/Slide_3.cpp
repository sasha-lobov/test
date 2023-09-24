#include "Slide_3.h"
#include "Draw_circle.h"

void slide_3(void)
{
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(0, 0);
	glVertex2f(1600, 0);
	glVertex2f(1600, 900);
	glVertex2f(0, 900);

	glEnd();

	//какая то планета
	glPushMatrix();

	glScalef(1.5, 1.5, 0);
	glTranslatef(0, 400, 0);
	glColor3f(255 / 255.0f, 127 / 255.0f, 39 / 255.0f);
	draw_circle(250.0);
	glTranslatef(100, 15, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(30.0);
	glTranslatef(50, -30, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(60.0);
	glTranslatef(-100, -70, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(30.0);
	glTranslatef(-50, 120, 0);
	glColor3f(255 / 255.0f, 180 / 255.0f, 30 / 255.0f);
	draw_circle(20.0);
	
	glPopMatrix();

	glPushMatrix();
	//еще какая то планета
	glScalef(1.2, 1.2, 0);
	glTranslatef(700, 200, 0);
	glColor3f(136 / 255.0f, 0 / 255.0f, 21 / 255.0f);
	draw_circle(50.0);

	glPopMatrix();

	glPushMatrix();
	//какая то планета 3
	glScalef(1.5, 1.5, 0);
	glTranslatef(900, 500, 0);
	glColor3f(112 / 255.0f, 146 / 255.0f, 190 / 255.0f);
	draw_circle(100.0);
	glTranslatef(20, 15, 0);
	glColor3f(84 / 255.0f, 99 / 255.0f, 131 / 255.0f);
	draw_circle(10.0);
	glTranslatef(30, 0, 0);
	glColor3f(84 / 255.0f, 99 / 255.0f, 131 / 255.0f);
	draw_circle(20.0);
	glTranslatef(-20, -70, 0);
	glColor3f(84 / 255.0f, 99 / 255.0f, 131 / 255.0f);
	draw_circle(10.0);
	glTranslatef(-50, 120, 0);
	glColor3f(84 / 255.0f, 99 / 255.0f, 131 / 255.0f);
	draw_circle(10.0);

	glPopMatrix();

	//астероиды
	glPushMatrix();
	glTranslatef(rocket.x_pos, rocket.y_pos, 0);
	glRotatef(rocket.x_pos / 10, 0, 0, 1);

	glPushMatrix();
	glScalef(0.7, 0.9, 0);
	glTranslatef(150, 400, 0);

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
	glTranslatef(2400, 0, 0);
	glRotatef(120, 0, 0, 1);
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