#include <stdio.h>
#include <string.h>

int main(){
    struct element {
        int value;
    };

    struct element * func(struct element *p){
        struct element  *pp = (struct element *) malloc(sizeof(struct element));
        pp->value = 20;
        return pp;
    }

    struct element z = {10};
    struct element *pp = func(&z);
    printf("%d, %d\n", pp->value, z.value);

    return 0;
}