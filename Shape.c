//Shape.c
#include "Shape.h"



GLfloat n[6][3] = {  /* Normals for the 6 faces of a cube. */
  {-1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {1.0, 0.0, 0.0},
  {0.0, -1.0, 0.0}, {0.0, 0.0, 1.0}, {0.0, 0.0, -1.0} };
GLint faces[6][4] = {  /* Vertex indices for the 6 faces of a cube. */
  {0, 1, 2, 3}, {3, 2, 6, 7}, {7, 6, 5, 4},
  {4, 5, 1, 0}, {5, 6, 2, 1}, {7, 4, 0, 3} };
GLfloat v[8][3];  /* Will be filled in with X,Y,Z vertexes. */

void drawZero();
void drawOne();
void drawTwo();
void drawThree();
void drawFour();
void drawFive();
void drawSix();
void drawSeven();
void drawEight();
void drawNine();

void drawBox(int color1, int color2, int color3) {
  v[0][0] = v[1][0] = v[2][0] = v[3][0] = -1;
  v[4][0] = v[5][0] = v[6][0] = v[7][0] = 1;
  v[0][1] = v[1][1] = v[4][1] = v[5][1] = -1;
  v[2][1] = v[3][1] = v[6][1] = v[7][1] = 1;
  v[0][2] = v[3][2] = v[4][2] = v[7][2] = 1;
  v[1][2] = v[2][2] = v[5][2] = v[6][2] = -1;
 
  int i;
 
  for (i = 0; i < 6; i++) {
    
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
      glNormal3fv(&n[i][0]);
      
      glVertex3fv(&v[faces[i][0]][0]);
      glVertex3fv(&v[faces[i][1]][0]);
      glVertex3fv(&v[faces[i][2]][0]);
      glVertex3fv(&v[faces[i][3]][0]);
    glEnd();
    
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glColor3f(color1, color2, color3);
    glBegin(GL_QUADS);
      glNormal3fv(&n[i][0]);
      glVertex3fv(&v[faces[i][0]][0]);
      glVertex3fv(&v[faces[i][1]][0]);
      glVertex3fv(&v[faces[i][2]][0]);
      glVertex3fv(&v[faces[i][3]][0]);
    glEnd();
  }
}

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

void drawZero() {
  GLfloat frontInnerCord[361][2];
  GLfloat frontOuterCord[361][2];
  
  GLfloat backInnerCord[361][2];
  GLfloat backOuterCord[361][2];

  GLfloat innerX, innerY, outerX, outerY;

  double radiusX = 0.5;
  double radiusY = 1;
  double thickness = 0.5;
  double radian;
  
  glPushMatrix();
    glColor3f(0,0,0);
    // Front circle
    glBegin(GL_TRIANGLE_STRIP);

      for(int i = 0; i <= 360; i++) {
        radian = i * PI / 180.0;

        innerX = radiusX * cos(radian);
        innerY = radiusY * sin(radian);
      
        // Outer Circle
        outerX = (radiusX + 0.5) * cos(radian);
        outerY = (radiusY + 0.5) * sin(radian);
        
                
        frontInnerCord[i][0] = innerX;
        frontInnerCord[i][1] = innerY;
        
        frontOuterCord[i][0] = outerX;
        frontOuterCord[i][1] = outerY;
        
        glVertex3f(innerX, innerY, thickness/2.0); 
        glVertex3f(outerX, outerY, thickness/2.0); 
      }
    glEnd();
    
    glColor3f(1,0,0);
    // Back circle
    glBegin(GL_TRIANGLE_STRIP);
      
      for(int i = 0; i <= 360; i++) {
        radian = i * PI / 180.0;

        innerX = radiusX * cos(radian);
        innerY = radiusY * sin(radian);
      
        // Outer Circle
        outerX = (radiusX + 0.5) * cos(radian);
        outerY = (radiusY + 0.5) * sin(radian);
        
                
        backInnerCord[i][0] = innerX;
        backInnerCord[i][1] = innerY;
        
        backOuterCord[i][0] = outerX;
        backOuterCord[i][1] = outerY;
        
        glVertex3f(innerX, innerY, -thickness/2.0); 
        glVertex3f(outerX, outerY, -thickness/2.0); 
      }
    glEnd();
    
    glColor3f(0,1,0);
    // Inner surface
    glBegin(GL_TRIANGLE_STRIP);
      for(int i = 0; i <= 360; i++) {
        glVertex3f(frontInnerCord[i][0], frontInnerCord[i][1], thickness/2.0); 
        glVertex3f(backInnerCord[i][0], backInnerCord[i][1], -thickness/2.0); 
      }
    glEnd();
    
    glColor3f(0,0,1);
    // Outer surface
    glBegin(GL_TRIANGLE_STRIP);
      for(int i = 0; i <= 360; i++) {
        glVertex3f(frontOuterCord[i][0], frontOuterCord[i][1], thickness/2.0); 
        glVertex3f(backOuterCord[i][0], backOuterCord[i][1], -thickness/2.0); 
      }
    glEnd();
  glPopMatrix();
}
void drawOne(){
  glPushMatrix();
    glScalef(1.25, 0.5, 0.5);
    drawBox(1,0,0);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.33, 2, 0.5);
    glTranslatef(0, 1.25, 0);
    drawBox(0, 1, 0);
  glPopMatrix();
}
void drawTwo(){}
void drawThree(){}
void drawFour(){}
void drawFive(){}
void drawSix(){}
void drawSeven(){}
void drawEight(){}
void drawNine(){}

