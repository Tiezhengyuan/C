
#include <stdio.h>
int main()
{
    int a[2] = {1, 2};
    void *ptr = &a;
    printf("%d\n", sizeof(ptr));
    ptr = ptr + sizeof(int);
    printf("%d, %d\n", sizeof(ptr),*(int *)ptr);
    return 0;
}