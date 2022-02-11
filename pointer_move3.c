#include <stdio.h>
#include <string.h>

int main(){
    int t[]={1,2,3,4,5}, *p=t, *pp=t;
    printf("*p=%d\n", *p);
    // move pointer:
    //equivalent: p++, *p++, (*p)++;
    *p++;
    printf("*p=%d, *pp=%d\n", *p, *pp);
    (*p)++;
    printf("*p=%d, *pp=%d\n", *p, *pp);
    *p++;
    printf("%d\n", p[-1]);

    return 0;
}