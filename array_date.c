#include <stdio.h>
#include <string.h>

int main(){
    int i=7;
    printf("integer: %d\n", i);

    char week[7][9]={"Monday", "Tuesday", "Wednesday", 
        "Thursday", "Friday", "Saturday", "Sunday"};
    if (i<=7 && i>=1){
        char *p = &week[i-1][0];
        while (*p != '\0'){
            printf("%c", *p);
            p++;
        }
        printf("\n");
    }
    
    return 0;
}