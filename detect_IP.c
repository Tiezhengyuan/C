#include <stdio.h>

int main()
{   
    int part1, part2, part3, part4;
    part1=127;part2=0;
    part3=0;part4=1;
// 	scanf("%d", &part1);
// 	scanf("%d", &part2);
// 	scanf("%d", &part3);
// 	scanf("%d", &part4);
	
	printf("Human-readble IP address is : %d.%d.%d.%d\n", part1,part2,part3,part4);
	unsigned long int a;
	a= part1*256*256*256+part2*256*256+part3*256+part4;
	printf("IP address as a 32-bit number: %lu", a);
	return 0;
}