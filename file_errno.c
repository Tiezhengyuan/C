#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>


int main(){
    int i;
    errno=0;
    for(i=0; i<140;++i){
        errno=i;
        printf("errno=%d: %s\n", i, strerror(errno));
    }

    return 0;
}