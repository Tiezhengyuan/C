#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.c"




int main(void){
    char data[3][10] = {"ABC", "EFG", "HIJ"};
    struct Node *ptr = CreateList(3,10, data);
    // printf("%s%s%s\n", ptr->value,ptr->next->value,ptr->next->next->value);

    PrintList(ptr);
    return 0;
}


