#include <stdio.h>
#include <string.h>

int main(){
    int i;

    char s1[40];
    // string should be "" rather than ''
    strcpy(s1, "abc");
    printf("string: %s, %d\n", s1, strlen(s1));

    // size of array could be changed
    char s2[2];
    strcpy(s2, "abcd");
    printf("string: %s, %d\n", s2, strlen(s2));

    char t[3];
    printf("%d, %d, %d\n", sizeof(char), sizeof(t), sizeof(t[0]));
    return 0;
}