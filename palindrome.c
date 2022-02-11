#include <stdio.h>
#include <string.h>

int main(){
    // should be "" rather than '
    char *p="book";
    int str_len = strlen(p);
    // char *p is not working
    // char *p[100];
    // puts("Enter a string:");
    // fgets(p, 100, stdin);
    // int str_len = strlen(p)-1;
    printf("length of input string: %d\n", str_len);
    printf("string: %s\n", p);

    //char array should claim size
    char reverse[1];
    printf("initial pointer:%s\n", reverse);
    int i,m=0;
    for(i=str_len-1;i>=0;i--){
        reverse[m]=p[i];
        printf("%d-%c,%d-%c\n", i, p[i],m,reverse[m]);
        m++;
    }
    printf("reversed string: %s\n", reverse);
    return 0;
}