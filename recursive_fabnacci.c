#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fab(int n){
    if(n==1){
        return 1;
    }else if (n==2){
        return 2;
    }else{
        return fab(n-1) + fab(n-2);
    }
}

int main(void){
    int i = 10;
    int res = fab(i);
    printf("%d\n", res);
    
    return 0;
}


