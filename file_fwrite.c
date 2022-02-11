#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    FILE *f;
    f=fopen("file_write.txt", "wt");
    char a[]="abcdef";
    printf("%d\n", sizeof(a));
    fwrite(a, 3,2, f);
    fclose(f);

    return 0;
}