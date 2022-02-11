#include <stdio.h>
#include <string.h>

int main(){
    int i, n=28;
    char *p, *f;
    // here should be 27 rather than 26.
    // \0 will be added into the end
    char letters[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    f = letters;
    char res[100]={};

    p = (char *) malloc(n*sizeof(char));
    for(i=0; i<n; i++){

        // printf("%c,", *p);
        // move pointer to the beginning of the string
        if(*f == '\0'){ 
            f= &letters[0];
            // printf("=%d:%c=", *f, *f);
        }
        *p=*f;
        printf("%d:%c, ", i, *f);
        // move two pointers
        p++;
        f++;
        
    }
    printf("\n");
    return 0;
}