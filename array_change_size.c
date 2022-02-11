#include <stdio.h>
#include <string.h>

int main(){

    struct element{
        int value;
        struct element *next;
    };

    struct element * new_arr(int a[], int len){
        struct element arr[3];
        arr[2].value = a[2];
        arr[2].next = NULL;
        for(int i=len-2; i>=0; i--){
            printf("%d\n", a[i]);
            arr[i].value = a[i];
            arr[i].next = &arr[i+1];
        }
        printf("##%d,%d\n", arr[0].value, arr[1].next->value);
        return arr;    
    }

    int a[]={1,2,3};
    struct element arr=new_arr(a, sizeof(a)/sizeof(a[0]));
    printf("==%d\n", arr[0].value);
    return 0;
}