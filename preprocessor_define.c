#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define F1(X) X*X
#define F2(X) (X)*(X)
#define F3(X) ((X)*X)
int main(void){
    int i=1,j=2,k=3;
    int s = F1(i+j)+F2(i-j)+F3(i+k);
    printf("%d", s);
    return 0;
}