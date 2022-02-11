#include <stdio.h>
#include <string.h>

int main(){

    char *p = (char *) malloc(11*sizeof(char));
    for(int i=0; i<10; i++){
        *p++ ='A'+i;
        printf("%c",*(p-1));
    }
    *p='\0';
    p-=10;
    printf("==%s\n", p);
    return 0;
}