#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PR(x,y) printf(x,y);
    // printf("In %s, file %s, before the Triangle function\n", \
    // x,y);
int main(void)
{
    char a[10]="normal";
    PR(__LINE__, __FILE__);
    return 0;
}

