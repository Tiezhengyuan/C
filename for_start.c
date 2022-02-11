#include <stdio.h>
#include <string.h>

int main(){
    int i=-3, j=0;
    for(i++;i++;i++){
        j--;
    }
    printf("%d, %d, %d\n", i,j, i-j);

    /*


    i=-3, j=0;
    for(i++;i++;i++){
        j--;
    }
    printf("%d, %d, %d\n", i,j, i-j);
    */
    return 0;
}