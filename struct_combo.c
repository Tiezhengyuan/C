#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);
    struct BIRTH{
        int year;
        int month;
        int day;
    };
    struct STUDENT{
        char name[20];
        int age;
        struct BIRTH birth;
    };
    struct STUDENT s = {"good", 45, {2000,12,2}};
    printf("%s: %d\n", s.name, s.age);
    s.birth.year=2010;
    printf("%d-%d-%d\n", s.birth.year, s.birth.month, s.birth.day);
    return 0;
}