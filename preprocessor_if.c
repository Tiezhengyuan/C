#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SYM
#define BOL 100
#define SMB SYM##BOL
#define SBL #BOL
#undef SYM
 
int main(void){
    printf("%d\n", SYM);
    #ifdef SYM
        int i=100;
        #ifdef SYMBOL
            int j=i+200;
        #else
            int j=i+222;
        #endif
    #else
        int i=200;
        #ifdef SYMBOL
            int j=i+100;
        #else
            int j=i+111;
        #endif
    #endif
    printf("%d\n",i+j);
    return 0;
}



