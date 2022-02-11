#include <stdio.h>

int main()
{   
    int a,b;

    // 
    b=!!a;
    printf("%d, %d\n", a,b);
	
    // 
    a=15;b=22;
    // && AND
    printf("%d && %d = %d\n", a,b, a&&b);
    printf("%d || %d = %d\n", a,b, a||b);

    // The & operator will operate with each pair of corresponding bits separately
    // 01111&10110=110
    printf("%d & %d = %d\n", a,b, a&b);
    // 01111|10110=11111
    printf("%d | %d = %d\n", a,b, a|b);
    // 01111|10110=11001
    printf("%d ^ %d = %d\n", a,b, a^b);
    printf("%d^1= %d, ^0=%d\n", a, a^1, a^0);
    // 
    printf("%d !%d\n", b, !b);
    // ~n=-(n+1)
    printf("%d ~%d\n", b, ~b);
    int b1= b>>2;
    printf("%d >>%d\n", b, b1);
    b1= b<<1;
    printf("%d >>%d\n", b, b1);

    int i=-1,j=-i;
    int w1,w2;
    w1=(i>0)&&(j<0)||(i<0)&&(j>0);
    printf("%d",w1);
    // precdence: ^, |, && then ||
    w2=(i<=0)&&(j>=0)||(i>=0)&&(j<=0);
    printf("%d\n",w2);

    i=0;j=1;
    int k;
    //Note: priority + - precdede << >>
    k=i<<j+j<<i;
    printf("0<<1=%d, 1<<0=%d, k=%d\n", i<<j, j<<i, k);


	return 0;
}