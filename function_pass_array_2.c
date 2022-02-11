#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);

    void func(int arr[], int len){
        int i;
        for(i=0; i<len; i++){
            arr[i] ++;
            printf("%d, ", arr[i]);
        }
    }
    int arr[]={1,2,3};
    func(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}