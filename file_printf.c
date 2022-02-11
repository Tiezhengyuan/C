#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    /*
    char s[]="ABC";
    char *p="DEF";
    int i=123;
    char c='\'';

    FILE *f;
    f=fopen("f", "wb");
    fprintf(f, "%d %s %s %c", i,s,p,c);
    int a = ftell(f);
    printf("%d\n",a);
    fclose(f);
    */

    FILE *f;
    f=fopen("f", "wb");
    char a[]="123";
    fprintf(f, "%s", a);
    int b = ftell(f);
    printf("%d\n",b);
    fclose(f);

    return 0;
}