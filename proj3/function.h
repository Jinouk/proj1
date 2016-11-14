#include "matrix.h"
#include <iostream>

using namespace std;

typedef enum type { triangle, quad, nothing } type;


void JLLoadIdentity();
void viewNormalization(double * eye, double * center, double * up, double * width, double * height, double * length);
void JLPushMatrix();
void JLPopMatrix();
void JLTranslate(double x, double y, double z);
void JLRotate(double angle, double xAxis, double yAxis, double zAxis);
void JLScale(double xScale, double yScale, double zScale);
void JLBegin(type m);
void JLEnd();
void JLVertex(double x, double y, double z);
void printMatrix();
