#include <stdio.h>
#include <string.h>

int main(){
    char s[]="127.0.0.1";
    char sep[] =".";
    char *token=strtok(s,sep);
    while(token !=NULL){
        printf("%s,",token);
        token=strtok(NULL,sep);
    }
    
    return 0;
}