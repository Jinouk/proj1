#include "BaseShape.h"

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

void drawRingPart(double radiusX, double radiusY, double width, double thickness , int start, int end) {
  int vertexCount;
  int degree = start;

  if(start > end) {
    vertexCount = 360 - start + end;
  }
  
  else {
    vertexCount = end - start;
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
