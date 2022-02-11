#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float rectangle_area(float x, float y){
    return x*y;
}
float triangle_area(float e, float h){
    return e*h/2;
}

int main(void)
{
    float (*ptr) (float, float);
    ptr = rectangle_area;
    printf("%.2f\n", ptr(3, 3));

    ptr = &triangle_area;
    printf("%.2f\n", ptr(3, 3));

    return 0;
}



