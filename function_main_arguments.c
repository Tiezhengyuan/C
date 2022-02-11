#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    if(argc==2){
        float x = atof(argv[1]);
        float square = x*x;
        printf("square of %.2f is %.2f", x, square);
    }else{
        puts("Usage: ./function_main_arguments.exe <edge length>");
    }
    return 0;
}