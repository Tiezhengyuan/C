#include <stdio.h>

int main()
{
    // && precde ||    
    int i=1,j=-2,k;
    printf("%d\n", j>00);
    k=(i>=0)&&(j>=00)||(i<=0)&&(j<=0);
    printf("%d\n", k);

    k=(i>=0)||(j>=00)&&(i<=0)||(j<=0);
    printf("%d\n", k);

    i=0;j=1;
    //Note: priority + - precdede << >>
    k = i<<j+j<<i;
    printf("0<<1=%d, 1<<0=%d, k=%d\n", i<<j, j<<i, k);


    printf("1&1=%d, 0&0=%d, 1&0=%d\n", 1&1, 0&0, 1&0);
    printf("1|1=%d, 0|0=%d, 1|0=%d\n", 1|1, 0|0, 1|0);

    i=1;j=0;
    k=i&j;
    k|=!!k; 
    printf("%d\n",k);

    return 0;
}