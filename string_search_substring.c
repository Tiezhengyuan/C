#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int SearchSubStr(char *p, char *sub){
    char *next=sub;
    int start=-1, end=-1, i=0;
    while(*p!='\0' && *next!='\0'){
        if(*p==*next){
            if(end==-1)
                start=i, end=0;
            printf("%d:%c\n", i, *p);
            next++, end++;
        }else{
            start=-1, end=-1, next=sub;
        }
        p++, i++;
    }
    p -= i;
    return start;
}


int main(void){
    char str[]="ABCDEF";
    char *ptr = str;
    char sub[]="CDEF";
    char *p2=sub;

    int i = SearchSubStr(ptr,p2);
    printf("%d=%c\n", i, *(ptr+i));

    return 0;
}


