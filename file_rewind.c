#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    FILE *f = fopen("f", "w+b");
    fputs("123abc", f);
    rewind(f);
    fputs("3",f);
    fclose(f);

    char i[10];
    f=fopen("f", "rt");
    fscanf(f, "%s", &i);
    fclose(f);
    printf("%s\n",i);

    return 0;
}