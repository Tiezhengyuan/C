#include <stdio.h>
#include <string.h>

int main(){

    char * combine_str(char *s1, char *s2){
        char *s = (char *) malloc(20*sizeof(char));
        int i=0;
        while(*s1&&*s2){
            *s++=*s1;
            *s++=*s2;
            i+=2;
            printf("%c%c,", *s1++,*s2++);
        }
        *s='\0';
        s-=i;
        printf("==%s\n", s);
        return s;
    }

    void func(char *p){
        while(*p){
            printf("%c", *p++);
        }
    }
    char s1[]="abc";
    char s2[]="XYZ";
    char *p = combine_str(s1,s2);
    printf("%s\n", p);
    func(p);
    //free memory
    free(s1);
    free(s2);
    free(p); 
    return 0;
}