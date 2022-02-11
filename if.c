#include <stdio.h>
int main(){
    int i,j,k;
    i=2;j=3;
    if(j)
        j;
    else if(i)
        i++;
    else
        j++;

    if(j)
        i;
    else if(j)
        j++;
    else
        j=0;
    k=i+j;
    printf("%d\n",k);

    return 0;
}