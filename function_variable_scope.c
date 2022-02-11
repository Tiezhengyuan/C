#include <stdio.h>
#include <string.h>

// global variables
int a=10;

void func1(int data){
    // local variables
    int c=3;
    // a not defined in func1()
    // can't use b because b is defined in main()
    printf("func 1(): a=%d\n", a);
    a=20;
}

void func4(int data){
    int a=2;
    printf("func4(): a=%d\n", a);
    a=20;
}


void func3(int a){
    // a is defined as local variable
    // a++ can't add global a;
    a++;
}

void func5(){
    // printf("func5=%d\n", b);
}

int main(){
    // local
    int b=2;

    void func2(int data){
        int c=3;
        // a, b not defined in func1()
        printf("func 2(): a=%d, b=%d\n", a,b);
        a=11,b=22;
    }
    func1(a);
    printf("a=%d\n",a);
    func2(a);

    a=10;
    func3(a);
    printf("func3, a=%d\n",a);

    a=10;
    func4(a);
    printf("a=%d\n\n",a);
    // c can't be used outside of func1()
    printf("main():a=%d, b=%d\n", a,b);


    func5();
    return 0;
}