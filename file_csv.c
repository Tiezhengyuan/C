#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    
    FILE *f = fopen("file", "w");
    fputs("1,John Adam,2010-10-01,M\n", f);
    fputs("2,Smith Howard,2012-08-12,M\n", f);
    fputs("3,Mary Carie,2000-01-22,F", f);
    fclose(f);

    struct ST{
        int id;
        char *name;
        char *date_birth;
        char *gender;
    } person[3];

    char p[100];
    f=fopen("file", "r");
    int i=0;
    while(!feof(f)){
        fgets(p,100, f);
        // printf("%s", p);
        char *token=strtok(p, ",");
        person[i].id= atoi(token);
        printf("id=%d\n", person[i].id);
        person[i].name=strtok(NULL, ",");
        person[i].date_birth=strtok(NULL, ",");
        person[i].gender=strtok(NULL, ",");
        i++;
    }
    fclose(f);
    free(p);


   
    return 0;
}