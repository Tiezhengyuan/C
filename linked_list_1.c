#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    struct Node{
        char *value;
        struct Node *next;
    };
    
    struct Node *CreateList(char arr[][10], int size){
        struct Node *new = (struct Node *) malloc(sizeof(struct Node)*size);
        for(int i = size-1; i>=0; i--){
            // printf("%s\n", data[i]);
            new[i].value = arr[i];
            new[i].next = i==(size-1) ? NULL : &new[i+1];
            /*if( i<(size-1) )
                printf("%s, %s\n", new[i].value, new[i].next->value);
            else
                printf("%s\n", new[i].value);*/
        };
        return new;
    }

    void PrintList(struct Node *ptr){
        while(ptr->next != NULL){
            printf("%s, %s\n", ptr->value, ptr->next->value);   
            ptr++; 
        }
        printf("%s\n", ptr->value);
    }

    char * GetValue(struct Node *ptr, int index){
        char *str = (ptr+index)->value;
        return str;
    }

    int FindValue(struct Node *ptr, char *value){
        int i=0;
        while(1){
            printf("%s,%s\n", ptr->value, value);
            if (strcmp(ptr->value, value)==0){
                return i;
                break;
            }
            // printf("%s\n", (ptr+i)->next->value);
            if( ptr->next == NULL)
                break;
            ptr++;
            i++;
        }
        return -1;
    }

    int AddValue(struct Node *ptr, char *value){
        struct Node new = {value, NULL};
        int i = 0;
        while(1){
            if((ptr+i)->next == NULL){
                (ptr+i)->next = &new;
                break;
            }
            i++;
        }
        ptr[i] = new;
        return ptr;
    }

    int CalLength(struct Node *ptr){
        int i = 0;
        while( (ptr+i)->next != NULL ){
            i++;
        }
        if ( (ptr+i)->next == NULL )
            i++;
        return i;
    }

int main(void){

    // convert 
    char data[][10] = {"ABC", "EFG", "HIJ"};
    int size = sizeof(data)/sizeof(data[0]);
    struct Node *ptr = CreateList(data, size);

    struct Node *InsertValue(struct Node *ptr, char *value, int index){
        struct Node *new;
        new = (struct Node *)malloc(sizeof(struct Node));
        new->value =value;
        new->next = ptr;
        // printf("%s, %s\n", new->value, new->next->value);
        ptr=new;
        PrintList(ptr);
        return ptr;
    }
    struct Node *new_ptr = InsertValue(ptr, "abc", 0);


    // print values
    // PrintList(ptr);

    // char *v = GetValue(ptr,1);
    // printf("%s\n", v);

    // int a= FindValue(ptr, "HIJ");
    // printf("%d\n", a);
    // printf("%d\n", FindValue(ptr, "abc"));

    // AddValue(ptr, "abc");
    // PrintList(ptr);

    // int len = CalLength(ptr);

    return 0;
}


