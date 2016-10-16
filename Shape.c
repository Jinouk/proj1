//Shape.c
#include "Shape.h"

void triangle3D();
void drawCylinder(double radius, double height);
void drawHexagon(double radius, double height);

void drawCube(double color1, double color2, double color3, int num1, int num2, int poly1, char poly2, char letter1, char letter2){
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

  glPushMatrix();
    glTranslatef(0, 0, 1);
    glScalef(0.3, 0.3, 0.3);
    drawNumber(num1);
  glPopMatrix();

  glPushMatrix();
    glNormal3f(0, 0, -1);
    glTranslatef(0, 0, -1);
    glRotatef(180, 0, 1, 0);
    glScalef(0.4, 0.4, 0.4);
    drawLetter(letter1);
  glPopMatrix();

  glPushMatrix();
    glNormal3f(1, 0, 0);
    glTranslatef(1, 0, 0);
    glRotatef(90, 0, 1, 0);
    glScalef(0.7, 0.7, 0.7);
    drawPolygon(poly1);
  glPopMatrix();

  glPushMatrix();
    glNormal3f(-1, 0, 0);
    glTranslatef(-1, 0, 0);
    glRotatef(-90, 0, 1, 0);
    glScalef(0.3, 0.3, 0.3);
    drawNumber(num2);
  glPopMatrix();

  glPushMatrix();
    glNormal3f(0, 1, 0);
    glTranslatef(0, 1, 0);
    glRotatef(-90, 1, 0, 0);
    glScalef(0.4, 0.4, 0.4);
    drawLetter(letter2);
  glPopMatrix();

  glPushMatrix();
    glNormal3f(0, -1, 0);
    glTranslatef(0, -1, 0);
    glRotatef(-90, 1, 0, 0);
    glScalef(0.7, 0.7, 0.7);
    drawPolygon(poly2);
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

void drawLetter(char letter) {
  switch (letter){
    case 'A':
      drawA();
      break;
    case 'B':
      drawB();
      break; 
    case 'C':
      drawC();
      break; 
    case 'D':
      drawD();
      break; 
    case 'E':
      drawE();
      break; 
    case 'F':
      drawF();
      break; 
    case 'G':
      drawG();
      break; 
    case 'H':
      drawH();
      break; 
    case 'I':
      drawI();
      break; 
    case 'J':
      drawJ();
      break; 
    case 'K':
      drawK();
      break; 
    case 'L':
      drawL();
      break; 
    case 'M':
      drawM();
      break; 
    case 'N':
      drawN();
      break; 
    case 'O':
      drawO();
      break; 
    case 'P':
      drawP();
      break; 
    case 'Q':
      drawQ();
      break; 
    case 'R':
      drawR();
      break; 
    case 'S':
      drawS();
      break; 
    case 'T':
      drawT();
      break; 
    case 'U':
      drawU();
      break;
    case 'V':
      drawV();
      break; 
    case 'W':
      drawW();
      break; 
    case 'X':
      drawX();
      break;
    case 'Y':
      drawY();
      break; 
    case 'Z':
      drawZ();
      break;   
  }
}

void drawPolygon(char polygon) {
  switch(polygon) {
    case 'h':
      drawHexagon(1, 0.5);
      break;
    case 'c':
      drawCylinder(1, 0.5);
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


