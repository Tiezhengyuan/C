#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);

    for(int i=0,j=0; i<10&&j<10; i++){
        j+=i;
        printf("%d:%d, ",i,j);
    }

    int a[]={1,3,5,7,9};
    int b[]={0,2,4,6,8};
    return 0;
}