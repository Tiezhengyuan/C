
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int variable = 2;
void increment(void){
    variable++;
}

int variable;
void increment(void);

int main(void){
    variable = 0;
    increment();
    printf("%d\n", variable);
    return 0;
}
