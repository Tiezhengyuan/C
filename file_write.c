#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "factorial.h"


int main(){

    FILE *file;
    file = fopen("f:\\C\\file_out.txt", "wt");
    char lines[7][10]={"Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"};
    for(int i=0; i<7; i++) {
        printf("%s\n", lines[i]);
        // write string line by line
        fputs(lines[i], file);
        fputs("\n", file);
    }
    fclose(file);
    return 0;
}