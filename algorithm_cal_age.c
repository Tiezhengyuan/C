#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int power(int base, int exponent){
    if(exponent==0){
        return 1;
    }else{
        return base*power(base, exponent-1);
    }
}


int main()
{
    for(int i=2; i<200; i++){
        int a, b, d, d1,d2;
        int digits[11]={0};
        a = power(i, 3);
        if(a>=1000 && a<=9999){
            for(int m=1;m<5;m++){
                d1= a/power(10, 4-m);
                d2= a/power(10, 4-m+1);
                d=d1-d2*10;
                // printf("%d, %d\n",a, d);
                if(digits[d]==0){
                    digits[d]=1;
                    digits[10] +=1;
                }else{
                    digits[10]-=1;
                }
            }
        }

        b = power(i, 4);
        if(b>=100000 && b<=999999){
            for(int n=5;n<11;n++){
                d1= b/power(10, 6-(n-4));
                d2= b/power(10, 6-(n-4)+1);
                d=d1-d2*10;
                // printf("%d, %d\n",b, d);
                if(digits[d]==0){
                    digits[d]=1;
                    digits[10]+=1;
                }else{
                    digits[10]-=1;
                }
            }
        }
        printf("%d: %d-%d, counts=%d\n", i, a,b, digits[10]);
        if(digits[10]==10){
            printf("age=%d\n",i);
            break;
        }
    }
 
    return 0;
}