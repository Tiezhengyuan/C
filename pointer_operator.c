#include <stdio.h>
#include <string.h>

int main(){

    int x,y,z;
    x=10;
    y=++x;
    z=x++;
    printf("value: %d, %d, %d\n", x, y,z);

    // operator precedence
    // ++ -- * & are same level

    int a[] = {1,2,4,6,8};
    int *p=a;

    int value = *p;
    printf("value: %d, %d\n", value, *p);
    ++p;
    printf("value: %d\n", *p);
    p++;
    printf("value: %d\n", *p);


    //value=*(++p)
    value = *++p;
    printf("value: %d, %d\n", value, *p);

    // #######
    //value=*p and *p++
    value = *p++;
    printf("value: %d, %d\n", value, *p);

    //*p=*p+1 then value=*p
    value = ++*p;
    printf("value: %d, %d\n", value, *p);
    return 0;
}