#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    FILE *f;
    int i;
    f=fopen("f.txt", "wb");
    printf("<><%s>\n",f);
    // size 2 bytes, number of elements is 1
    int x= fwrite(f,2,1, f);
    i = ftell(f);
    fclose(f);
    printf("%d\n", i);


    f=fopen("f.txt", "rb");
    // move pointer to the end
    fseek(f, 2, SEEK_END);
    //current value of the position indicator
    i = ftell(f);
    fclose(f);
    printf("%d\n", i);

    return 0;
}