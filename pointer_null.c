#include <stdio.h>
#include <string.h>

int main(){
    const char* from = "john@openedg.org";
    char *t = (char *) malloc(20);
    strncpy(t, from+5, 11);
    printf("%s\n",t);
    return 0;
}