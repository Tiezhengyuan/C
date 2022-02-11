#include <stdio.h>
#include <string.h>

int main(){
    int i;
    // array t[];
    // pattern: t[i] equal *(t+i)
    // t is equal pointer and store address of 1st value

    char s1[40];
    // string should be "" rather than ''
    strcpy(s1, "abc");
    printf("string: %c, %s, %d\n", *s1, s1, strlen(s1));

    // same s[]="ABCDE", s[2]="ABCDE", s[10]="ABCDE"
    char s3[5] = "ABCDE";
    printf("string: %s, %d\n", s3, strlen(s3));
    printf("string: 1st=%c, 1st=%c,5th=%c\n", *s3, s3[0],s3[4]);
    // wrong: out of bounds
    printf("string: 1st=%c, 1st=%c,5th=%c\n", s3[10], s3[-1],s3[-2]);
    // no error and no change on array
    s3[-1]='s';
    printf("s[-1]:%s\n", s3);


    // escape 
    char s4[]="\4", s5[]="\0", s6[]="\0\1\2\3\4";
    printf("claim string: <%s>, <%s>,<%s>\n", s4, s5,s6);
    printf("length: %d, %d,%d\n", strlen(s4), strlen(s5),strlen(s6));
    printf("string:%d, %d, %c", s4[3], s6[3], 'A'+s6[3]);
    return 0;
}