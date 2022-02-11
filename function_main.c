#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    printf("number of args=%d\n", argc-1);
    printf("exe path:%s\n", argv[0]);
    for(i = 1; i < argc; i++)
        printf("args=%s\n", argv[i]);
    return 0;
}