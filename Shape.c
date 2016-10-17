//Shape.c
#include "Shape.h"

void drawTriangle();
void drawCylinder(double radius, double height);
void drawHexagon(double radius, double height);

void drawCube(double color1, double color2, double color3, int num1, int num2, int poly1, char poly2, char letter1, char letter2){
  glPushMatrix();
    glColor3f(0.72, 0.6, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glColor3f(color1, color2, color3);
    glPushMatrix();
      glScalef(0.1,0.1, 1);
      glTranslatef(11, 11, 0);
      drawBox();
      
      glTranslatef(0,-22, 0);
      drawBox();
      
      glTranslatef(-22,0,0) ;
      drawBox();
      
      glTranslatef(0,22,0) ;
      drawBox();
    glPopMatrix();
    
    glPushMatrix();
      glScalef(1, 0.1, 0.1);
      glTranslatef(0,11,11);
      drawBox(); 
      
      glTranslatef(0, -22, 0);
      drawBox(); 
      
      glTranslatef(0, 0, -22);
      drawBox(); 
      
      glTranslatef(0, 22, 0);
      drawBox();
    glPopMatrix();
    
    glPushMatrix();
      glScalef(0.1, 1.2, 0.1);
      glTranslatef(11, 0, 11);
      drawBox();
      
      glTranslatef(-22, 0, 0);
      drawBox();
      
      glTranslatef(0, 0, -22);
      drawBox();
      
      glTranslatef(22, 0, 0);
      drawBox();
    glPopMatrix();
  glPopMatrix();
  
  glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(0, 0, 1);
    glScalef(0.3, 0.3, 0.3);
    drawNumber(num1);
  glPopMatrix();

  glPushMatrix();
    glColor3f(0.0, 1.0, 0.0);
    //glNormal3f(0, 0, -1);
    glTranslatef(0, 0, -1);
    glRotatef(180, 0, 1, 0);
    glScalef(0.4, 0.4, 0.4);
    drawLetter(letter1);
  glPopMatrix();

  glPushMatrix();
    glColor3f(0.0, 0.0, 1.0);
    //glNormal3f(1, 0, 0);
    glTranslatef(1, 0, 0);
    glRotatef(90, 0, 1, 0);
    glScalef(0.7, 0.7, 0.7);
    drawPolygon(poly1, 1, 0.5);
  glPopMatrix();

  glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    //glNormal3f(-1, 0, 0);
    glTranslatef(-1, 0, 0);
    glRotatef(-90, 0, 1, 0);
    glScalef(0.3, 0.3, 0.3);
    drawNumber(num2);
  glPopMatrix();

  glPushMatrix();
    glColor3f(1.0, 0.0, 1.0);
    //glNormal3f(0, 1, 0);
    glTranslatef(0, 1, 0);
    glRotatef(-90, 1, 0, 0);
    glScalef(0.4, 0.4, 0.4);
    drawLetter(letter2);
  glPopMatrix();

  glPushMatrix();
    glColor3f(0.6, 0.3, 0.4);
    //glNormal3f(0, -1, 0);
    glTranslatef(0, -1, 0);
    glRotatef(-90, 1, 0, 0);
    glScalef(0.7, 0.7, 0.7);
    drawPolygon(poly2, 1, 0.5);
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

void drawPolygon(char polygon, double radius, double height) {
  switch(polygon) {
    case 'h':
      drawHexagon(radius, height);
      break;
    case 'c':
      drawCylinder(radius, height);
      break;
    case 't':
      drawTriangle(radius, height);
      break;
  }
}

void drawTriangle(double radius, double height) {
  glPushMatrix();
    
    GLfloat vertices[3][2];
    int counter = 0;
    
    for(int i = 90; i <= 330; i += 120) {
      double radian = i * PI / 180;
      GLfloat x = radius * cos(radian);
      GLfloat y = radius * sin(radian);
      
      vertices[counter][0] = x;
      vertices[counter][1] = y;
      counter++;
    }
    
    
    glBegin(GL_TRIANGLE_STRIP);
    // Front Triangle
      glColor3f(1,0,0);
      glNormal3f(0,0,1);
      float diffuse0[]  = {1, 0, 0, 1};
      float s[] = {128};
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, diffuse0);
      glMaterialfv(GL_FRONT, GL_SHININESS, s);
      glMaterialfv(GL_FRONT, GL_SPECULAR, diffuse0);
      glVertex3f(vertices[0][0],vertices[0][1], height/2.0);
      glVertex3f(vertices[1][0],vertices[1][1], height/2.0);
      glVertex3f(vertices[2][0],vertices[2][1], height/2.0);
      
      // Bottom
      //glColor3f(0,1,0);
      float diffuse1[]  = {0, 1, 0, 1};
      glNormal3f(0,-1,0);
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, diffuse1);
      //glMaterialfv(GL_FRONT, GL_AMBIENT, diffuse1);
      glMaterialfv(GL_FRONT, GL_SPECULAR, diffuse1);
      glVertex3f(vertices[2][0],vertices[2][1], -height/2.0);
      glVertex3f(vertices[1][0],vertices[1][1], height/2.0);
      glVertex3f(vertices[1][0],vertices[1][1], -height/2.0);

      // Left
      //glColor3f(1,0,1);
      float diffuse2[]  = {1, 0, 1, 1};
      glNormal3f(-1, -1, 0);
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, diffuse2);
      //glMaterialfv(GL_FRONT, GL_AMBIENT, diffuse2);
      glMaterialfv(GL_FRONT, GL_SPECULAR, diffuse2);
      glVertex3f(vertices[0][0],vertices[0][1], height/2.0);
      glVertex3f(vertices[0][0],vertices[0][1], -height/2.0);
      
      // Right
      //glColor3f(1,1,0);
      float diffuse3[]  = {1, 1, 0, 1};
      glNormal3f(1, 1, 0);
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, diffuse3);
      //glMaterialfv(GL_FRONT, GL_AMBIENT, diffuse3);
      glMaterialfv(GL_FRONT, GL_SPECULAR, diffuse3);
      glVertex3f(vertices[2][0],vertices[2][1], height/2.0);
      glVertex3f(vertices[2][0],vertices[2][1], -height/2.0);
      
      // 
      //glColor3f(0,1,1);
      glNormal3f(0,0,-1);
      float diffuse4[]  = {0, 1, 1, 1};
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, diffuse4);
      //glMaterialfv(GL_FRONT, GL_AMBIENT, diffuse4);
      glMaterialfv(GL_FRONT, GL_SPECULAR, diffuse4);
      glVertex3f(vertices[1][0],vertices[1][1], -height/2.0);
      glVertex3f(vertices[0][0],vertices[0][1], -height/2.0);
      glVertex3f(vertices[2][0],vertices[2][1], -height/2.0);
    glEnd();
  glPopMatrix();
}

void drawHexagon(double radius, double height) {
  
  glPushMatrix();
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
    for(int j = 0; j <= 6; j++) {
      glVertex3f(vertices[j][0],vertices[j][1], height/2.0);
      glVertex3f(vertices[j][0],vertices[j][1], -height/2.0); 
    }
    glEnd();
  glPopMatrix();
}

void drawCylinder(double radius, double height) {
  
  glPushMatrix();
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
  glPopMatrix();
}


