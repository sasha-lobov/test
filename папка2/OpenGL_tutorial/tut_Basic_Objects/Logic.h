#ifndef LOGIC_H
#define LOGIC_H

#include "GL/freeglut.h"
#include <ctime>

void processKeys(unsigned char key, int x, int y);
void end_animate(void);

struct Racketa
{
	bool start_flag;
	float x_pos;
	float y_pos;
	float score;
	float angle;
	float v;
};

extern Racketa rocket;

extern bool end_flag;
extern bool slide_1_flag;
extern bool slide_2_flag;
extern bool slide_3_flag;
extern bool slide_4_flag;
extern bool slide_5_flag;

#endif

