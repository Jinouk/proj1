// Number.c
// Definition of All Number functions
#include "Number.h"

void drawZero() {
  glPushMatrix();
    drawRingPart(1.0, 2.0, 0.5, 1, 0, 360);
  glPopMatrix();
}
void drawOne(){
  glScalef(1.1, 1.1, 1);
  glPushMatrix();
    glScalef(1, 0.25, 0.5);
    glTranslatef(0, -8, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.25, 1.5, 0.5);
    glTranslatef(0, -0.25, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(1.25, 1.25, 1);
    glTranslatef(0.25, 0.75, 0.5);

    glNormal3f(0,0,1);
    // Front Triangle
    glBegin(GL_TRIANGLE_STRIP);   
      glVertex3f(0,0,0);
      glVertex3f(0,1,0);
      glVertex3f(-1, 0, 0);
    glEnd();
    // Top
    glNormal3f(-1,1,0);
    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(0,1,0);
      glVertex3f(-1, 0, 0);
      glVertex3f(-1, 0, -1);
      glVertex3f(0, 1, -1);
    glEnd();
    // Back Trianlge
    glNormal3f(0,0,-1);
    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(-1, 0, -1);
      glVertex3f(0, 1, -1);
      glVertex3f(0, 0, -1);
    glEnd();
    // Side
    glNormal3f(1,0,0);
    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(-1, 0, -1);
      glVertex3f(0, 0, -1);
      glVertex3f(0, 1, 0);
      glVertex3f(0, 0, 0);
    glEnd();
    // Bottom
    glNormal3f(0,0,0);
    glBegin(GL_TRIANGLE_STRIP);
      glVertex3f(0, 1, 0);
      glVertex3f(0, 0, 0);
      glVertex3f(-1, 0, -1);
      glVertex3f(-1, 0, 0);
    glEnd();
  glPopMatrix();
}
void drawTwo(){
  glTranslatef(0, 1, 0);
  glPushMatrix();
    drawRingPart(1,1,0.5,1, 315, 180);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(45, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    glTranslatef(-1, -5, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(1.4, 0.25, 0.5);
    glTranslatef(0, -12.25, 0);
    drawBox();
  glPopMatrix();
}
void drawThree(){
  glScalef(1, 0.9, 1);
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
  glTranslatef(0.5, -0.5, 0);
  glScalef(0.7, 0.7, 1);

  glPushMatrix();
    glScalef(0.5, 3.5, 0.5);
    glTranslatef(1, 0.25, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(2, 0.5, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(65, 0, 0, 1);
    glScalef(2.25, 0.5, 0.5);
    glTranslatef(0.75, 2.75, 0);
    drawBox(); 
  glPopMatrix();
}
void drawFive(){
  glTranslatef(0,-0.8, 0);
  glScalef(1, 1.025, 1);
  glPushMatrix();
    glScalef(1.1, 0.25, 0.5);
    glTranslatef(0.11, 12, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.0, 0.5);
    glTranslatef(-2.90, 2, 0);
    drawBox();
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
  glTranslatef(0.5, 0, 0);
  glPushMatrix();
    glTranslatef(1, -2.5, 0);
    drawRingPart(1.5, 4, 0.5, 1, 90, 180);
  glPopMatrix();
  glPushMatrix();
    
    glTranslatef(-0.25, 2, 0);
    glScalef(1.25, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
void drawEight(){
  glPushMatrix();
    glTranslatef(0, 1, 0);
    drawRingPart(0.8, 0.8, 0.5, 1, 0, 360);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.25, 0);
    drawRingPart(1, 0.9, 0.5, 1, 0, 360);
  glPopMatrix();
}
void drawNine(){
  glPushMatrix();
    glTranslatef(0, 0.75, 0);
    drawRingPart(0.8, 1, 0.5, 1, 0, 360);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-5, 0, 0, 1);
    glTranslatef(-0.1, 0, 0);
    drawRingPart(0.9, 2, 0.5, 1, 220, 30);
  glPopMatrix();
}
