#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);
    char *mystrcat(char *destination, char *source) {
        char *res;
        for(res = destination; *destination++; ) ;
        for(--destination; (*destination++ = *source++); ) ;
        return res;
    }
    char s1[]="abc";
    char s2[]="XYZ";
    char *p = mystrcat(s1, s2);
    printf("%s", p);

    return 0;
}