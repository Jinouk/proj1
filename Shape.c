//Shape.c
#include "Shape.h"

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

void triangle3D();
void drawRingPart(double radiusX, double radiusY, double width, double thickness,  int start, int end);

void drawBox(int color1, int color2, int color3) {

  GLfloat n[6][3] = {  /* Normals for the 6 faces of a cube. */
    {-1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {1.0, 0.0, 0.0},
    {0.0, -1.0, 0.0}, {0.0, 0.0, 1.0}, {0.0, 0.0, -1.0} };
  GLint faces[6][4] = {  /* Vertex indices for the 6 faces of a cube. */
    {0, 1, 2, 3}, {3, 2, 6, 7}, {7, 6, 5, 4},
    {4, 5, 1, 0}, {5, 6, 2, 1}, {7, 4, 0, 3} };
  GLfloat v[8][3];  /* Will be filled in with X,Y,Z vertexes. */

  v[0][0] = v[1][0] = v[2][0] = v[3][0] = -1;
  v[4][0] = v[5][0] = v[6][0] = v[7][0] = 1;
  v[0][1] = v[1][1] = v[4][1] = v[5][1] = -1;
  v[2][1] = v[3][1] = v[6][1] = v[7][1] = 1;
  v[0][2] = v[3][2] = v[4][2] = v[7][2] = 1;
  v[1][2] = v[2][2] = v[5][2] = v[6][2] = -1;
 
  int i;
  glPushMatrix();
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
  glPopMatrix();
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
  glPushMatrix();
    drawRingPart(1.0, 2.0, 0.5, 1, 0, 360);
  glPopMatrix();
}
void drawOne(){
  glPushMatrix();
    glScalef(3, 1, 1);
    drawBox(0,0,0);
  glPopMatrix();

  glPushMatrix();
    glScalef(1, 4, 1);
    glTranslatef(0, 1.25, 0);
    drawBox(0, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(4, 4, 2);
    glTranslatef(0.25, 1.75, 0.5);
    glBegin(GL_TRIANGLE_STRIP);
      
      // Front Triangle
      glVertex3f(0,0,0);
      glVertex3f(0,1,0);
      glVertex3f(-1, 0, 0);

      // Top
      glVertex3f(-1, 0, -1);
      glVertex3f(0, 1, -1);

      // Back Trianlge
      glVertex3f(0, 0, -1);

      // Side
      glVertex3f(0, 1, 0);
      glVertex3f(0, 0, 0);

      // Bottom
      glVertex3f(-1, 0, -1);
      glVertex3f(-1, 0, 0);
    glEnd();
  glPopMatrix();
}
void drawTwo(){
  glPushMatrix();
    drawRingPart(1,1,0.5,1, 315, 180);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(45, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    glTranslatef(-1, -5, 0);
    drawBox(0,1,1);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(1.4, 0.25, 0.5);
    glTranslatef(0, -12.25, 0);
    drawBox(0,0,1);
  glPopMatrix();
}
void drawThree(){
  glPushMatrix();
    glTranslatef(0, 1.25, 0);
    drawRingPart(1,1,0.5, 1, 270, 135);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.25, 0);
    drawRingPart(1,1,0.5, 1, 225, 90);
  glPopMatrix();
}
void drawFour(){
  glPushMatrix();
    glScalef(0.5, 3.5, 0.5);
    glTranslatef(1, 0.25, 0);
    drawBox(1,0,0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(2, 0.5, 0.5);
    drawBox(0,1,0);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(65, 0, 0, 1);
    glScalef(2.25, 0.5, 0.5);
    glTranslatef(0.75, 2.75, 0);
    drawBox(1,0,1); 
  glPopMatrix();
}
void drawFive(){
  glPushMatrix();
    glScalef(1.1, 0.25, 0.5);
    glTranslatef(0.11, 12, 0);
    drawBox(1,0,0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.0, 0.5);
    glTranslatef(-2.90, 2, 0);
    drawBox(0, 1, 0);
  glPopMatrix();
  
  glPushMatrix();
    drawRingPart(1,1,0.5, 1, 225, 135);
  glPopMatrix();
}
void drawSix(){
  glPushMatrix();
    drawRingPart(1, 2, 0.5, 1, 50, 315);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.02, 0);
    drawRingPart(0.7, 1, 0.5, 1, 315, 180);
  glPopMatrix();
}
void drawSeven(){
  glPushMatrix();
    glRotatef(70, 0, 0, 1);
    glScalef(1.25, 0.25, 0.5);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.70, 0.25, 0.5);
    glTranslatef(-0.25, 4 ,0);
    drawBox(0, 0, 1);
  glPopMatrix();
}
void drawEight(){
  glPushMatrix();
    glTranslatef(0, 1.25, 0);
    drawRingPart(1, 1, 0.5, 1, 0, 360);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.25, 0);
    drawRingPart(1.2, 1.1, 0.5, 1, 0, 360);
  glPopMatrix();
}
void drawNine(){
  glPushMatrix();
    glTranslatef(0, 0.25, 0);
    drawRingPart(0.5, 0.8, 0.5, 1, 0, 360);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-5, 0, 0, 1);
    glTranslatef(-0.1, -0.30, 0);
    drawRingPart(0.6, 1.5, 0.5, 1, 245, 15);
  glPopMatrix();
}

void drawTriangle3D() {}
void drawRingPart(double radiusX, double radiusY, double width, double thickness , int start, int end) {
  
  
  int vertexCount;
  int degree = start;

  if(start > end) {
    vertexCount = 360 - start + end;
  }
  
  else {
    vertexCount = end - start;
  }
  

  if(vertexCount < 0) {
    vertexCount = -vertexCount;
  }

  if(vertexCount == 360){ 
    vertexCount++;
    end++; 
  } 

  GLfloat frontInnerCord[vertexCount][2];
  GLfloat frontOuterCord[vertexCount][2];
  
  GLfloat backInnerCord[vertexCount][2];
  GLfloat backOuterCord[vertexCount][2];

  GLfloat innerX, innerY, outerX, outerY;

  double radian;
  
  glPushMatrix();
    glColor3f(0,0,0);
    // Front circle
    glBegin(GL_TRIANGLE_STRIP);

      for(int i = 0; i < vertexCount; i++) {
        if(degree == 360) {
          degree = 0; 
        }
        radian = degree * PI / 180.0;

        // Inner Circle
        innerX = radiusX * cos(radian);
        innerY = radiusY * sin(radian);
      
        // Outer Circle
        outerX = (radiusX + width) * cos(radian);
        outerY = (radiusY + width) * sin(radian);
        
                
        frontInnerCord[i][0] = innerX;
        frontInnerCord[i][1] = innerY;
        
        frontOuterCord[i][0] = outerX;
        frontOuterCord[i][1] = outerY;
        
        glVertex3f(innerX, innerY, thickness/2.0); 
        glVertex3f(outerX, outerY, thickness/2.0); 
        degree++;
      }
    glEnd();
    
    degree = start;
    glColor3f(1,0,0);
    // Back circle
    glBegin(GL_TRIANGLE_STRIP);
      
      for(int i = 0; i < vertexCount; i++) {
        if(degree == 360) {
          degree = 0;
        }
        radian = degree * PI / 180.0;

        // Inner Circle
        innerX = radiusX * cos(radian);
        innerY = radiusY * sin(radian);
      
        // Outer Circle
        outerX = (radiusX + width) * cos(radian);
        outerY = (radiusY + width) * sin(radian);
        
                
        backInnerCord[i][0] = innerX;
        backInnerCord[i][1] = innerY;
        
        backOuterCord[i][0] = outerX;
        backOuterCord[i][1] = outerY;
        
        glVertex3f(innerX, innerY, -thickness/2.0); 
        glVertex3f(outerX, outerY, -thickness/2.0); 
        degree++;
      }
    glEnd();
    
    glColor3f(0,1,0);
    // Inner surface
    glBegin(GL_TRIANGLE_STRIP);
      for(int i = 0; i < vertexCount; i++) {
        glVertex3f(frontInnerCord[i][0], frontInnerCord[i][1], thickness/2.0); 
        glVertex3f(backInnerCord[i][0], backInnerCord[i][1], -thickness/2.0); 
      }
    glEnd();
    
    glColor3f(0,0,1);
    // Outer surface
    glBegin(GL_TRIANGLE_STRIP);
      for(int i = 0; i < vertexCount; i++) {
        glVertex3f(frontOuterCord[i][0], frontOuterCord[i][1], thickness/2.0); 
        glVertex3f(backOuterCord[i][0], backOuterCord[i][1], -thickness/2.0); 
      }
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(frontInnerCord[0][0], frontInnerCord[0][1], thickness/2.0);
      glVertex3f(backInnerCord[0][0], backInnerCord[0][1], -thickness/2.0);
      glVertex3f(frontOuterCord[0][0], frontOuterCord[0][1], thickness/2.0);
      glVertex3f(backOuterCord[0][0], backOuterCord[0][1], -thickness/2.0);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(frontInnerCord[vertexCount-1][0], frontInnerCord[vertexCount-1][1], thickness/2.0);
      glVertex3f(backInnerCord[vertexCount-1][0], backInnerCord[vertexCount-1][1], -thickness/2.0);
      glVertex3f(frontOuterCord[vertexCount-1][0], frontOuterCord[vertexCount-1][1], thickness/2.0);
      glVertex3f(backOuterCord[vertexCount-1][0], backOuterCord[vertexCount-1][1], -thickness/2.0);
    glEnd();
  glPopMatrix();
}

