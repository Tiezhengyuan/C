#include <stdio.h>
#include <string.h>

int main(){
    char first_name[50], last_name[50], name[100];

    printf("Enter your first name: ");
    fgets(first_name, sizeof(first_name), stdin);
    // should remove last eleme '\0'
    first_name[strlen(first_name)-1]='\0';
    printf("Enter your last name: ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strlen(last_name)-1]='\0';

    strcpy(name, first_name);
    // '' is illegal
    //name should be initialized
    strcat(name, " ");
    strcat(name, last_name);
    printf("Full name: %s\n", name);
    return 0;
}