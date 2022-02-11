#include <stdio.h>

int main()
{
    // char a[][] is not working
	char a[4][6]={{'E','m','m','a',' ',' '}, {'O','l','i','v','i','a'},
            {'N','o','a','h',' ',' '}, {'L','i','a','m',' ',' '}};
    int b[]={4,6,4,4};
    int m,n;
    for(m=3;m>=0;m--){
        for(n=0;n<b[m];n++){
            // a[m] is not working
            printf("%c", a[m][n]);
        }
        printf("\n");
    }
	return 0;
}