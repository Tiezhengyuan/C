#include <stdio.h>
#include <string.h>

int main(){
    // int i;
    // printf("integer: %d\n", i);

    void func(char *str){
        for(int i=0; i<strlen(str); i++){
            printf("%c", str[i]);
        }
        for(int j=strlen(str)-2; j>=0; j--){
            printf("%c", str[j]);
        }
    }
    char str[]="abcde";
    func(str);
    return 0;
}