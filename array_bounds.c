#include <stdio.h>
#include <string.h>

int main(){
    int i,j;
    // illegal: int x[];
    //out of bounds;
    // size 6, but length is 4
    // a[4] and a[6] is 0
    int a[6]={1,2,3,4};
    for(i=0;i<15;i++){
        // a[i] access a memory location containing a garbage value
        //Segmentation fault: access memory which is not owned by array
        printf("array value:%d, %d\n", i,a[i]);
    }

    a[10] = 11;
    printf("a[10] is %d\n",a[10]);

    // not initialize: return value of that address 
    // or address if that address is not assgined.
    // no initial: int b[]={};
    int b[4];
    for(i=0;i<6;i++){
        printf("no initial:%d, %d\n", i,b[i]);
    }

    // initialize with 4 size: return 0
    int c[4]={};
    for(i=0;i<6;i++){
        printf("initial array:%d, %d\n", i,c[i]);
    }

    return 0;
}