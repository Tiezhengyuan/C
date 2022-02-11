#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    struct CHR{
        int lines;
        int whitespace;
        int characters;
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;
    } counts={0,0,0,0,0,0,0,0,0,0};

    FILE *file;
    char line[100];
    file = fopen("f:\\C\\file.txt", "rt");
    if(file == NULL){
        printf("Failed to open");
        exit(0);
    }


    while(fgets(line, sizeof(line), file)!=NULL){
        // printf("%s", line);
        counts.lines++;
        char *p = line;
        while (*p != '\n'){
            counts.characters++;
            switch(*p){
                case ' ':counts.whitespace++;break;
                case 'a':counts.a++;break;
                case 'b':counts.b++;break;
                case 'c':counts.c++;break;
                case 'd':counts.d++;break;
                case 'e':counts.e++;break;
                case 'f':counts.f++;break;
                case 'g':counts.g++;break;
            }
            // printf("<%c>\n", *p);
            p++;
        }
        free(p);
    }
    printf("Lines: %d\n", counts.lines);
    printf("Whitespaces: %d\n", counts.whitespace);
    printf("characters: %d\n", counts.characters);
    printf("Small letter: a : %d\n", counts.a);
    printf("Small letter: b : %d\n", counts.b);
    printf("Small letter: c : %d\n", counts.c);
    printf("Small letter: d : %d\n", counts.d);
    printf("Small letter: e : %d\n", counts.e);
    printf("Small letter: f : %d\n", counts.f);
    printf("Small letter: g : %d\n", counts.g);

    fclose(file);
    return 0;
}