#include <stdio.h>
int main(){
    int i=123, *p1;
    // store address of variable i into pointer p1
    p1 = &i;
    printf("value=%d,%d, address=%x, %x\n", *p1, i, p1, &i);
    // synchronize between variable and its pointer
    i=1;
    printf("value=%d,%d, address=%x, %x\n", *p1, i, p1, &i);
    // update value of pointer
    *p1=456;
    printf("value=%d,%d, address=%x, %x\n", *p1, i, p1, &i);
    
    // can't change address of pointer
    // p1 is integer variable
    p1=456;
    printf("value=%d, address=%x\n", p1, &p1);

    printf("%d\n", !p1);    
    if (!!p1) printf("pointer\n");


    return 0;
}