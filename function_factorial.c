#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int factorial(int n){
        if(n>1){
            return n*factorial(--n);
        }else{
            return 1;
        }
    }

int main(){
    /*
    int factorial(int n){
        int res = 1;
        while(n){
            res *= n--;
        }
        return res;
    }
    */


    int n=10;
    int res=factorial(n);
    printf("factorial of n=%d is %d\n",n, res);
    return 0;
}