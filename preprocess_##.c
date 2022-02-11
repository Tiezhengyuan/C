#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CIT(X) #X
#define CNC(X,Y,Z) X##Y##Z
#define VAL 641221

int main(void){

    int i = CNC(64,12,21);
    int j = i+ VAL;
    char *s = CIT(i);

    printf("%d%s\n",j,s);
    return 0;
}



