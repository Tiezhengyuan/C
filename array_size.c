#include <stdio.h>
#include <string.h>

int main(){

    int i=2;
    printf("int=%d, size=%d\n", sizeof(int), sizeof(i));

    int a[]={0,1,2,3};
    printf("size=%d, length=%d\n", sizeof(a), sizeof(a)/sizeof(a[0]));
    a[4]=4;
    printf("%d\n", a[4]);
    printf("%d\n", a[5]);
    printf("size=%d, length=%d\n", sizeof(a), sizeof(a)/sizeof(a[0]));


    return 0;
}