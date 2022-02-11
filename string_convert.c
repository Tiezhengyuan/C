#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    // convert integer to string
    int i = 123;
    int ii =i;
    char ic[3];
    itoa(ii,ic,10);
    printf("int=%d, str=%s\n", i, ic);

    //convert string to integer
    char a[]="456";
    int x = atoi(a);
    printf("int=%d, str=%s\n", x, a);

    return 0;
}