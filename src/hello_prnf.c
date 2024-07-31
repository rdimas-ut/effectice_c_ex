// Following two lines are Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
// They behave as if the compiler replaced them with
// the contents on the specified files.
//
// <stdio.h> is where puts() is defined
// <stdlib.h> is where EXIT_SUCCESS macro is defined

// An improvement over the regular hello world
// Handles the return of puts
int main(void) {
  
  if(printf("%s/n", "Hellow, World!") < 0) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
