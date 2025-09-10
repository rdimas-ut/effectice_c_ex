#include <stdio.h>

int first_f(void) {
    return 1;
}

int twice_f(void) {
    return 2;
}

int three_f(void) {
    return 3;
}

int main(void) {
    int (*a_fptr[3])(void) = {&first_f, &twice_f, &three_f};
    printf("First Function: %d \n", (a_fptr[0])());
    printf("Second Function: %d \n", (a_fptr[1])());
    printf("Third Function: %d \n", (a_fptr[2])());
}