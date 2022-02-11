#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int variable;

void fun1(void) {
	variable = 1;
}

extern int variable;

void increment(void);

int main(void) {
	variable = 0;
	increment();
	printf("%d",variable);
	return 0;
}


