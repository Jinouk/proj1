//Shape.c
#include "Shape.h"

void triangle3D();



void drawCube(int color1, int color2, int color3){
  glPushMatrix();
    drawBox(color1, color2, color3);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.1,0.1, 1);
    glTranslatef(11, 11, 0);
    drawBox(1,1,0);
    
    glTranslatef(0,-22, 0);
    drawBox(1,1,0);
    
    glTranslatef(-22,0,0) ;
    drawBox(1,1,0);
    
    glTranslatef(0,22,0) ;
    drawBox(1,1,0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(1, 0.1, 0.1);
    glTranslatef(0,11,11);
    drawBox(1,1,0); 
    
    glTranslatef(0, -22, 0);
    drawBox(1,1,0); 
    
    glTranslatef(0, 0, -22);
    drawBox(1,1,0); 
    
    glTranslatef(0, 22, 0);
    drawBox(1,1,0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.1, 1.2, 0.1);
    glTranslatef(11, 0, 11);
    drawBox(1,1,0);
    
    glTranslatef(-22, 0, 0);
    drawBox(1,1,0);
    
    glTranslatef(0, 0, -22);
    drawBox(1,1,0);
    
    glTranslatef(22, 0, 0);
    drawBox(1,1,0);
  glPopMatrix();
}

void drawNumber(int number) {
  switch (number) {
    case 1:
      drawOne();
      break;  
    case 2:
      drawTwo();
      break;  
    case 3:
      drawThree();
      break;  
    case 4:
      drawFour();
      break;  
    case 5:
      drawFive();
      break;  
    case 6:
      drawSix();  
      break;  
    case 7:
      drawSeven();
      break;  
    case 8:
      drawEight();
      break;  
    case 9:
      drawNine();
      break;  
    default:
      drawZero();
      break;   
  }
}



void drawTriangle3D() {}

void drawHexagon(double radius, double height) {
  GLfloat vertices[7][2];

  for(int i = 0; i <= 360; i += 60) {
    double radian = i * PI / 180;

    GLfloat x = radius * cos(radian);
    GLfloat y = radius * sin(radian);

    vertices[i/60][0] = x;
    vertices[i/60][1] = y;
  }

  for(int j = 0; j < 6; j++) {
    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(0, 0, height/2.0);
      glVertex3f(vertices[j][0],vertices[j][1], height/2.0);
      glVertex3f(vertices[j+1][0],vertices[j+1][1], height/2.0);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(0, 0, -height/2.0);
      glVertex3f(vertices[j][0],vertices[j][1], -height/2.0);
      glVertex3f(vertices[j+1][0],vertices[j+1][1], -height/2.0);
    glEnd();
  }

  glBegin(GL_TRIANGLE_STRIP);
  for(int j = 0; j < 6; j++) {
    glVertex3f(vertices[j][0],vertices[j][1], height/2.0);
    glVertex3f(vertices[j][0],vertices[j][1], -height/2.0); 
  }
  glEnd();
}

void drawCylinder(double radius, double height) {
  
  GLfloat vertices[361][2];

  glBegin(GL_TRIANGLE_STRIP);
  for(int i = 0; i <= 360; i++) {
    double radian = i * PI / 180;

    GLfloat x = radius * cos(radian);
    GLfloat y = radius * sin(radian);

   vertices[i][0] = x;
   vertices[i][1] = y;
  }

  // Front and Back
  for(int j = 0; j < 360; j++) {
    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(0, 0, height/2.0);
      glVertex3f(vertices[j][0],vertices[j][1], height/2.0);
      glVertex3f(vertices[j+1][0],vertices[j+1][1], height/2.0);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(0, 0, -height/2.0);
      glVertex3f(vertices[j][0],vertices[j][1], -height/2.0);
      glVertex3f(vertices[j+1][0],vertices[j+1][1], -height/2.0);
    glEnd();
  }

  // Side
  glBegin(GL_TRIANGLE_STRIP);
  for(int j = 0; j < 360; j++) {
    glVertex3f(vertices[j][0],vertices[j][1], height/2.0);
    glVertex3f(vertices[j][0],vertices[j][1], -height/2.0); 
  }
  glEnd();
}


