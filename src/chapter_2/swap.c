#include <stdio.h>

void swap(int *pa, int *pb) {
  // dereference pointer pa and assign value to t
  int t = *pa;
  // dereference pa and assigned dereference value of pb
  *pa = *pb;
  // dereference pb and assign value of t
  *pb = t;
}

int main(void) {
  int a = 21;
  int b = 17;

  // assigning references to pointers in function call
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}