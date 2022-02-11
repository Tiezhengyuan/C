#include <stdio.h>
#include <string.h>

int main(){
    int a[]={4,1,3,4,5,6,7,0,12};
    int *p;
    p=a;
    printf("value of pointer %d\n", *p);

    while(*p != 0){
        p++;
    }
    printf("value of pointer %d\n", *p);
    printf("number before zero: %d\n", p-a);
    return 0;
}