#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    FILE *f = fopen("f", "wt");
    char s[]="abc";
    fprintf(f, "%s\n", s);
    fprintf(f, "%s", s);
    fclose(f);

    f=fopen("f", "r");
    int ch = getc(f);
    while(ch != EOF){
        putchar(ch);
        ch=getc(f);
    }
    if(feof(f)){
        printf("<End\n");
    }
    fclose(f);
    return 0;
}