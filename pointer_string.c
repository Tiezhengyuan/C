#include <stdio.h>
int main(){
    int i;
    //character s n a p e \0 will be stored
    // char i[10] = "snape";
    // 
    // char p[20];
    // strcpy(p,'yesterday');

    //string pointer
    char *ip= "255.255.255.255";
    printf("the entire string: %s\n", ip);
    printf("the 1st char: %c\n", *ip);
    printf("the 2nd char: %c\n", ip[1]);
    printf("the 3rd char: %c\n", *(ip+2));
    printf("Last 3 parts: ");
    for(i=4;i<15;i++){
        printf("%c", *(ip+i));
    }
    
    while(*ip != '\0'){
        printf("%c,", *ip++);
    }
    return 0;
}