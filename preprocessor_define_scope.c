#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){
    int X=100;
    int a=X;
    a+=X;
    #define X 200
    a+=X;
    #undef X
    printf("%d", a);
    return 0;
}



