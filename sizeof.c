#include <stdio.h>

int main(void) {

    printf("This computing environment uses:\n");
    
    printf("%d byte for chars\n", sizeof(char));
    char c='c';
    printf("%d byte for char variables\n", sizeof(c));

    printf("%d bytes for shorts\n", sizeof(short int));
    short i=345;
    printf("%d bytes for short variables\n", sizeof(i));

    printf("%d bytes for ints\n", sizeof(int));
    printf("%d bytes for longs\n", sizeof(long int));
    printf("%d bytes for long longs\n", sizeof(long long int));
    printf("%d bytes for floats\n", sizeof(float));
    printf("%d bytes for doubles\n", sizeof(double));
    
    printf("%d bytes for pointers\n", sizeof(int *));
    int *p;
    printf("%d bytes for pointer variables\n", sizeof(p));
    return 0;
}