#include "Slide_4.h"
#include "Draw_circle.h"

void slide_4(void)
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

	glScalef(7, 7, 0);
	glTranslatef(200, 100, 0);
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
	//еще какая то планета
	glScalef(1.2, 1.2, 0);
	glTranslatef(100, 400, 0);
	glColor3f(136 / 255.0f, 0 / 255.0f, 21 / 255.0f);
	draw_circle(50.0);

	glPopMatrix();
}