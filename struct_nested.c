#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct S1{
    int p1,p2;
};
struct S2{
    int p1;
    struct S1 s1;
    int p2;
};
int main(void){
    int s=0;
    struct S2 s2 = {1, 2, 3, 4};
    struct S2 *p;
    p = (struct S2 *) malloc(sizeof(struct S2));
    *p = s2;
    s2.p1 = 0;
    printf("%d,%d\n", p->p1, s2.p1);
    s=p->p1+s2.p1+p->p2+p->s1.p2;
    free(p);
    printf("%d\n", s);
    return 0;
}



