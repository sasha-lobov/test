#include "Slide_5.h"
#include "Draw_circle.h"

void slide_5(void)
{
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(0, 0);
	glVertex2f(1600, 0);
	glVertex2f(1600, 900);
	glVertex2f(0, 900);

	glEnd();

	//луна
	glPushMatrix();

	glScalef(25, 25, 0);
	glTranslatef(35, 70, 0);
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
}