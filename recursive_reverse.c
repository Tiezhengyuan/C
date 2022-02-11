#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ReverseDNA(char *ptr, char *rev){
    if(*ptr=='\0'){
        return ++rev;
    }else{
        *rev=*ptr;
        // printf("%c", *ptr);
        return ReverseDNA(++ptr, --rev);
    }
}

int main(void){
    
    char dna[]="AAATTTCCCGGG";
    char *ptr =dna;
    int len = strlen(dna);
    printf("len=%d\n",len);
    char *rev = (char *)malloc((len+1)*sizeof(char));
    *(rev+len+1)='\0';
    rev=ReverseDNA(ptr, rev+len);
    printf("%s\n", ptr);
    printf("%s\n", rev);
    free(rev);
    free(dna);
    return 0;
}

