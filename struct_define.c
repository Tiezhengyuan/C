#include <stdio.h>
#include <string.h>



int main(){
    struct STUDENT{
        char *name;
        int age
    };
    struct STUDENT *p;
    p= (struct STUDENT *) malloc(sizeof(struct STUDENT));
    (*p).age=10;
    (*p).name="good";
    printf("%s,%d\n", p->name, p->age);
    return 0;
}