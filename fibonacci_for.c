#include <stdio.h>

int main()
{
	int n=10, t, i;
	int arr[n];
	t=2;
    arr[0]=1;
    arr[1]=1;
	if(n>2){
	    int a=0, b=1;
	    for(i=2;i<=n;i++){
	        t=a+b;
	        printf("%d\n", t);
            arr[i]=t;
	        a=b;
	        b=t;
	    }
	}

// 	printf("total of fibonacci of %d is %d\n", n, t);

    // print odd
    for(i=0;i<n;i+=2){
        printf("%d\n", arr[i]);
    }
    // print even
    for(i=1;i<n;i+=2){
        printf("%d\n", arr[i]);
    }

	return 0;
}