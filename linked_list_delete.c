#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.c"



int main(void){
    char data[5][10] = {"A", "B", "C","D", "E"};
    struct Node *ptr = CreateList(5,10, data);
    struct Node * new_ptr;

    // delete the last node
    new_ptr = DeleteLastNode(ptr);
    PrintList(new_ptr);


    // delete by index
    // new_ptr = DeleteNodeByIndex(ptr, 0);
    // PrintList(new_ptr);
    // new_ptr = DeleteNodeByIndex(ptr, 1);
    // PrintList(new_ptr);
    // new_ptr = DeleteNodeByIndex(ptr, 4);
    // PrintList(new_ptr);

    // delete by value
    // new_ptr = DeleteNodeByValue(ptr, "A");
    // PrintList(new_ptr);
    // new_ptr = DeleteNodeByValue(ptr, "D");
    // PrintList(new_ptr);
    // new_ptr = DeleteNodeByValue(ptr, "E");
    // PrintList(new_ptr);

    return 0;
}
