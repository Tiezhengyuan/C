#include <stdio.h>

int main()
{
    int a, b;
    float c;
    b=4;
    // integer without inital is assigned to very large number
    printf("%d/%d; %f\n", a, b, a/b);
    // float without initial is assinged to vary small number
    printf("%f/%d; %f\n", c, b, c/b);

    // priority: return 0.00
    printf("%f\n", 1/2%2);

    //integer in fractional
    a=10/3;
    printf("a is integer, a=10/3= %d\n", a);
    printf("1/2\%2 in integer= %d\n", 1/2%2);
    printf("1/2\%2 in float= %f\n", 1/2%2);

    int t;
    // wrong t=08;
    printf("%d\n", t);
    return 0;
}