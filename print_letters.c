#include <stdio.h>
int main(){
    int i;
    char letters[26];
    letters[0]='a';
    for(i=1;i<26;i++){
        letters[i]=letters[i-1]+1;
    }


    for(i=25;i>=0;i--){
        printf("%c\n", letters[i]);
    }

    char b[5]={'g','r','e','a','t'};
    for(i=0;i<5;i++){
        printf("%c", b[i]);
    }

    
    return 0;
}