#include <stdio.h>
int main(){
    int i,j=0;
    i=3;
    /* switch-case: select an entrance and execute statements
      till go to the end of switch or a break statement.
    */


    // don't forget to add break statement
    switch(i){
        //branches are scanned in the same order as they are defined.
        // the value must not be an expression
        case 1: printf("January\n");break;
        case 2: printf("February\n");break;
        case 3: printf("March\n");
        default: printf("wrong\n");
    }
    printf("%d\n", i);

    // case section should always ends with break statement
    i=2,j=0;
    switch(i){
        case 0: j++;break;
        // continuse to case 4 becaue not break statement
        case 2: j++;
        case 4: j++;break;
        // execute default if not case conditions
        // deault is not required but it is suggested to
        // default:break;
        default: j--;
    }
    printf("i=%d,j=%d\n", i,j);

    i=6,j=0;
    switch(i){
        case 0: j++;break;
        // run default, case 2, and case 4 till break
        default: j--;
        case 2: j++;
        case 4: j++;break;
        case 1: j++;
    }
    printf("i=%d,j=%d\n", i,j);

    int a=1;
    switch(a){
        printf("output:");
        break;
        case 1: puts("A");
        case 2: puts("B");
    }
    return 0;
}