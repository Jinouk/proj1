#include "Shape.h"
#include "stdlib.h"


// Azimuthal Coordinate Angle (0 to 2PI)
double theta = 0;
// Polar Coordinate Angle (0 to PI)
double phi = PI/2;
// Camera Radius
double cameraRadius = 10;

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Clear Screen And Depth Buffer
  
  glMatrixMode( GL_PROJECTION );
  glLoadIdentity();
  int w = glutGet( GLUT_WINDOW_WIDTH );
  int h = glutGet( GLUT_WINDOW_HEIGHT );
  gluPerspective( 60, w / h, 0.1, 100 );

  glMatrixMode( GL_MODELVIEW );
  glLoadIdentity();
  gluLookAt(cameraRadius * sin(theta) * sin(phi), cameraRadius * cos(phi), cameraRadius * cos(theta) * sin(phi), 0.0f, 0.0f,  0.0f, 0.0f, 1.0f,  0.0f);
  //gluLookAt(3,3,5, 0, 0, 0, 0, 1, 0); 
  
  glPushMatrix();
    glTranslatef(5, 0, 2); 
    drawG();
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-3, 0, 0);
    drawCube(1,0,0);
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
    case 'x':
      cameraRadius -= 0.5;
      break;
    case 'z':
      cameraRadius += 0.5;
      break;
  	case 27:
  		exit(0);
      break;
	}
}

void specialKey(int key, int x, int y) {

  float fraction = 0.1f;

  switch (key){
    case GLUT_KEY_LEFT:
      theta -= PI/ 16;
      break;
    case GLUT_KEY_RIGHT:
      theta += PI/16;
      break;
    case GLUT_KEY_UP:
      if(phi < PI) {
        phi += PI/16;
      }
      break;
    case GLUT_KEY_DOWN:
      if(phi > PI/16) {
        phi -= PI/16;
      } 
      break;
    }
}

int main(int argc, char **argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
  glutInitWindowSize(800, 800);
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
