#include <stdio.h>

int main()
{   
    float Float=4;
    int f = (int) Float;
    if(f>=1 & f<6){
        printf("good: %f\n", Float);
    }

    short h;
    int i;
    // 2 is forced as short. 1 is forced as long
    h=2l+1L;
    i=h;
    printf("%d", i);
	
	return 0;
}