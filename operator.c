#include <stdio.h>

int main()
{   
    int i,j,k;
    i=4;
    j=5;
    k=i--*++j;
    printf("k=%d, i=%d, j=%d\n", k, i, j);
    return 0;
}