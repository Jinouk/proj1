// Number.c
// Definition of All Number functions
#include "Number.h"

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
    drawRingPart(0.5, 2, 0.5, 1, 90, 180);
  glPopMatrix();
  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    glTranslatef(-1, 9, 0);
    drawBox(1, 0, 0);
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