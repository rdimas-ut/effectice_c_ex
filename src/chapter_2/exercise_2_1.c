#include <stdio.h>
// static makes this variable not be redeclared
// persists after function has been called
static unsigned int counter = 0;

unsigned int retrieve(void) {
  return counter;
}

void increment(void) {
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
