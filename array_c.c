#include <stdio.h>
#include <string.h>

int main(){
    int i, t[4]={1,2,4,8};
    printf("integer: %d\n", i);

    for(i=0;i<2;i++)
        t[i]=t[3-i];
    printf("%d\n", t[2]);
    return 0;
}