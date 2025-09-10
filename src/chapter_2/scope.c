#include <stdio.h>

int j;

void f(int i) {	        // block of i begins
  int j = 1;            // block of j beings; hides file-scope j
  i++;
  for (int i = 0; i < 2; i++) { // block scope of loop-local i begins
    int j = 2;          // block scope of the inner j begin; hides outer j
    printf("%d\n", j);  // inner j is in scope, prints f
  }                     // block scope of the inner i and j ends
  printf("%d\n", j);    // the outer j is in scope, prints i
}  // the block scope of i and j ends

void g(int j);          // j has function prototype scope; hides file-scope j

int main(void) {
  f(2);
  return 0;
}