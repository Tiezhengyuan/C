#include <stdio.h>
#include <string.h>

int main(){
    int i,j;

    // clare 2D char array
    char s[8][8] = {"RNBQKBNR", "PPPPPPPP","        ","        ",
        "        ","        ", "PPPPPPPP", "RNBQKBNR"};
    printf("%c, %d\n", s[0][2], sizeof(s[0]));
    int col=sizeof(s[0]);
    for(i=0;i<8;i++){
        for(j=0;j<col;j++){
            printf("%c", s[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}