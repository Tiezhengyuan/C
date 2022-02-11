#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    FILE *f;
    int i;
    f=fopen("f", "wb");
    fclose(f);
    f=fopen("f", "rb");
    // set file position to the given offset
    fseek(f, 0, SEEK_END);
    //current value of the position indicator
    i = ftell(f);
    fclose(f);
    printf("%d\n", i);

    return 0;
}