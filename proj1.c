#include "Shape.h"
#include "stdlib.h"


// Azimuthal Coordinate Angle (0 to 2PI)
GLfloat theta = 0;   
// Polar Coordinate Angle (0 to PI)
GLfloat phi = 6 * PI/16;
// Camera Radius
GLfloat cameraRadius = 25;

GLfloat light_position[3];
GLfloat lightAngle = 18 * PI/36;
GLfloat lightHeight = 10;

GLfloat rightRotateSlow = 0;
GLfloat leftRotateSlow = 0;
GLfloat rightRotatefast = 0;
GLfloat leftRotateFast = 0;

GLfloat fastRotate = 3;
GLfloat slowRotate = 1;

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Clear Screen And Depth Buffer
  
  glMatrixMode( GL_PROJECTION );
  glLoadIdentity();
  int w = glutGet( GLUT_WINDOW_WIDTH );
  int h = glutGet( GLUT_WINDOW_HEIGHT );
  gluPerspective( 60, w / h, 0.1, 100 );


  GLfloat ambient_and_diffuse[] = {1.0, 1.0, 1.0, 1.0};
  GLfloat specular[] = {1.0, 1.0, 1.0, 1.0};
  GLfloat shininess[] = {10.0};
  //GLfloat light_position[] = {2.0, 2.0, 2.0, 0.0};

  light_position[0] = 20*cos(lightAngle);
  light_position[1] = lightHeight;
  light_position[2] = 20*sin(lightAngle);


  glMatrixMode( GL_MODELVIEW );
  glLoadIdentity();
  gluLookAt(cameraRadius * sin(theta) * sin(phi), cameraRadius * cos(phi), cameraRadius * cos(theta) * sin(phi), 0.0f, 0.0f,  0.0f, 0.0f, 1.0f,  0.0f);
  
  glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
  //glLightfv(GL_LIGHT0, GL_SHININESS, shininess);
  glLightfv(GL_LIGHT0, GL_DIFFUSE, ambient_and_diffuse);
  glLightfv(GL_LIGHT0, GL_POSITION, light_position);
  glEnable(GL_LIGHT0);
  glEnable(GL_LIGHTING);
  
  // Yellow
  glPushMatrix();
    glRotatef(-40, 0, 1, 0);
    glRotatef(90, 0, 0, 1);
    glRotatef(leftRotateSlow, 0, 1, 0);
    drawCube(0.8, 0.5, 0, 3, 7, 't', 'h', 'P', 'Z');
  glPopMatrix();
  
  // Dark Green
  glPushMatrix();
    glTranslatef(4, 0, -5);
    glRotatef(rightRotatefast, 0, 1, 0);
    drawCube(0, 0.5, 0, 2, 0, 'c', 'h', 'K', 'D');
  glPopMatrix();
  
  // Light Green
  glPushMatrix();
    glTranslatef(3, 0, 3);
    glRotatef(90, 0, 0, 1);
    glRotatef(leftRotateFast, 0, 1, 0);
    drawCube(0.5, 0.8, 0.2, 6, 1, 'h', 't', 'G', 'S');
  glPopMatrix();
  
  // Purple
  glPushMatrix();
    glTranslatef(-4, 0, 4);
    glRotatef(-90, 1, 0, 0);
    glRotatef(rightRotateSlow, 0, 1, 0);
    drawCube(0.7, 0.2, 0.5, 5, 9, 'h', 'c', 'U', 'Y');
  glPopMatrix();
  
  // Red
  glPushMatrix();
    glTranslatef(-6, 6.3, -7);
    glRotatef(rightRotateSlow, 0, 1, 0);
    drawCube(1, 0, 0, 1, 4, 't', 'c', 'W', 'X');
  glPopMatrix();
  
  // Dark Blue
  glPushMatrix();
    glTranslatef(4, 2.5, -5);
    glRotatef(180, 0, 0, 1);
    drawCube(0.0, 0.0, 0.24, 8, 4, 'h', 'c', 'F', 'A');
  glPopMatrix();
  
  // Hexagon
  GLfloat hexagonColor[] = {0.4, 0.25, 0.20, 1};
  glPushMatrix();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, hexagonColor);
    glTranslatef(-6, 2, -7);
    glRotatef(90, 1, 0, 0);
    drawPolygon('h', 4 ,6);
  glPopMatrix();
  
  // 2
  GLfloat twoColor[] = {0, 1, 0.5, 1};
  glPushMatrix();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, twoColor);
    glTranslatef(-7, 1, -2);
    glRotatef(-20, 0, 1, 0);
    drawNumber(2);
  glPopMatrix();
  
  // 5
  GLfloat fiveColor[] = {0, 1, 1, 1};
  glPushMatrix();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, fiveColor);
    glTranslatef(1, 1, -4);
    drawNumber(5);
  glPopMatrix();
  
  // 0
  GLfloat zeroColor[] = {1, 1, 0, 1};
  glPushMatrix();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, zeroColor);
    glTranslatef(2, 4, -9);
    glScalef(2,2,2);
    drawNumber(0);
  glPopMatrix();
  
  // Floor 
  GLfloat floorColor[] = {0.1, 0.9, 0.5, 1};
  glPushMatrix();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, floorColor);
    glTranslatef(0, -2, 0);
    glScalef(50,0.5, 50);
    drawBox();
  glPopMatrix();
  
  GLfloat triangleColor[] = {1, 0.2, 1, 1};
  glPushMatrix();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, triangleColor);
    glTranslatef(-15 ,2,-5);
    glRotatef(90, 0, 1, 0);
    glScalef(3,3,3);
    drawPolygon('t', 3, 3);
  glPopMatrix();
  
  
  glPushMatrix();
    glTranslatef(light_position[0], light_position[1], light_position[2]);
    glScalef(0.25,0.25,0.25);
    drawBox();
  glPopMatrix();
  glutSwapBuffers();

  if(rightRotateSlow == 360) 
    rightRotateSlow = 0;

  if(leftRotateSlow == 0)
    leftRotateSlow = 360;

  if(rightRotatefast == 360)
    rightRotatefast = 0;

  if(leftRotateFast == 0)
    leftRotateFast = 360;
  
  rightRotateSlow += slowRotate;
  leftRotateSlow -= slowRotate;

  rightRotatefast += fastRotate;
  leftRotateFast -= fastRotate;

  glutPostRedisplay();
}

void init(void) {
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glShadeModel(GL_SMOOTH);
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
    case 'a':
      lightAngle -= PI / 36;
      break;
    case 's':
      lightAngle += PI / 36;
      break;
  	case 27:
  		exit(0);
      break;
	}
  glutPostRedisplay();
}

void specialKey(int key, int x, int y) {
  switch (key){
    case GLUT_KEY_LEFT:
      theta -= PI/ 16;
      break;
    case GLUT_KEY_RIGHT:
      theta += PI/16;
      break;
    case GLUT_KEY_UP:
      if(phi > 2 * PI/16) {
        phi -= PI/16;
      } 
      break;
    case GLUT_KEY_DOWN:
      if(phi < PI - PI/16) {
        phi += PI/16;
      }
      break;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
  glutInitWindowSize(800, 800);
  glutCreateWindow("HW1");
  glutInitWindowPosition(50, 50);
  
  init();
  glutDisplayFunc(display);
  //glutReshapeFunc(changeSize);
  glutIdleFunc(display);
  glutKeyboardFunc(keyboard);
  glutSpecialUpFunc(specialKey);

  
	glutMainLoop();
  
  return 0;
}
