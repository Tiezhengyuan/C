#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);
    
    char s[] = "ABC";
    char *p=s;
    for(;*p;p++){
        printf("%c,", *p);
    }
    p-=strlen(s);
    printf("==%s\n",p);
    return 0;
}