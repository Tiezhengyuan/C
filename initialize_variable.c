#include <stdio.h>
#include <string.h>

int func(){
    int a;
    return ++a;
}


int main(){
    
    printf("%d\n", func());

    return 0;
}