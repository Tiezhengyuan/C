#include <stdio.h>
#include <string.h>

int main(){
    int i, j, **pp;
    int row=9, col=9;

    pp = (int **) malloc(row*sizeof(int *));
    for(i=0;i<row;i++){
        pp[i] = (int *) malloc(col*sizeof(int));
        for(j=0;j<col;j++){
            pp[i][j]=(i+1)*(j+1);
            printf("%d ", pp[i][j]);
        }
        printf("\n");
    }
    
    


    return 0;
}