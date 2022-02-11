#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Binary{
    int value;
    struct Binary *next;
};

struct Binary *DecimalToBinary(struct Binary *ptr, int i){
    struct Binary *new=(struct Binary *)malloc(sizeof(struct Binary));
    if(i==1){
        // printf("%d",i);
        new->value=1;
        new->next=ptr;
        return new;
    }else{
        int reminder = i%2;
        // printf("%d",reminder);
        new->value = reminder;
        new->next=ptr;
        return DecimalToBinary(new, i/2);
    }

}

int main(void){

    // decimal: 11101010
    int i=234;
    struct Binary *res=(struct Binary *)malloc(sizeof(struct Binary));
    struct Binary *ptr=(struct Binary *)malloc(sizeof(struct Binary));
    ptr->value = i%2;
    ptr->next=NULL;
    if(i>=2){
        res=DecimalToBinary(ptr, i/2);
    }
   
    while(res!=NULL){
        printf("%d",res->value);
        res=res->next;
    }
    

    return 0;
}


