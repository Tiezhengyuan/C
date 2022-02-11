#include <stdio.h>
#include <string.h>

int main(){
    int i;
    // end of string: '\0'
    char t[20]="ABCDEFGHJK";
    printf("len=%d, <%c>\n",strlen(t), t[3]);
    t[3]='\0';
    printf("len=%d, <%c>\n",strlen(t), t[3]);
    strcat(t, "abc");
    printf("len=%d, <%s>\n",strlen(t), t);

    char s4[10]="ABCDE";
    // slice substring
    printf("+2=%s, +10=%s, -2=%s, ", s4+2, s4+5, s4-2);
    printf("%s\n", s4);
    strcat(s4+2, "ABCDE");
    printf("%s, %d\n", s4, s4[0]-s4[2]);

    // 
    char *p, s5[5]="ABCDE";
    p=&s5[0];
    for(int i=0; i<5;i++) {
        // printf("%c,", *p);
        p++;
    }

    /* A string is a contiguous sequence of 
        characters terminated by and 
        including the first null character. */
    char s6[]="ABCD";
    printf("string len=%d, size=%d\n", strlen(s6), sizeof(s6));
    p=&s6[0];
    while(*p != '\0') {
        printf("%c,", *p);
        p++;
    }  

    char s7[]="ABCD\0";
    printf("%s: len=%d, size=%d\n", s7, strlen(s7), sizeof(s7));
    char s8[]="ABCD0";
    printf("%s: len=%d, size=%d\n", s8, strlen(s8), sizeof(s8));
    char s9[]="ABCD\1\n\0";
    printf("%s: len=%d, size=%d\n", s9, strlen(s9), sizeof(s9));
    printf("%s, %d\n", s9, strlen(s9+2));

    // out of bounds
    char s10[2]="ABCD";
    printf("s10:<%s> len=%d, size=%d\n", s10, strlen(s10), sizeof(s10));

    return 0;
}