#include <stdio.h>
int main(){
    int i, a[4]={255,255,255,255};
    for(i=0;i<3;i++){
        printf("%d.", a[i]);
    }
    printf("%d\n", a[3]);
    return 0;
}