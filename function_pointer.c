#include <stdio.h>
#include <string.h>

char func(char *p){
    char a;
    a= (char *) malloc(10*sizeof(char));
    printf("%c\n", *p);
    return "A";
}

int main(){
    // int i;
    // printf("integer: %d\n", i);
    char s[]="yesterday";
    char *p = s;
    func(p);
    return 0;
}