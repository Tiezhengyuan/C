#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.c"



int main(void){
    char data[5][10] = {"A", "B", "C","D", "E"};
    struct Node *ptr = CreateList(5,10, data);
    struct Node * new_ptr;

    // sub linked list
    new_ptr = SubList(ptr, 1,3);
    PrintList(new_ptr);

    // reverse
    // new_ptr = ReverseList(ptr);
    // PrintList(new_ptr);
    
    return 0;
}
