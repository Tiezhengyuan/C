#include <stdio.h>
#include <string.h>


//No return statement: undefined behavior
int f(void){
}

int f2(void){
    return "abc";
}
int main(){


    int i;
    // return unpredictable value in different systme of integer overflow.
    i=f2();
    printf("integer: %d\n", i);

    return 0;
}