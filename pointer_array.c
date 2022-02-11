#include <stdio.h>
int main(){
    int i[]={11,22,33}, *p;
    p=i;
    // get value of element
    printf("address of variable=%d, value of pointer=%d\n", p, *(p+1));
    // update elements
    *(p+0)=1;
    p[1]=2;
    // p[1] is equivaluen to *(p+1)
    printf("value of pointer=%d, %d\n", p[1], *(p+0));
    // 
    printf("address of pointer=%d, %d\n", p+0, &p[0]);
    printf("address of pointer=%d, %d\n", p+1, &p[1]);

    // loop of pointer
    int m;
    for(m=0;m<3;m++){
        // two patterns: *p[m] is not working
        printf("%d, %d\n", *(p+m), p[m]);
    }

    // pointer of one element
    int *p1=&i[2];
    printf("%d, %d\n", *p1, *(p1-1));
    return 0;
}