#include <stdio.h>
#include <string.h>

int main(){
    int i, *tp, sum=0;

    // initialize the pointer or cause segement fault
    // malloc() allocation of unused memory block
    tp = (int *) malloc(5*sizeof(int));
    //assign values
    for(i=0; i<5; i++){
        tp[i] = i;
        printf("integer: %d\n", tp[i]);
    }
    sum=0;
    for(i=0; i<5; i++)
        sum += tp[i];

    free(tp);

    

    return 0;
}