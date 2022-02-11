#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){

    int i;
    i=fprintf(stderr,"123");
    printf("%d", i);
    // printf("%d", i==EOF);
    return 0;
}