#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    // check if illgal positiv integer
    int is_digits(char *ip){
        //remove empty string
        if(*ip=='\0') return 0;
        //remove string with 0,namely "0012"
        if(*ip=='0'&&*(ip+1)!='\0') return 0;
        while(*ip!='\0'){
            // ACSII 0-9: 48-57
            if(*ip<48 || *ip>57){
                return 0;
            }
            ip++;
        }
        return 1;
    }
    
    char ip[] = "127.0.0.1";
    char sep[] = ".";
    char *token = strtok(ip, sep);
    while(token != NULL){
        if (is_digits(token)){
            int ip_part = atoi(token);
            if (ip_part<=255 && ip_part>=0){
                printf("%s->%d\n", token, ip_part);
            }
        }
        token = strtok(NULL, sep);
    }
    
    return 0;
}