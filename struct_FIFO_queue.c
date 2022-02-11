#include <stdio.h>
#include <string.h>

int main(){
    struct element{
	    int value;
	    struct element *next;
    };

    int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
    struct element e[10];
    for(int i=9; i>=0;i--){
        e[i].value = values[i];
        if(i==9){
            e[i].next =  NULL;
        }else{
            e[i].next = &e[i+1];
        }
        
    }
    
    void func(struct element *p, int t){
        printf("%d\n", p->value);
        if(p->value!=t){
            func(p->next, t);
        }
    }
    puts("First 5 values");
    func(&e[0],7);
    puts("First 9 values");
    func(&e[0],9);
    free(e);
    return 0;
}