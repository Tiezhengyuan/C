#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int compare_matrics(int *m1, int *m2, int m, int n){
        int i, j, equal=2, greater=0, smaller=0;
        for(i=0; i<m;i++) {
            for(j=0; j<n;j++) {
                int x= *((m1+i*n) + j);
                int y= *((m2+i*n) + j);
                if(x==y){equal=0;}
                else if (x<y){smaller=-1;}
                else if (x>y){greater=1;}
                // printf("%d,%d\n", x, y);
                
            }
        }
        if(equal==0&&greater==0&&smaller==0){
            printf("Both matrices are equal\n");
            return 0;
        }
        else if(equal==2&&greater==1&&smaller==0){
            printf("Matrix A are larger\n");
            return 1;
        }
        else if(equal==2&&greater==0&&smaller==-1){
            printf("Matrix B are larger\n");
            return -1;
        }else{
            printf("Unknown");
        }
        return 2;       
    }

    int row=2, col=3;
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{1,2,3},{4,5,6}};
    int c[2][3]={4,5,6,7,8,9};
    int d[2][3]={0,0,0,1,2,3};

    compare_matrics(a, b, row, col);
    compare_matrics(a, c, row, col);
    compare_matrics(a, d, row, col);
    return 0;
}