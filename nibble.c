#include <stdio.h>
#include <math.h>

int main()
{
	int a,i;
	a=255;
	i=7;
	int arr[8];
	while(a>0){
	    int r= a%2;
	    arr[i]=r;
	    i--;
	    a= (int) a/2;
        // printf("%d->%d\n", a, r);
	}
	int m, high, low;
	high=0;low=0;
	for(m=0;m<4;m++){
	    if(arr[m]==1){
	        high += pow(2,(3-m));
	       // printf("%d-.%d\n", 3-m, high);
	    }
	    int n=m+4;
	    if(arr[n]==1){
	        low += pow(2,(7-n));
	        //printf("%d-.%d\n", 7-n, low);
	    }

	}
	printf("H nibble: %d\n",high);
	printf("L nibble: %d\n",low);
	return 0;
}