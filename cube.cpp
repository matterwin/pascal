#include <math.h>
#include <iostream>

float A, B, C;
float x, y, z;

float calculateX(int i, int j, int k) {
  return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
         j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k) {
  return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
         j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
         i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) {
  return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateSurface(float pyX, float pyY, float pyZ, int ch){
  x = calculateX(pyX, pyY, pyZ); y = calculateY(pyX, pyY, pyZ); z = calculateZ(pyX, pyY, pyZ); 
}

int main() {
  std::cout << "Hello World!" << std::endl;
  return 0;
}
