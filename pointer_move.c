#include <stdio.h>
#include <string.h>

int main(){
    int t[10]={1,2,3,4,5,6,7,8,9,10}, *p;
    printf("the first value: %d, %d\n", *t, t[0]);

    // default is on the first place
    // the same: p=&t[0];
    p=t;
    printf("value: %d\n", *p);

    // move pointer by array index
    p=&t[sizeof(t)/sizeof(int)-1];
    printf("move to the last value : %d\n", *p);
    p=&t[4];
    printf("move the value of t[4]: %d\n", *p);
    p=*(&t+1)-1;
    printf("move to the last value: %d\n", *p);
    p=&t[0];
    printf("move to the first value: %d\n", *p);

    //move pointer from current position 
    p+=2;
    printf("value: %d\n", *p);
    p+=p[-1];
    printf("value: %d\n", *p);
    p++;
    printf("value of *p++: %d\n", *p++);
    printf("value of *--p: %d\n", *--p);

    // get value without moving pointer
    // the index is relative index 
    printf("current value: %d\n", *p);
    printf("current value: %d\n", p[0]);
    printf("value of p[-1]: %d\n", p[-1]);
    printf("value of p[-1]: %d\n", *(p-1));
    printf("value of p[-3]: %d\n", p[-3]);
    printf("value of p[2]: %d\n", p[2]);
    printf("current value: %d\n", *p);

    // pointer to pointer
    int **k;
    // double pointer stores address of pointer
    k = &p;
    printf("value: %d\n", **k);
    return 0;
}