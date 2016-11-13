#include "function.h"

int main() {
  double eye[] = {10, 10, 10};
  double center[] = {0, 0, 0};
  double up[] = {0, 1, 0};
  double width[] = {20, 0};   // right, left
  double height[] = {20, 0};  // top, bottom
  double length[] = {1, 10}; // front, back

  viewNormalization(eye, center, up, width, height, length);
  JLLoadIdentity();
  JLTranslate(1,1,1);
  JLVertex(1,2,3);
  
  return 0;
}