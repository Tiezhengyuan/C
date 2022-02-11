#include <stdio.h>
#include <string.h>
#include <float.h>

double getMaxOfThree(double a, double b, double c){
    printf("input: %f,%f,%f\n", a,b,c);
    double m = a;
    if(b>m){        m = b;    }
    if(c>m){        m = c;    }
    return m;
}

double getMaxValue(double *pt){
    double m = DBL_MIN;
    while(*pt != '\0'){
        if(*pt>m) m=*pt; 
        pt++;
    }
    return m;
}

double getMaxArr(double arr[]){
    double m = arr[0];
    double *pt = arr;
    *pt=arr[1];
    while(*pt != '\0'){
        if(*pt>m) m=*pt; 
        pt++;
    }
    return m;
}
int main(){
    // pass float variable
    double res = getMaxOfThree(3.5,6.7,7.0);
    printf("integer: %f\n", res);

    // pass pointer
    double arr[]={3, 5, 120, -10, 0, '\0'};
    printf("length of array: %d\n", sizeof(arr)/sizeof(arr[0]));
    double *p;
    p=arr;
    res = getMaxValue(p);
    printf("integer: %f\n", res);

    // pass array pointer
    res = getMaxArr(arr);
    printf("integer: %f\n", res);
    return 0;
}