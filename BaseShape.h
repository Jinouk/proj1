// baseShape.h
#ifndef BASESHAPE_H_INCLUDED
#define BASESHAPE_H_INCLUDED

#ifdef __APPLE__
  #include <GLUT/glut.h>
#else
  #include <GL/glut.h>
#endif

#include <math.h>
#include "stdio.h"

#define PI 3.14159265

void drawBox();
void drawRingPart(double radiusX, double radiusY, double width, double thickness,  int start, int end);
#endif
