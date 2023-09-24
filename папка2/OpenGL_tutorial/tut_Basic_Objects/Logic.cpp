#include "Logic.h"
#include <cstdlib>
#include <fstream>

Racketa rocket = { false, 0.0, 0.0, 0.0, 0.0, 0.0 }; // задаем параметры ракеты

bool end_flag = false; // фалги отображения слайдов
bool slide_2_flag = false;
bool slide_3_flag = false;
bool slide_4_flag = false;
bool slide_5_flag = false;


void processKeys(unsigned char key, int x, int y) // обработчик нажатия клавиши s - старт
{
    if (key == 's')
        rocket.start_flag = true;
}

void end_animate(void)
{
//закрытие программы

    static clock_t start_exit = clock();

    if (clock() - start_exit >= 3000 && end_flag == true)
    {
        glutDestroyWindow(glutGetWindow()); // Закрытие окна OpenGL
        exit(0); // Выход из программы
    }

}