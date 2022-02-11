#include <stdio.h>
#include <string.h>

int main(){
    
    struct house{
	    int number;
	    struct house *previous;
	    struct house *next;
    };
    struct house h[4];
    int n[]={1,3,5,7};
    for(int i=0; i<4; i++){
        h[i].number = n[i];
        if(i==0){
            h[i].previous = NULL;
        }else{
            h[i].previous = &h[i-1]; 
        }
        if(i==3){
            h[i].next = NULL;
        }else{
            h[i].next = &h[i+1];
        }

    }
    printf("current=%d, next=%d\n", h[0].number, h[0].next->number);
    printf("current=%d, previous=%d, next=%d\n", h[1].number,
        h[1].previous->number, h[1].next->number);
    printf("current=%d, previous=%d\n", h[3].number,h[3].previous->number);
    return 0;
}