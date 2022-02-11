#include <stdio.h>
#include <string.h>

int main(){
    int x,y,z;
    // prefix or postfix operator
    // ++x and x++ are similar. but ++x is more efficient
    x=10;
    printf("value: %d\n", x);
    // same as x+=1 or x=++x;
    ++x;
    printf("value: %d\n", x);
    x++;
    printf("value: %d\n", x);

    //x=x+1 and y=x+1
    y=++x;
    // z=x and then x=x+1
    z=x++;
    printf("value: %d, %d, %d\n", x, y,z);

    //first --x; then x=x-x=0; finally x--;So x=-1
    x=--x-x--;
    printf("value: %d\n", x);


    x=1;
    // v= 1*5+2*3=11, x=3
    // readable: value= (x++ * 5) + (x++ * 3); 
    int value= x++ * 5 + x++ * 3;
    printf("value: %d, %d", x, value);

    return 0;
}