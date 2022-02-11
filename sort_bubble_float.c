#include <stdio.h>
int main(){
    int n=10;
    float a[] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};

    int i,m;
    for(i=0;i<n-1;i++){
        for(m=i+1;m<n;m++){
            if(a[i]<a[m]){
                a[i]=a[i]-a[m];
                a[m]=a[i]+a[m];
                a[i]=a[m]-a[i];
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%.2f,", a[i]);
    } 
    
    return 0;
}