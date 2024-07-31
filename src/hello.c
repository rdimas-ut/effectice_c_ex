// Following two lines are Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
// They behave as if the compiler replaced them with
// the contents on the specified files.
//
// <stdio.h> is where puts() is defined
// <stdlib.h> is where EXIT_SUCCESS macro is defined

int main(void) {
  puts("Hellow, World!");
  return EXIT_SUCCESS;
} 
