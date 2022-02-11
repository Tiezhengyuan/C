#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.c"




int main(void){
    char data[3][10] = {"ABC", "EFG", "HIJ"};
    struct Node *ptr = CreateList(3,10, data);
    // printf("%s%s%s\n", ptr->value,ptr->next->value,ptr->next->next->value);

    // get length of the linked list
    // int len=GetLength(ptr);
    // printf("%d\n", len);

    // get value by index 
    // char *value=GetValue(ptr,2);
    // printf("2d=%s\n", value);
    // char *un=GetValue(ptr,30);
    // printf("un=%s\n", un);

    // get index by value
    // int index = FindValue(ptr, "EFG");
    // printf("%d\n", index);

    // get value of the last node
    // GetLastNode(ptr);



    return 0;
}


