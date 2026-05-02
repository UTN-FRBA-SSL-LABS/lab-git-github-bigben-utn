#include <stdio.h>
#include "operaciones.h"

int main(void) {
    const int num_a = 2;
    const int num_b = 3;
    printf("2 + 3    = %d\n", sumar(&num_a, &num_b));
    printf("7 - 4    = %d\n", restar(7, 4));
    printf("3 * 5    = %d\n", multiplicar(3, 5));
    printf("4 es par = %d\n", esPar(4));
    printf("7 es par = %d\n", esPar(7));
    return 0;
}
