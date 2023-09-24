#include "Slide_1.h"
#include "Draw_circle.h"
#include <cmath>

void slide_1(void) // отрисовка первого слайда
{
	glBegin(GL_QUADS);
	//небо
	glColor3f(157 / 255.0f, 213 / 255.0f, 234 / 255.0f);
	glVertex2f(0, 0);
	glVertex2f(1600, 0);
	glVertex2f(1600, 900);
	glVertex2f(0, 900);

	glEnd();

	//солнце
	glPushMatrix();

	glTranslatef(400, 200, 0);
	glColor3f(255 / 255.0f, 255 / 255.0f, 0 / 255.0f);
	draw_circle(150.0);

	glPopMatrix();

	//луна
	glPushMatrix();

	glTranslatef(1300, 100, 0);
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

	// горы
	glPushMatrix();
	glTranslatef(0, sin(rocket.y_pos), 0);

	glBegin(GL_TRIANGLES);

	glColor3f(127 / 255.0f, 127 / 255.0f, 127 / 255.0f);
	glVertex2f(927, 800);
	glVertex2f(1278, 164);
	glVertex2f(1900, 800);

	glVertex2f(1209, 800);
	glVertex2f(1018, 101);
	glVertex2f(822, 800);

	glVertex2f(1197, 800);
	glVertex2f(833, 259);
	glVertex2f(393, 800);

	glVertex2f(707, 800);
	glVertex2f(337, 162);
	glVertex2f(0, 800);

	glEnd();

	glPushMatrix();
	glScalef(0.9, 0.8, 0);
	glTranslatef(100, 300, 0);

	glBegin(GL_TRIANGLES);

	glColor3f(195 / 255.0f, 195 / 255.0f, 195 / 255.0f);
	glVertex2f(927, 800);
	glVertex2f(1278, 164);
	glVertex2f(1900, 800);

	glVertex2f(1209, 800);
	glVertex2f(1018, 101);
	glVertex2f(822, 800);

	glVertex2f(1197, 800);
	glVertex2f(833, 259);
	glVertex2f(393, 800);

	glVertex2f(707, 800);
	glVertex2f(337, 162);
	glVertex2f(0, 800);

	glEnd();

	glPopMatrix();

	//земля
	glBegin(GL_QUADS);

	glColor3f(136 / 255.0f, 0 / 255.0f, 21 / 255.0f);
	glVertex2f(0, 800);
	glVertex2f(1600, 800);
	glVertex2f(1600, 900);
	glVertex2f(0, 900);

	glEnd();

	//стыковочная платформа
	glBegin(GL_QUADS);
	glColor3f(0 / 255.0f, 0 / 255.0f, 0 / 255.0f);
	glVertex2f(1050, 800);
	glVertex2f(1050, 250);
	glVertex2f(1070, 250);
	glVertex2f(1070, 800);

	glVertex2f(900, 800);
	glVertex2f(900, 87);
	glVertex2f(915, 87);
	glVertex2f(915, 800);

	glVertex2f(591, 621);
	glVertex2f(1070, 621);
	glVertex2f(1070, 639);
	glVertex2f(591, 639);

	glVertex2f(591, 551);
	glVertex2f(1070, 551);
	glVertex2f(1070, 569);
	glVertex2f(591, 569);

	glVertex2f(581, 800);
	glVertex2f(581, 232);
	glVertex2f(600, 232);
	glVertex2f(600, 800);

	glColor3f(255 / 255.0f, 255 / 255.0f, 255 / 255.0f);
	glVertex2f(915, 800);
	glVertex2f(915, 639);
	glVertex2f(1050, 639);
	glVertex2f(1050, 800);

	glVertex2f(915, 621);
	glVertex2f(915, 569);
	glVertex2f(1050, 569);
	glVertex2f(1050, 621);

	glVertex2f(915, 551);
	glVertex2f(915, 355);
	glVertex2f(1050, 355);
	glVertex2f(1050, 551);

	glColor3f(0 / 255.0f, 162 / 255.0f, 232 / 255.0f);
	glVertex2f(964, 780);
	glVertex2f(964, 667);
	glVertex2f(1009, 667);
	glVertex2f(1009, 780);

	glVertex2f(964,500);
	glVertex2f(964, 387);
	glVertex2f(1009, 387);
	glVertex2f(1009, 500);

	glEnd();

	glPopMatrix();


	glPushMatrix();
	glTranslatef(sin(rocket.x_pos), 0, 0);

	glBegin(GL_QUADS);
	//домик первый
	glColor3f(255 / 255.0f, 174 / 255.0f, 201 / 255.0f);
	glVertex2f(1334, 800);
	glVertex2f(1334, 253);
	glVertex2f(1541, 250);
	glVertex2f(1541, 800);
	//труба
	glColor3f(0 / 255.0f, 0 / 255.0f, 0 / 255.0f);
	glVertex2f(1371, 247);
	glVertex2f(1371, 184);
	glVertex2f(1402, 184);
	glVertex2f(1402, 247);
	//дверь
	glColor3f(185 / 255.0f, 122 / 255.0f, 87 / 255.0f);
	glVertex2f(1414, 800);
	glVertex2f(1414, 727);
	glVertex2f(1471, 727);
	glVertex2f(1471, 800);
	//окна
	glColor3f(63 / 255.0f, 72 / 255.0f, 204 / 255.0f);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();
	//крыша
	glBegin(GL_TRIANGLES);
	glColor3f(237 / 255.0f, 28 / 255.0f, 36 / 255.0f);
	glVertex2f(1334, 253);
	glVertex2f(1437, 202);
	glVertex2f(1541, 250);

	glEnd();

	glPushMatrix();
	glTranslatef(95, 0, 0);

	glBegin(GL_QUADS);
	glColor3f(63 / 255.0f, 72 / 255.0f, 204 / 255.0f);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(-95, 0, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glPopMatrix();

	glPopMatrix();

	//домик второй
	glPushMatrix();
	glTranslatef(-sin(rocket.x_pos), 0, 0);

	glPushMatrix();
	glTranslatef(-1400, 0, 0);

	glBegin(GL_QUADS);
	glColor3f(255 / 255.0f, 174 / 255.0f, 201 / 255.0f);
	glVertex2f(1334, 800);
	glVertex2f(1334, 253);
	glVertex2f(1541, 250);
	glVertex2f(1541, 800);
	//труба
	glColor3f(0 / 255.0f, 0 / 255.0f, 0 / 255.0f);
	glVertex2f(1371, 247);
	glVertex2f(1371, 184);
	glVertex2f(1402, 184);
	glVertex2f(1402, 247);
	//дверь
	glColor3f(185 / 255.0f, 122 / 255.0f, 87 / 255.0f);
	glVertex2f(1414, 800);
	glVertex2f(1414, 727);
	glVertex2f(1471, 727);
	glVertex2f(1471, 800);
	//окна
	glColor3f(63 / 255.0f, 72 / 255.0f, 204 / 255.0f);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();
	//крыша
	glBegin(GL_TRIANGLES);
	glColor3f(237 / 255.0f, 28 / 255.0f, 36 / 255.0f);
	glVertex2f(1334, 253);
	glVertex2f(1437, 202);
	glVertex2f(1541, 250);

	glEnd();

	glPushMatrix();
	glTranslatef(95, 0, 0);

	glBegin(GL_QUADS);
	glColor3f(63 / 255.0f, 72 / 255.0f, 204 / 255.0f);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(-95, 0, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glPopMatrix();
	glPopMatrix();

	glPopMatrix();
	
	//домик третий
	glPushMatrix();
	glTranslatef(sin(rocket.x_pos), 0, 0);

	glPushMatrix();
	glScalef(0.7, 0.7, 0);
	glTranslatef(-900, 342, 0);

	glBegin(GL_QUADS);
	glColor3f(255 / 255.0f, 174 / 255.0f, 201 / 255.0f);
	glVertex2f(1334, 800);
	glVertex2f(1334, 253);
	glVertex2f(1541, 250);
	glVertex2f(1541, 800);
	//труба
	glColor3f(0 / 255.0f, 0 / 255.0f, 0 / 255.0f);
	glVertex2f(1371, 247);
	glVertex2f(1371, 184);
	glVertex2f(1402, 184);
	glVertex2f(1402, 247);
	//дверь
	glColor3f(185 / 255.0f, 122 / 255.0f, 87 / 255.0f);
	glVertex2f(1414, 800);
	glVertex2f(1414, 727);
	glVertex2f(1471, 727);
	glVertex2f(1471, 800);
	//окна
	glColor3f(63 / 255.0f, 72 / 255.0f, 204 / 255.0f);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();
	//крыша
	glBegin(GL_TRIANGLES);
	glColor3f(237 / 255.0f, 28 / 255.0f, 36 / 255.0f);
	glVertex2f(1334, 253);
	glVertex2f(1437, 202);
	glVertex2f(1541, 250);

	glEnd();

	glPushMatrix();
	glTranslatef(95, 0, 0);

	glBegin(GL_QUADS);
	glColor3f(63 / 255.0f, 72 / 255.0f, 204 / 255.0f);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, 80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(-95, 0, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glTranslatef(0, -80, 0);

	glBegin(GL_QUADS);
	glVertex2f(1352, 273);
	glVertex2f(1424, 273);
	glVertex2f(1424, 338);
	glVertex2f(1352, 338);

	glEnd();

	glPopMatrix();
	glPopMatrix();

	glPopMatrix();
}