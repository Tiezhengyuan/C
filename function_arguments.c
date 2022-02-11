#include <stdio.h>
#include <string.h>

void func1(void){
    printf("no arugments\n");
}

void func2(int a, char b, char c[]){
    printf("a=%d, b=%c, c=%s\n",a,b, c);
}

int main(){
    int i;
    printf("integer: %d\n", i);
    func1();
    func2(1, 'c', "integer");

    func3();
    return 0;
}

void func3(void){

}