#include <stdio.h>

void increment(void) {
  // static makes this variable not be redeclared
  // persists after function has been called
  static unsigned int counter = 0;
  counter ++;
  printf("%d ", counter);
}

int main(void) {

  for (int i = 0; i < 5; i++) {
    increment();
    printf("%d ", retrieve());
  }
  return 0;
}
