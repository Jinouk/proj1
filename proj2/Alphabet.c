#include "Alphabet.h"

void drawA() {
  glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glRotatef(15, 0, 0, 1);
    
    glScalef(0.25, 2, 0.5);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.5, 0, 0);
    glRotatef(-15, 0, 0, 1);
    
    glScalef(0.25, 2, 0.5);
    
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, 0, 0);
    glScalef(0.7, 0.25, 0.25);
    drawBox();
  glPopMatrix();
}
void drawB(){
  glPushMatrix();
    glTranslatef(-0.6, 0, 0);
    glScalef(0.25, 2 ,0.5);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, 0.9, 0);
    drawRingPart(0.7, 0.6, 0.5, 1, 240, 120);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, -0.8, 0);
    drawRingPart(0.8, 0.7, 0.5, 1, 240, 120);
  glPopMatrix();
}
void drawC(){
  glPushMatrix();
    drawRingPart(1, 1.5, 0.5, 1, 60, 300);
  glPopMatrix();
}
void drawD(){
  glPushMatrix();
    glTranslatef(-0.5, 0, 0);
    glScalef(0.25, 1.75, 0.5);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    drawRingPart(1, 1.25, 0.5, 1, 250, 120);
  glPopMatrix();
}
void drawE(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3, 0, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    glTranslatef(0, 6, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    //glTranslatef(, 0, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    glTranslatef(0, -6, 0);
    drawBox();
  glPopMatrix();
}
void drawF(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3, 0, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    glTranslatef(0, 6, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
void drawG(){
  glPushMatrix();
    drawRingPart(0.75, 1.4, 0.5, 1, 60, 0);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glScalef(0.75, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
void drawH(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3, 0, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(3, 0, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.75, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
void drawI(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.7, 0.25, 0.5);
    glTranslatef(0, 6, 0);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.7, 0.25, 0.5);
    glTranslatef(0, -6, 0);
    drawBox();
  glPopMatrix();
}
void drawJ(){
  glPushMatrix();
    glTranslatef(0, 1.5, 0);
    glScalef(1, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0.5, 0.25, 0);
    glScalef(0.25, 1.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.25, -0.75, 0);
    drawRingPart(0.5, 0.75, 0.5, 1, 180, 0);
  glPopMatrix();

}
void drawK(){
  glPushMatrix();
    glTranslatef(-0.5,0,0);
    glScalef(0.25, 1.75, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0.5,0.5,0);
    glRotatef(50, 0, 0, 1);
    glScalef(1.5, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0.75,-0.75,0);
    glRotatef(-45, 0, 0, 1);
    glScalef(1.25, 0.25, 0.5);    
    drawBox();
  glPopMatrix();
}
void drawL(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3,0,0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(1, 0.25, 0.5);
    glTranslatef(0, -6, 0);
    drawBox();
  glPopMatrix();
}
void drawM(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-5.5, 0, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-45, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    glTranslatef(-1, 0.8, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(45, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    glTranslatef(1, 0.8, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(5.5, 0, 0);
    drawBox();
  glPopMatrix();
}
void drawN(){
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(-3.5, 0, 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-60, 0, 0, 1);
    glScalef(1.75, 0.25, 0.5);
    //glTranslatef(-1, , 0);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    glTranslatef(3.5, 0, 0);
    drawBox();
  glPopMatrix();
}
void drawO(){
  glPushMatrix();
    drawRingPart(1, 1.3, 0.5, 1, 0, 360);
  glPopMatrix();
}
void drawP(){
  glPushMatrix();
    glTranslatef(-0.5, 0, 0);
    glScalef(0.25, 1.75, 0.5);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, 0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 220, 120);
  glPopMatrix();
}
void drawQ(){
  glPushMatrix();
    drawRingPart(1, 1.3, 0.5, 1, 0, 360);
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-45, 0, 0, 1);
    glScalef(0.9, 0.25, 0.5);
    glTranslatef(1.2, -1, 0);
    drawBox();
  glPopMatrix();
}
void drawR(){
  glPushMatrix();
    glTranslatef(-0.5, 0, 0);
    glScalef(0.25, 1.75, 0.5);
    drawBox();
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0, 0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 240, 120);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.75, 0);
    drawRingPart(0.7, 1.5, 0.5, 1, 0, 120);
  glPopMatrix();
}
void drawS(){
  glPushMatrix();
    glTranslatef(0.1, 0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 10, 270);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -0.75, 0);
    drawRingPart(0.5, 0.5, 0.5, 1, 200, 90);
  glPopMatrix();
}
void drawT(){
  glPushMatrix();
    glTranslatef(0, 1.5, 0);
    glScalef(1.25, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glScalef(0.25, 1.75, 0.5);
    drawBox();
  glPopMatrix();
}
void drawU(){
  glPushMatrix();
    glTranslatef(1, 0.4, 0);
    glScalef(0.25, 1.4, 0.5);
    
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-1, 0.4, 0);
    glScalef(0.25, 1.4, 0.5);    
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1, 0);
    drawRingPart(0.75, 0.5, 0.5, 1, 180, 0);
  glPopMatrix();
}
void drawV(){
  glPushMatrix();
    glTranslatef(0.65, 0, 0);
    glRotatef(65, 0, 0, 1);
    glScalef(1.8, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.65, 0, 0);
    glRotatef(-70, 0, 0, 1);
    glScalef(1.8, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
void drawW(){
  glPushMatrix();
    glTranslatef(1.0, 0, 0);
    glRotatef(70, 0, 0, 1);
    glScalef(1.75, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0.25, -0.5, 0);
    glRotatef(-75, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.25, -0.5, 0);
    glRotatef(75, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-1.0, 0, 0);
    glRotatef(-75, 0, 0, 1);
    glScalef(1.75, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
void drawX(){
  glPushMatrix();
    glRotatef(60, 0, 0, 1);
    glScalef(1.75, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-60, 0, 0, 1);
    glScalef(1.75, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
void drawY(){
  glPushMatrix();
    glTranslatef(0.45, 0.75, 0);
    glRotatef(60, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.45, 0.75, 0);
    glRotatef(-60, 0, 0, 1);
    glScalef(1, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -0.75, 0);
    glScalef(0.25, 1, 0.5);
    drawBox();
  glPopMatrix();
}
void drawZ(){
  glPushMatrix();
    glTranslatef(0, 1.5, 0);
    glScalef(1, 0.25, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glRotatef(-25, 0, 0, 1);
    glScalef(0.25, 1.75, 0.5);
    drawBox();
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(0, -1.5, 0);
    glScalef(1, 0.25, 0.5);
    drawBox();
  glPopMatrix();
}
