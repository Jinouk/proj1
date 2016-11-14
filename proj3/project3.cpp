#include "function.h"

int main() {
  double eye[] = {1, 1, 1};
  double center[] = {0, 0, 0};
  double up[] = {0, 1, 0};
  double width[] = {10, -10};   // right, left
  double height[] = {10, -10};  // top, bottom
  double length[] = {1, 10}; // front, back

  viewNormalization(eye, center, up, width, height, length);
  JLLoadIdentity();
  
  
  JLScale(0.1, 0.1, 0.1);
  JLBegin(triangle);
    JLVertex(1,0,0);
    JLVertex(2,3,4);
    JLVertex(4,4,4);
  JLEnd();
  
  return 0;
}
