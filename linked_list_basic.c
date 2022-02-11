#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){
    struct Node{
        char *value;
        struct Node *next;
    };
    // one node
    struct Node *one = (struct Node *)malloc(sizeof(struct Node));
    one->value="A";
    one->next=NULL;
    printf("%s\n",one->value);

    // add one node on the top
    struct Node *top = (struct Node *)malloc(sizeof(struct Node));
    top->value = "B";
    top->next = one;
    printf("%s, %s\n",top->value, top->next->value);

    // append one node on the bottom
    struct Node *tail = (struct Node *)malloc(sizeof(struct Node));
    tail->value = "C";
    one->next= tail;
    tail->next = NULL;
    printf("%s, %s\n",tail->value);

    puts("print linked list");
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr=top;
    while(1){
        printf("%s\n",ptr->value);
        ptr=ptr->next;
        if (ptr == NULL)
            break;
    }

    return 0;
}


