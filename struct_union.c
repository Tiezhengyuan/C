#include <stdio.h>
#include <string.h>



int main(){
    // int i;
    // printf("integer: %d\n", i);

    union SIZE{
        int a;
        float b;
    } s={3.3,6};
    printf("%d, %f\n", s.a, s.b);
    return 0;
}