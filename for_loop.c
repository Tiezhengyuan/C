#include <stdio.h>

int main()
{
    int i,j;

    // commond syntax
    i=0;j=100;
    for(i=0;i<j;i++){
        j/=3;
        // printf("%d, %d\n", i,j);
    }
    //#### Note: i=3 rather than i=2
    // printf("##%d, %d\n", i,j);

    // end condition: j==0
    i=0; j=100;
    for(i=0;j;i++){
        j/=3;
        // printf("%d, %d\n", i,j);
    }


    // that is dead end if no conditions are set
    i=0; j=100;
    int n=0;
    for(;;){
        j/=3;
        // printf("%d, %d\n", i,j);
        n++;
        if(n==10) break;
    }

    //step i=i+3
    i=0;j=100;
    for(i=0;i<j;i+=3){
        j/=3;
        // printf("%d, %d\n", i,j);
    }

    //use j=j/3 as steps rather than i
    i=0;j=100;
    for(i=0;i<j;j/=3){
        j/=3;
        // printf("%d, %d\n", i,j);
    }

    // loop: !i => i==1
    i=0;j=0;
    for(i=0;!i;i++){
        j++;
        printf("%d, %d\n", i,j);
    }
    printf("%d, %d\n", i,j);

    //out of bounds;
    int a[]={1,2,3,4};
    for(i=0;i<10;i++){
        printf("for:%d, %d\n", i,a[i]);
    }
    return 0;
}