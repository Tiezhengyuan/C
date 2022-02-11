#include <stdio.h>
#include <string.h>

int main(){

    int row=3, col=3;
    char *p[row];
    p[0]=(char *)malloc(col*sizeof(char));
    p[0][0]='A';
    p[0][1]='B';
    p[0][2]='C';
    p[1]="abc";

    printf("%c, %s\n", p[0][0], p[1]);


    return 0;
}