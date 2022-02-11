#include <stdio.h>
#include <string.h>

int main(){
    char *p="12345", *q=p-10;
    printf("p=%c, q=%d, %d, %d\n", *p, *q, q[13], q[14]);
    printf(" %d\n", q[14]-q[13]);

    int *x;
    int *(t[10]);
    int *y[10];
    printf("x=%d, y=%d\n", *t[0], *y[0]);


    return 0;
}