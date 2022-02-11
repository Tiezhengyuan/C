#include <stdio.h>
#include <string.h>

int main(){
    int *p;
    printf("%d\n", sizeof(p));
    //pattern: int *ptr
    // "t" is an array with 10 ineger pointers
    int *t[10];
    int a=1;
    t[0]=&a;
    // “u” is the variable name of the pointer
    //  which can point to an array of 10 integers.
    int (*u)[10];
    int b[]={1,2,3,4,5,6,7,8,9,10};
    u=&a;
    printf("t=%d, u=%d\n", sizeof(t), sizeof(u));

    return 0;
}