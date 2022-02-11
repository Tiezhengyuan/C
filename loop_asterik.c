#include <stdio.h>

int main()
{
	int i,line, n;
	line=9;
	for(i=1;i<=line;i++){
	    printf("*");
	    for(n=1;n<i;n++){
	        printf(" ");
	    }
	    printf("*\n");
	}
	for(i=line;i>=1;i--){
	    printf("*");
	    int s=i-1;
	    for(n=1;n<=s;n++){
	        printf(" ");
	    }
	    printf("*\n");
	}
	return 0;
}