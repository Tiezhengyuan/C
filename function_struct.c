#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);
    struct STR{
        int age;
        char gender;
        char *name;
    };
    void func(struct STR *p){
        printf("%d,%c,%s\n", p->age,p->gender, p->name);
        p->age=34;
        p->gender ='M';
        p->name = "good";
        printf("%d,%c,%s\n", p->age,p->gender, p->name);
    }   
    struct STR s={30, 'F', "yes"};
    func(&s);

    return 0;
}