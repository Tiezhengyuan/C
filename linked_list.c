#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct Node{
    char *value;
    struct Node *next;
};

struct Node *CreateList(int row, int col, char arr[row][col]){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    int i=row-1;
    ptr->value=arr[i];
    ptr->next=NULL;
    for(i=row-2;i>=0;i--){
        // printf("%s\n", arr[i]);
        struct Node *new=(struct Node *)malloc(sizeof(struct Node));
        new->value = arr[i];
        new->next= ptr;
        ptr=new;
    }
    return ptr;
};

void PrintList(struct Node *ptr){
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    current = ptr;
    do{
        printf("%s\t", current->value);
        current = current->next; 
    }while(current != NULL);
    printf("\n");
};

char * GetValue(struct Node *ptr, int index){
    struct Node *current=(struct Node*)malloc(sizeof(struct Node));
    current=ptr;
    int i=0;
    do{
        // printf("%d:%s\n", i, current->value);
        if(i==index){
            return current->value;
        }
        current = current->next;
        i++;
    }while(current != NULL);
    return "\0";
};


int FindValue(struct Node *ptr, char *value){
    int i=0;
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    current = ptr;
    do{
        if( strcmp(current->value, value) == 0 ){
            return i;
            break;
        }
        current = current->next;
        i++;
    }while(current != NULL);
    return -1;
};


struct Node * GetLastNode(struct Node * ptr){
    struct Node *tail = (struct Node *)malloc(sizeof(struct Node));
    tail=ptr;
    while(tail->next != NULL){
        tail=tail->next;
    }
    // printf("%s\n", tail->value);
    return tail;
}

int AddValue(struct Node *ptr, char *value){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->value = value;
    new_node->next = NULL;
    struct Node *tail = GetLastNode(ptr);
    tail->next = new_node;
    return ptr;
}


struct Node *InsertNode(struct Node *ptr, char *value, int index){
    struct Node * new = (struct Node *) malloc(sizeof(struct Node));
    new->value = value;
    // put it on the top
    if(index<=0){
        new->next = ptr;
        ptr=new;
    }
    // put it in the middle
    else{
        struct Node * before = (struct Node *) malloc(sizeof(struct Node));
        struct Node * current = (struct Node *) malloc(sizeof(struct Node));
        current = ptr;
        for(int i=0; i<=index; i++){
            if( (i+1)==index ){
                before=current;
                printf("%d:%s\n", i, before->value);
            }
            else if( i==index ){
                new->next = current;
                before->next = new;
                break;
            }
            current = current->next;
            if(current->next == NULL){
                AddValue(ptr, value);
                break;
            }
        }
    }
    return ptr;
}

struct Node * UpdateValue(struct Node *ptr, char *value, int index){
    struct Node * current = (struct Node *) malloc(sizeof(struct Node));
    current = ptr;
    if(index < 0){
        index = 0;
    }
    int i=0;
    while(1){
        if(i==index){
            current->value = value;
            break;
        }
        current = current->next;
        if(current->next == NULL){
            break;
        }
        i++;
    }
    return ptr;
}


struct Node *SwitchNode(struct Node *ptr, int a, int b)
{
    if(a>=0 && b>=0 && a!=b)
    {
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        struct Node * a_switch = (struct Node *)malloc(sizeof(struct Node));
        struct Node * b_switch = (struct Node *)malloc(sizeof(struct Node));
        struct Node * current = (struct Node *)malloc(sizeof(struct Node));
        current = ptr;
        int i=0;
        while(1)
        {
            if(i==a){
                a_switch=current;
            }else if (i==b){
                b_switch = current;
                // switch value
                char *tmp_value = a_switch->value;
                a_switch->value = b_switch->value;
                b_switch->value = tmp_value;
                break;
            }
            current = current->next;
            if(current->next == NULL)
                break;
            i++;
        }
        free(current);
    }
    return ptr;
}

struct Node *ChangeValue(struct Node *ptr, char *value, int index)
{
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    current = ptr;
    for(int i=0; i<=index; i++)
    {
        if(index==i){
            current->value = value;
            break;
        }
        current = current->next;
        if(current->next==NULL)
            break;
    }
    return ptr;
}

int GetLength(struct Node *ptr)
{
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    current = ptr;
    int len=1;
    while(current->next != NULL){
        current = current->next;
        len++;
    }
    return len;
}

struct Node *ConcatList(struct Node *ptr, struct Node *ptr1)
{
    struct Node *current = GetLastNode(ptr);
    current->next = ptr1;
    return ptr;
}


struct Node *MergeList(struct Node *ptr, struct Node *pt1)
{
    struct Node *current=(struct Node *)malloc(sizeof(struct Node));
    current = ptr;
    struct Node *a_current=(struct Node *)malloc(sizeof(struct Node));
    a_current = ptr;
    struct Node *a=(struct Node *)malloc(sizeof(struct Node));
    a = ptr;
    struct Node *b_current=(struct Node *)malloc(sizeof(struct Node));
    b_current = pt1;
    struct Node *b=(struct Node *)malloc(sizeof(struct Node));
    b = pt1;

    int i=0;
    while(a->next != NULL && b->next != NULL){
        // dock the next position before change
        a = a->next;
        b = b->next;
        // change links
        b_current->next = a_current->next;
        current->next = b_current;
        current=current->next;
        current=current->next;
        // move to the dock
        a_current = a;
        b_current = b;
        i++;
    };
    // printf("%s,%s\n", a->value, b->value);
    // ptr1 is shorter
    if(b->next != NULL){
        // printf("%s,%s,%s\n", a->value, b_current->value, current->value);
        current->next = b->next;
    }
    // ptr1 is longer
    else{
        b_current->next = a_current->next;
        current->next = b_current;
        current=current->next;
        current=current->next;
    }
    return ptr;
}

struct Node *ReverseList(struct Node *ptr)
{
    struct Node *current=(struct Node *)malloc(sizeof(struct Node));
    current = ptr;

    struct Node *new=(struct Node *)malloc(sizeof(struct Node));
    new->value = current->value;
    new->next = NULL;
    while(current->next != NULL){
        current= current->next;
        struct Node *next=(struct Node *)malloc(sizeof(struct Node));
        next->value = current->value;
        next->next = new;
        new = next;
    }
    return new;
}


struct Node *SubList(struct Node *ptr, int a, int b)
{
    struct Node *current=(struct Node *)malloc(sizeof(struct Node));
    current = ptr;

    int i=0;
    struct Node *new=(struct Node *)malloc(sizeof(struct Node));
    do{
        if(i>b){
            break;
        }else if(i==a){
            new->value = current->value;
            new->next = NULL;
        }else if(i>a&&i<=b){
            AddValue(new, current->value);
        }
        current=current->next;
        i++;
    }while(current->next != NULL);
    return new;
}


struct Node * DeleteNodeByValue(struct Node *ptr, char * value)
{
    struct Node *before = (struct Node *)malloc(sizeof(struct Node));
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    before = ptr;
    // match the first one
    if(strcmp(ptr->value, value) == 0){
        before = before->next;
        return before;
    }
    // if match sth in the middle
    current = before->next;
    while(current != NULL){
        // printf("%s\n", current->value);
        if(strcmp(current->value, value)==0){
            before->next=current->next;
            return ptr;
        }
        before = before->next;
        current = current->next;
    };
    return ptr;
}

struct Node * DeleteNodeByIndex(struct Node *ptr, int index)
{
    struct Node *before = (struct Node *)malloc(sizeof(struct Node));
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    before = ptr;
    // match the first one
    if(index == 0){
        before = before->next;
        return before;
    }
    // if match sth in the middle
    int i = 1;
    current = before->next;
    while(index>=1 && current != NULL){
        // printf("%s\n", current->value);
        if(index==i){
            before->next=current->next;
            return ptr;
        }
        before = before->next;
        current = current->next;
        i++;
    };
    return ptr;
}

struct Node * DeleteLastNode(struct Node *ptr)
{
    struct Node *before = (struct Node *)malloc(sizeof(struct Node));
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    before = ptr;
    // only one item
    if(ptr->next==NULL){
        free(ptr);
        return current;
    }

    current = before->next;
    while(1){
        if(current->next==NULL){
            before->next=NULL;
            return ptr;
        }
        before = before->next;
        current = current->next;
    };
    return ptr;
}