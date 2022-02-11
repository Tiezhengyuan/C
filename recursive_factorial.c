#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int n){
    if (n<=1) {
        return 1;
    }else{
        return n*factorial(n-1);
    } 
}

int main(void){

    int n = 5;
    int res = factorial(n);  
    printf("%d\n", res);
    return 0;
}


