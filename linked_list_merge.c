#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.c"




int main(void){
    char data[3][10] = {"A", "B", "C"};
    struct Node *ptr = CreateList(3,10, data);
    // printf("%s%s%s\n", ptr->value,ptr->next->value,ptr->next->next->value);
    char data1[4][10] = {"a", "b", "c", "d"};
    struct Node *ptr1 = CreateList(4,10, data1);
    char data2[2][10] = {"a", "b"};
    struct Node *ptr2 = CreateList(2,10, data2);

    // merge two linked lists
    // MergeList(ptr,ptr1);
    // PrintList(ptr);
    MergeList(ptr,ptr2);
    PrintList(ptr);

    // cancatenate two linked lists
    // CancatList(ptr,ptr1);
    // PrintList(ptr);



    return 0;
}


