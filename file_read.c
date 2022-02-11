#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){


    char line[10], lines[2][10];
    // read mode, text mode
    FILE *file;
    errno = 0;
    file = fopen("f:\\C\\dfile.txt", "rt");
    // exist if file not found
    if(file == NULL){
        printf("errno=%d\n", errno);
        printf("%s\n", strerror(errno));
        exit(0);
    }
    printf("errno=%d\n", errno);
    // read line by line
    int i=0;
    while(fgets(line, sizeof(line), file) != NULL){
        // trim trailing newline character
        strcpy(lines[i], strtok(line, "\n"));
        printf("%s\n", lines[i]);
        i++;
    }
    fclose(file);

    return 0;
}