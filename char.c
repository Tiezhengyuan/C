#include <stdio.h>

int main()
{
    char c;
    c='A';
    c+=('Z'-'A');
    c+=' ';
    c=('z'-'a');
    printf("%d, %c\n", c, c);

    // 
    int i=100;
    i=(i==100)+(i!=101);
    printf("%d\n",i);

    // c='\'; is wrong
    c='a';
    c-=' ';
    printf("%d:%d, %c\n",'a', ' ',c);

    return 0;
}