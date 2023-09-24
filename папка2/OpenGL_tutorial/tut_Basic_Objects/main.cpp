#include "GL/freeglut.h" // библиотека для отрисовки графики
#include <ctime>
#include <cmath>
#include <fstream>
#include <string>
#include <iostream>
#include "Logic.h" // подключаем файлы заголовков
#include "animate.h"
#include "Slide_1.h"
#include "Slide_2.h"
#include "Slide_3.h"
#include "Slide_4.h"
#include "Slide_5.h"
#include "Rocket.h"

void render_scene(void);

const int WIDTH = 1600, HEIGHT = 900; //ширина высота экрана
bool read_flag = true;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	std::fstream file_in("Scorost_rackety.txt", std::ios::in); //тут считываем скорость ракеты из файлика

	if (file_in.is_open() && read_flag == true)
	{
		file_in >> rocket.v;
		read_flag = false;
	}
	file_in.close();

	glutInit(&argc, argv); // все необходимые настройки для запуска окна
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("Raketa");
	glutDisplayFunc(render_scene);
	glutKeyboardFunc(processKeys);
	glutTimerFunc(25, update_display, 0);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glutMainLoop();

	return 0;
}

void render_scene(void) // тут мы отображаем слайды и ракету
{
	glMatrixMode(GL_PROJECTION); // необходимые настройки
	glLoadIdentity();
	glOrtho(0.0f, 1600, 900, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	slide_1(); // отображение слайдов
	if (slide_2_flag == true)
		slide_2();
	if (slide_3_flag == true)
		slide_3();
	if (slide_4_flag == true)
		slide_4();
	if (slide_5_flag == true)
		slide_5();
	draw_rocket(rocket);

	glutSwapBuffers();
}



