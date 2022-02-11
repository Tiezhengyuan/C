#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    
    struct ST{
        int id;
        char *name;
        char *date_birth;
        char *gender;
    } person[3];
    char names[3][100]={
        "1,John Adam,2010-10-01,M",
        "2,Smith Howard,2012-08-12,M",
        "3,Mary Carie,2000-01-22,F"
    };
    for(int i=0; i<3; i++){
        char *token = strtok(names[i], ",");
        person[i].id= atoi(token);
        person[i].name=strtok(NULL, ",");
        person[i].date_birth=strtok(NULL, ",");
        person[i].gender=strtok(NULL, ",");
        printf("%d, %s, %s, %s\n", person[i].id, person[i].name,
        person[i].date_birth, person[i].gender);
    }
    return 0;
}