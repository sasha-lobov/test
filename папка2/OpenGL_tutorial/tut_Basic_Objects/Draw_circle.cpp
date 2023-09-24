#include "Draw_circle.h"
#include <cmath>

void draw_circle(GLfloat radius) // эта функция рисует круги 
{
    float a;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f); // вершина в центре круга
    for (int i = 0; i <= 50; i++) {
        a = (float)i / 50.0f * 3.1415f * 2.0f;
        glVertex2f(cos(a) * radius, sin(a) * radius);
    }
    glEnd();
}