#include "Logic.h"
#include <cstdlib>
#include <fstream>

Racketa rocket = { false, 0.0, 0.0, 0.0, 0.0, 0.0 }; // ������ ��������� ������

bool end_flag = false; // ����� ����������� �������
bool slide_2_flag = false;
bool slide_3_flag = false;
bool slide_4_flag = false;
bool slide_5_flag = false;


void processKeys(unsigned char key, int x, int y) // ���������� ������� ������� s - �����
{
    if (key == 's')
        rocket.start_flag = true;
}

void end_animate(void)
{
//�������� ���������

    static clock_t start_exit = clock();

    if (clock() - start_exit >= 3000 && end_flag == true)
    {
        glutDestroyWindow(glutGetWindow()); // �������� ���� OpenGL
        exit(0); // ����� �� ���������
    }

}