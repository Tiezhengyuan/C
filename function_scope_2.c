#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int X=0;
#define X 100
int f1(void){
    return X;
}
#undef X
int f2(void){
    return X;
}
int main(void){
    int s;
    s=f1()+f2();
    printf("%d", s);
    return 0;
}



