#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linked_list.c"



int main(void){
    char data[][10] = {"A", "B", "C","D"};
    struct Node *ptr = CreateList(4,10, data);
    struct Node * new_ptr;

    // update value
    ChangeValue(ptr, "cc", 1);
    PrintList(ptr);
    ChangeValue(ptr, "dd", -1);
    PrintList(ptr);


    // switch two nodes
    // SwitchNode(ptr, 0,2);
    // PrintList(ptr); 

    // update value
    // struct Node *new_ptr = UpdateValue(ptr, "abc", 1);
    // PrintList(new_ptr);

    // append value
    // AddValue(ptr, "abc");
    // PrintList(ptr);

    // insert value
    // struct Node *new_ptr;
    // new_ptr = InsertNode(ptr, "abc", 0);
    // PrintList(new_ptr);
    // new_ptr = InsertNode(ptr, "abc", 1);
    // PrintList(new_ptr);
    // new_ptr = InsertNode(ptr, "abc", 2);
    // PrintList(new_ptr);
    // new_ptr = InsertNode(ptr, "abc", 5);
    // PrintList(new_ptr);
    // new_ptr = InsertNode(ptr, "abc", -5);
    // PrintList(new_ptr);


    free(ptr);
    free(data);
    free(new_ptr);
    return 0;
}


