#include "Alphabet.h"

void drawA() {
  glPushMatrix();
    glRotatef(70, 0, 0, 1);
    glScalef(2, 0.25, 0.25);
    glTranslatef(-0.9, 0, 0);
    drawBox(0, 1, 0);
  glPopMatrix();

  glPushMatrix();
    glRotatef(-70, 0, 0, 1);
    glScalef(1.80, 0.25, 0.25);
    glTranslatef(1, 0, 0);
    drawBox(0, 1, 0);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.7, 0.25, 0.25);
    glTranslatef(0, -8, 0);
    drawBox(0, 1, 0);
  glPopMatrix();
}
void drawB(){
  glPushMatrix();
    glScalef(0.25, 2 ,0.5);
    glTranslatef(-0.9, 0, 0);
    drawBox(1,1,0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, 0.9, 0);
    drawRingPart(0.7, 0.6, 0.5, 1, 270, 90);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, -0.8, 0);
    drawRingPart(0.8, 0.7, 0.5, 1, 270, 90);
  glPopMatrix();
}
void drawC(){
  glPushMatrix();
    drawRingPart(0.7, 1.2, 0.5, 1, 60, 300);
  glPopMatrix();
}
void drawD(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-0.5, 0, 0);
    drawBox(0, 1, 1);
  glPopMatrix();

  glPushMatrix();
    drawRingPart(1, 1.25, 0.5, 1, 270, 90);
  glPopMatrix();
}
void drawE(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3, 0, 0);
    drawBox(0, 1, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    glTranslatef(0, 6, 0);
    drawBox(0, 1, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    //glTranslatef(, 0, 0);
    drawBox(0, 1, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    glTranslatef(0, -6, 0);
    drawBox(0, 1, 1);
  glPopMatrix();
}
void drawF(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3, 0, 0);
    drawBox(1, 0, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    glTranslatef(0, 6, 0);
    drawBox(1, 0, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
}
void drawG(){}
void drawH(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3, 0, 0);
    drawBox(1, 0, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(3, 0, 0);
    drawBox(1, 0, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
}
void drawI(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    //glTranslatef(0, 0, 0);
    drawBox(0, 1, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.7, 0.25, 0.5);
    glTranslatef(0, 6, 0);
    drawBox(0, 1, 1);
  glPopMatrix();

  glPushMatrix();
    glScalef(0.7, 0.25, 0.5);
    glTranslatef(0, -6, 0);
    drawBox(0, 1, 1);
  glPopMatrix();
}
void drawJ(){}
void drawK(){}
void drawL(){}
void drawM(){}
void drawN(){}
void drawO(){}
void drawP(){}
void drawQ(){}
void drawR(){}
void drawS(){}
void drawT(){}
void drawU(){}
void drawV(){}
void drawW(){}
void drawX(){}
void drawY(){}
void drawZ(){}