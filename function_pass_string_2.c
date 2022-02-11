#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);
    void func(char *p){
        int i=1;
        while(*p){
            printf("%d=%c, ", i, *p);
            i++;
            p++;

        }
    }
    char s[20] = "good";
    func(s);
    return 0;
}