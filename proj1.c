#include "Shape.h"

float width = 800; 
float height = 600;

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Clear Screen And Depth Buffer
  
  glMatrixMode( GL_PROJECTION );
  glLoadIdentity();
  int w = glutGet( GLUT_WINDOW_WIDTH );
  int h = glutGet( GLUT_WINDOW_HEIGHT );
  gluPerspective( 60, w / h, 0.1, 100 );

  glMatrixMode( GL_MODELVIEW );
  glLoadIdentity();
  gluLookAt ( 0, 0, -7, 0, 0, 0, 0, 1, 0);
  
  glPushMatrix();
    
    drawNumber(0);
  glPopMatrix();
  
  
  
  
  /*
  glPushMatrix();
  glColor3f(0.0, 1.0, 0.0);
  glTranslatef(0.5, 0.0, -0.5);
  glScalef(0.5, 0.5, 0.5); 
  drawBox();
  glPopMatrix();
  
  
  glPushMatrix();
  glColor3f(0.0, 0.0, 1.0);
  glTranslatef(-0.5, 0.0, -0.5);
  glScalef(0.5, 0.5, 0.5);
  drawBox();
  glPopMatrix();
  */
  glutSwapBuffers();
}

void init(void) {
  
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glEnable(GL_DEPTH_TEST);
     
}

void keyboard(unsigned char k, int x, int y){
	switch (k){
	case 27:
		exit(0);
	}
}

int main(int argc, char **argv) {


  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
  glutInitWindowSize(width, height);
  glutCreateWindow("HW1");
  glutInitWindowPosition(50, 50);
  
  glutDisplayFunc(display);
  //glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  init();
	glutMainLoop();
  
  return 0;
}
