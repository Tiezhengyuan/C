#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    void print(char *c){
        printf("%c", *c);
    }
    print("test");
    return 0;
}