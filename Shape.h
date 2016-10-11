// Shape.h
// Shape Header file
#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#ifdef __APPLE__
  #include <GLUT/glut.h>
#else
  #include <GL/glut.h>
#endif

#include <math.h>
#include "stdio.h"

#define PI 3.14159265

void drawBox(int color1, int color2, int color3);
void drawCube(int color1, int color2, int color3);
void drawNumber(int number);
#endif 
