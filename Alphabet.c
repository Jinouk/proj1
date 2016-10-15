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
void drawG(){
  glPushMatrix();
    drawRingPart(0.5, 1, 0.5, 1, 60, 0);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glScalef(0.5, 0.25, 0.5);
    drawBox(0, 0, 0);
  glPopMatrix();
}
void drawH(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3, 0, 0);
    drawBox(1, 0, 0);
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
void drawJ(){
  glPushMatrix();
    glScalef(0.7, 0.25, 0.5);
    glTranslatef(-0.4, 4, 0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 0.8, 0.5);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.45, -0.8, 0);
    drawRingPart(0.2, 0.2, 0.5, 1, 180, 0);
  glPopMatrix();

}
void drawK(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-1,0,0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(45, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    glTranslatef(0.9,1,0);
    drawBox(0, 1, 0);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-45, 0, 0, 1);
    glScalef(1, 0.25, 0.5);    
    glTranslatef(0.9,-1,0);
    drawBox(0, 0, 1);
  glPopMatrix();
}
void drawL(){
  glPushMatrix();
    glScalef(0.25, 1.5, 0.5);
    glTranslatef(-3,0,0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(1, 0.25, 0.5);
    glTranslatef(0, -6, 0);
    drawBox(0, 1, 0);
  glPopMatrix();
}
void drawM(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-5.5, 0, 0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-45, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    glTranslatef(-1, 0.8, 0);
    drawBox(0, 1, 0);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(45, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    glTranslatef(1, 0.8, 0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(5.5, 0, 0);
    drawBox(0, 1, 0);
  glPopMatrix();
}
void drawN(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3.5, 0, 0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-60, 0, 0, 1);
    glScalef(1.75, 0.25, 0.5);
    //glTranslatef(-1, , 0);
    drawBox(0, 1, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(3.5, 0, 0);
    drawBox(0, 1, 0);
  glPopMatrix();
}
void drawO(){
  glPushMatrix();
    drawRingPart(1, 1, 0.5, 1, 0, 360);
  glPopMatrix();
}
void drawP(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-1, 0, 0);
    drawBox(0, 1, 0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, 0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 270, 90);
  glPopMatrix();
}
void drawQ(){
  glPushMatrix();
    drawRingPart(0.8, 1, 0.5, 1, 0, 360);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-45, 0, 0, 1);
    glScalef(0.9, 0.25, 0.5);
    glTranslatef(1.2, -1, 0);
    drawBox(1, 0, 1);
  glPopMatrix();
}
void drawR(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-1, 0, 0);
    drawBox(0, 1, 0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, 0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 270, 90);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.75, 0);
    drawRingPart(0.7, 1.5, 0.5, 1, 0, 90);
  glPopMatrix();
}
void drawS(){
  glPushMatrix();
    glTranslatef(0.1, 0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 30, 270);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 220, 90);
  glPopMatrix();
}
void drawT(){
  glPushMatrix();
    glScalef(1.25, 0.25, 0.5);
    glTranslatef(0, 6, 0);
    drawBox(1, 1, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    drawBox(1, 1, 0);
  glPopMatrix();
}
void drawU(){
  glPushMatrix();
    glScalef(0.25, 1, 0.5);
    glTranslatef(4, 0, 0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1, 0.5);
    glTranslatef(-4, 0, 0);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1, 0);
    drawRingPart(0.75, 0.5, 0.5, 1, 180, 0);
  glPopMatrix();
}
void drawV(){
  glPushMatrix();
    glTranslatef(0.375, 0, 0);
    glRotatef(75, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.375, 0, 0);
    glRotatef(-75, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
}
void drawW(){
  glPushMatrix();
    glTranslatef(1.0, 0, 0);
    glRotatef(75, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0.25, -0.5, 0);
    glRotatef(-75, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    
    drawBox(1, 0, 1);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.25, -0.5, 0);
    glRotatef(75, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-1.0, 0, 0);
    glRotatef(-75, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
}
void drawX(){
  glPushMatrix();
    glRotatef(60, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-60, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
}
void drawY(){
  glPushMatrix();
    glTranslatef(0.45, 1, 0);
    glRotatef(60, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.45, 1, 0);
    glRotatef(-60, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    drawBox(1, 0, 1);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -0.5, 0);
    glScalef(0.25, 1, 0.5);
    drawBox(0, 1, 1);
  glPopMatrix();
}
void drawZ(){
  glPushMatrix();
    glTranslatef(0, 1.5, 0);
    glScalef(1, 0.25, 0.5);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-25, 0, 0, 1);
    glScalef(0.25, 1.75, 0.5);
    drawBox(1, 0, 0);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.5, 0);
    glScalef(1, 0.25, 0.5);
    drawBox(1, 0, 0);
  glPopMatrix();
}
