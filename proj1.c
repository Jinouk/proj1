#include "Shape.h"
#include "stdlib.h"

// angle of rotation for the camera direction
float angle=0.0;
// actual vector representing the camera's direction
float lx=0.0f,lz=-1.0f;
// XZ position of the camera
float x=0.0f,z=5.0f;

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Clear Screen And Depth Buffer
  
  glMatrixMode( GL_PROJECTION );
  glLoadIdentity();
  int w = glutGet( GLUT_WINDOW_WIDTH );
  int h = glutGet( GLUT_WINDOW_HEIGHT );
  gluPerspective( 60, w / h, 0.1, 100 );

  glMatrixMode( GL_MODELVIEW );
  glLoadIdentity();
  gluLookAt(  x,    1.0f,  z, x+lx, 1.0f,  z+lz, 0.0f, 1.0f,  0.0f);
  //gluLookAt(3,3,5, 0, 0, 0, 0, 1, 0); 
  
  glPushMatrix();
    drawNumber(0);
  glPopMatrix();
  
  glutSwapBuffers();
}

void init(void) {
  
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glEnable(GL_DEPTH_TEST);
     
}

void changeSize(int w, int h) {

  // Prevent a divide by zero, when window is too short
  // (you cant make a window of zero width).
  if (h == 0)
    h = 1;

  float ratio =  w * 1.0 / h;

  // Use the Projection Matrix
  glMatrixMode(GL_PROJECTION);

  // Reset Matrix
  glLoadIdentity();

  // Set the viewport to be the entire window
  glViewport(0, 0, w, h);

  // Set the correct perspective.
  gluPerspective(45.0f, ratio, 0.1f, 100.0f);

  // Get Back to the Modelview
  glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y){
	
  switch (key){
  	case 27:
  		exit(0);
      break;
	}
}

void specialKey(int key, int x, int y) {

  float fraction = 0.1f;

  switch (key){
    case GLUT_KEY_LEFT:
      angle -= 0.01f;
      lx = sin(angle);
      lz = -cos(angle);
      break;
    case GLUT_KEY_RIGHT:
      angle += 0.01f;
      lx = sin(angle);
      lz = -cos(angle);
      break;
    case GLUT_KEY_UP:
      x += lx * fraction;
      z += lz * fraction;
      break;
    case GLUT_KEY_DOWN:
      x -= lx * fraction;
      z -= lz * fraction;
      break;
    }
}

int main(int argc, char **argv) {


  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
  glutInitWindowSize(800, 600);
  glutCreateWindow("HW1");
  glutInitWindowPosition(50, 50);
  
  
  glutDisplayFunc(display);
  //glutReshapeFunc(changeSize);
  glutIdleFunc(display);
  glutKeyboardFunc(keyboard);
  glutSpecialUpFunc(specialKey);

  init();
	glutMainLoop();
  
  return 0;
}
